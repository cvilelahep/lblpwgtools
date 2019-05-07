#include "SystPriorCovar.h"

#include <vector>
#include <string>

#include "CAFAna/Core/Utilities.h"

namespace ana
{
  SystPriorCovar::SystPriorCovar(std::vector<std::string> * parNames, TVectorD priorVals, TMatrixD  priorCM, std::vector<const ISyst * > systList)
    : paramNames(parNames), priorValues(priorVals) , systs(systList){

    // Check parameter consistency
    int counter = 0;
    for (const ISyst* syst : systs) {
      assert(!(parNames->at(counter++).compare(syst->ShortName())));
    }
    
    nShifts = systs.size();


    std::cout << "Inverting matrix" << std::endl;
    covMatInv.ResizeTo(priorCM.GetNrows(), priorCM.GetNcols());
    covMatInv = TMatrixD(TMatrixD::kInverted, priorCM);
    std::cout << "Matrix inverted" << std::endl;
  }
  
  
  double SystPriorCovar::ChiSq(osc::IOscCalculatorAdjustable* osc,
	       const SystShifts& syst) const {
    

    TVectorD parValues = TVectorD(nShifts);
    double originalPriorPenalty = 0;   
    int counter = 0;

    for (const ISyst* s : systs) {
      parValues[counter] = syst.GetShift(s);
      // Does this work? humm.....
      originalPriorPenalty += s->Penalty(parValues[counter]);
      counter++;
    }

    // Remove prior penalty -- don't want to double-count.
    return Chi2CovMx(priorValues, parValues, covMatInv) - originalPriorPenalty;
  }
}
