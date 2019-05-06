#include "common_fit_definitions.C"

// Scan over true delta and find best fit chi2 with delta fixed at truth
void delta_true_exclusion_joint(std::string stateFname="common_state_mcc11v3_broken.root",
                                std::string outputFname="asimov_test.root",
                                std::string systSet = "nosyst",
                                std::string sampleString="ndfd", std::string penaltyString="",
                                std::string FakeDataSysts = "", int FakeDataValue = 1, std::string OtherSystsToExclude = "",
                                int asimov_set=0){
  
  gROOT->SetBatch(1);
  gRandom->SetSeed(0);

  std::vector<const ISyst*> systlist = GetListOfSysts(systSet);

  // Oscillation parameters to fit
  std::vector<const IFitVar *> oscVarsAll = {
    &kFitDmSq32Scaled,  &kFitSinSqTheta23, &kFitTheta13,
    &kFitSinSq2Theta12, &kFitDmSq21,       &kFitRho};
  
  SystShifts trueSyst = kNoShift;

  // Can build fake data fits easily by passing syst parameter names to fix to 1
  // and then remove from the fit.
  if (FakeDataSysts.size()) {
    // Get all of the systs (notably including missing proton energy fake data)
    std::vector<const ISyst *> all_systs = GetListOfSysts();
    for (ISyst const *s : all_systs) {
      if (FakeDataSysts.find(s->ShortName()) != std::string::npos) {
        trueSyst.SetShift(s, FakeDataValue);
        auto it = std::find(systlist.begin(), systlist.end(), s);
        if (it != systlist.end()) {
          systlist.erase(it);
        }
      }
      if (OtherSystsToExclude.find(s->ShortName()) != std::string::npos) {
        auto it = std::find(systlist.begin(), systlist.end(), s);
        if (it != systlist.end()) {
          systlist.erase(it);
        }
      }
    }
  }

  // Let's start with fixed hierarchy for now...
  int hie = +1;
  int octant = +1;

  // Bogus oscseeds for now
  std::map<const IFitVar *, std::vector<double>> oscSeeds = {};
  
  // Add a penalty term (maybe)
  IExperiment *penalty = GetPenalty(hie, octant, penaltyString);
  
  TFile *fout = new TFile(outputFname.c_str(), "RECREATE");
  fout->cd();
 
  int count = 0;
  char dirNameBuff[100];
  vector<TDirectory*> dirs;
  for (double testDeltaPi = 0.; testDeltaPi < 2.; testDeltaPi += 0.05){
    sprintf(dirNameBuff, "trueDeltaPiExclusion_%i", count++);
    dirs.push_back( (TDirectory*) fout->mkdir(dirNameBuff) );
    
    // Set osc pars other than deltapi to asimov_set
    osc::IOscCalculatorAdjustable *trueOsc = NuFitOscCalc(hie, octant, asimov_set);
    osc::IOscCalculatorAdjustable *testOsc = NuFitOscCalc(hie, octant, asimov_set);

    trueOsc->SetdCP(TMath::Pi()*testDeltaPi);
    testOsc->SetdCP(TMath::Pi()*testDeltaPi);
    
    SystShifts testSyst;
    for (auto s : systlist)
      testSyst.SetShift(s, GetBoundedGausThrow(s->Min() * 0.05, s->Max() * 0.05));

    double thischisq =
      RunFitPoint(stateFname, sampleString, trueOsc, trueSyst, false, oscVarsAll,
                  systlist, testOsc, testSyst, oscSeeds, penalty,
                  Fitter::kNormal | Fitter::kIncludeHesse, dirs.back());
    
  }
  fout->Close();
}
