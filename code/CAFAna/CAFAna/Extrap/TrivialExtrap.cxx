#include "CAFAna/Extrap/TrivialExtrap.h"

#include "CAFAna/Cuts/TruthCuts.h"
#include "CAFAna/Core/Loaders.h"
#include "CAFAna/Core/SpectrumLoader.h"

#include "TDirectory.h"
#include "TObjString.h"

namespace ana
{
  //----------------------------------------------------------------------
  TrivialExtrap::TrivialExtrap(DUNERunPOTSpectrumLoader& loaderBeam,
                               DUNERunPOTSpectrumLoader& loaderNue,
                               DUNERunPOTSpectrumLoader& loaderNuTau,
                               DUNERunPOTSpectrumLoader& loaderNC,
                               const HistAxis& axis,
                               const Cut& cut,
                               const SystShifts& shift,
                               const Var& wei)
    :
    fNueApp       (loaderNue,   axis, cut && kIsSig       && !kIsAntiNu, shift, wei),
    fNueAppAnti   (loaderNue,   axis, cut && kIsSig       &&  kIsAntiNu, shift, wei),

    fNumuSurv     (loaderBeam,  axis, cut && kIsNumuCC    && !kIsAntiNu, shift, wei),
    fNumuSurvAnti (loaderBeam,  axis, cut && kIsNumuCC    &&  kIsAntiNu, shift, wei),

    fNumuApp      (loaderNuTau, axis, cut && kIsNumuApp   && !kIsAntiNu, shift, wei),
    fNumuAppAnti  (loaderNuTau, axis, cut && kIsNumuApp   &&  kIsAntiNu, shift, wei),

    fNueSurv      (loaderBeam,  axis, cut && kIsBeamNue   && !kIsAntiNu, shift, wei),
    fNueSurvAnti  (loaderBeam,  axis, cut && kIsBeamNue   &&  kIsAntiNu, shift, wei),

    fTauFromE     (loaderNue,   axis, cut && kIsTauFromE  && !kIsAntiNu, shift, wei),
    fTauFromEAnti (loaderNue,   axis, cut && kIsTauFromE  &&  kIsAntiNu, shift, wei),

    fTauFromMu    (loaderNuTau, axis, cut && kIsTauFromMu && !kIsAntiNu, shift, wei),
    fTauFromMuAnti(loaderNuTau, axis, cut && kIsTauFromMu &&  kIsAntiNu, shift, wei),

    fNC           (loaderNC,  axis, cut && kIsNC,                      shift, wei)
  {
    // I'm not sure about POT counting for different NC swap variants. Let's leave them out for now
  }


  //----------------------------------------------------------------------
  TrivialExtrap::TrivialExtrap(DUNERunPOTSpectrumLoader& loaderBeam,
                               DUNERunPOTSpectrumLoader& loaderNue,
                               DUNERunPOTSpectrumLoader& loaderNuTau,
                               DUNERunPOTSpectrumLoader& loaderNC,
                               std::string label,
                               const Binning& bins,
                               const Var& var,
                               const Cut& cut,
                               const SystShifts& shift,
                               const Var& wei)
    :
    TrivialExtrap(loaderBeam, loaderNue, loaderNuTau, loaderNC,
                  HistAxis(label, bins, var),
                  cut, shift, wei)
  {
  }

  //----------------------------------------------------------------------
  TrivialExtrap::TrivialExtrap(Loaders& loaders,
                               std::string label,
                               const Binning& bins,
                               const Var& var,
                               const Cut& cut,
                               const SystShifts& shift,
                               const Var& wei)
    : TrivialExtrap(loaders, HistAxis(label, bins, var), cut, shift, wei)
  {
  }

  //----------------------------------------------------------------------
  TrivialExtrap::TrivialExtrap(Loaders& loaders,
                               const HistAxis& axis,
                               const Cut& cut,
                               const SystShifts& shift,
                               const Var& wei)
    : TrivialExtrap(loaders.GetLoader(caf::kFARDET, Loaders::kMC, ana::kBeam, Loaders::kNonSwap),
                    loaders.GetLoader(caf::kFARDET, Loaders::kMC, ana::kBeam, Loaders::kFluxSwap),
                    loaders.GetLoader(caf::kFARDET, Loaders::kMC, ana::kBeam, Loaders::kTauSwap),
                    axis, cut, shift, wei)
  {
  }

  //----------------------------------------------------------------------
  TrivialExtrap::TrivialExtrap(SpectrumLoaderBase& loader,
                               SpectrumLoaderBase& loaderSwap,
                               SpectrumLoaderBase& loaderTau,
                               const HistAxis& axis,
                               const Cut& cut,
                               const SystShifts& shift,
                               const Var& wei) :
    fNueApp       (loaderSwap, axis, cut && kIsSig       && !kIsAntiNu, shift, wei),
    fNueAppAnti   (loaderSwap, axis, cut && kIsSig       &&  kIsAntiNu, shift, wei),
    fNumuSurv     (loader,     axis, cut && kIsNumuCC    && !kIsAntiNu, shift, wei),
    fNumuSurvAnti (loader,     axis, cut && kIsNumuCC    &&  kIsAntiNu, shift, wei),
    fNumuApp      (loaderSwap, axis, cut && kIsNumuApp   && !kIsAntiNu, shift, wei),
    fNumuAppAnti  (loaderSwap, axis, cut && kIsNumuApp   &&  kIsAntiNu, shift, wei),
    fNueSurv      (loader,     axis, cut && kIsBeamNue   && !kIsAntiNu, shift, wei),
    fNueSurvAnti  (loader,     axis, cut && kIsBeamNue   &&  kIsAntiNu, shift, wei),
    fTauFromE     (loaderTau,  axis, cut && kIsTauFromE  && !kIsAntiNu, shift, wei),
    fTauFromEAnti (loaderTau,  axis, cut && kIsTauFromE  &&  kIsAntiNu, shift, wei),
    fTauFromMu    (loaderTau,  axis, cut && kIsTauFromMu && !kIsAntiNu, shift, wei),
    fTauFromMuAnti(loaderTau,  axis, cut && kIsTauFromMu &&  kIsAntiNu, shift, wei),
    fNC           (loader,     axis, cut && kIsNC,                    shift, wei)
  {
    // Swapped files are just as valid a source of NCs as unswapped. This
    // approximately doubles our statistics. SpectrumLoader just adds events
    // and POT for both cases, which is the right thing to do.
    loaderSwap.AddSpectrum(fNC, axis.GetMultiDVar(), cut && kIsNC, shift, wei);
    loaderTau .AddSpectrum(fNC, axis.GetMultiDVar(), cut && kIsNC, shift, wei);
  }

  //----------------------------------------------------------------------
  TrivialExtrap::TrivialExtrap(SpectrumLoaderBase& loader,
                               SpectrumLoaderBase& loaderSwap,
                               SpectrumLoaderBase& loaderTau,
                               std::string label,
                               const Binning& bins,
                               const Var& var,
                               const Cut& cut,
                               const SystShifts& shift,
                               const Var& wei) :
    TrivialExtrap(loader, loaderSwap, loaderTau,
                  HistAxis(label, bins, var),
                  cut, shift, wei)
  {
  }

  //----------------------------------------------------------------------
  TrivialExtrap::TrivialExtrap(SpectrumLoaderBase& loader,
                               SpectrumLoaderBase& loaderSwap,
                               std::string label,
                               const Binning& bins,
                               const Var& var,
                               const Cut& cut,
                               const SystShifts& shift,
                               const Var& wei)
    : TrivialExtrap(loader, loaderSwap, kNullLoader,
                    label, bins, var, cut, shift, wei)
  {
  }

  //----------------------------------------------------------------------
  void TrivialExtrap::SaveTo(TDirectory* dir) const
  {
    TDirectory* tmp = gDirectory;

    dir->cd();

    TObjString("TrivialExtrap").Write("type");

    fNueApp.SaveTo(dir->mkdir("nue_app"));
    fNueAppAnti.SaveTo(dir->mkdir("nue_app_anti"));
    fNC.SaveTo(dir->mkdir("nc"));
    fNumuSurv.SaveTo(dir->mkdir("numu_surv"));
    fNumuSurvAnti.SaveTo(dir->mkdir("numu_surv_anti"));
    fNumuApp.SaveTo(dir->mkdir("numu_app"));
    fNumuAppAnti.SaveTo(dir->mkdir("numu_app_anti"));
    fNueSurv.SaveTo(dir->mkdir("nue_surv"));
    fNueSurvAnti.SaveTo(dir->mkdir("nue_surv_anti"));
    fTauFromE.SaveTo(dir->mkdir("nutau_from_nue"));
    fTauFromEAnti.SaveTo(dir->mkdir("nutau_from_nue_anti"));
    fTauFromMu.SaveTo(dir->mkdir("nutau_from_numu"));
    fTauFromMuAnti.SaveTo(dir->mkdir("nutau_from_numu_anti"));

    tmp->cd();
  }

  //----------------------------------------------------------------------
  std::unique_ptr<TrivialExtrap> TrivialExtrap::LoadFrom(TDirectory* dir)
  {
    std::unique_ptr<TrivialExtrap> ret(new TrivialExtrap);

    // This is a lot of repetitive typing. Define some macros
#define LOAD_OSC(FIELD, LABEL) assert(dir->GetDirectory(LABEL)); ret->FIELD = *OscillatableSpectrum::LoadFrom(dir->GetDirectory(LABEL));
#define LOAD_SPECT(FIELD, LABEL) assert(dir->GetDirectory(LABEL)); ret->FIELD = *Spectrum::LoadFrom(dir->GetDirectory(LABEL));

    LOAD_OSC(fNueApp,        "nue_app");
    LOAD_OSC(fNueAppAnti,    "nue_app_anti");
    LOAD_OSC(fNumuSurv,      "numu_surv");
    LOAD_OSC(fNumuSurvAnti,  "numu_surv_anti");
    LOAD_OSC(fNumuApp,       "numu_app");
    LOAD_OSC(fNumuAppAnti,   "numu_app_anti");
    LOAD_OSC(fNueSurv,       "nue_surv");
    LOAD_OSC(fNueSurvAnti,   "nue_surv_anti");
    LOAD_OSC(fTauFromE,      "nutau_from_nue");
    LOAD_OSC(fTauFromEAnti,  "nutau_from_nue_anti");
    LOAD_OSC(fTauFromMu,     "nutau_from_numu");
    LOAD_OSC(fTauFromMuAnti, "nutau_from_numu_anti");

    LOAD_SPECT(fNC, "nc");

    return ret;
  }
}
