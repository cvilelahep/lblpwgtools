#pragma once

#include <vector>
#include <string>

#include "TMatrixD.h"
#include "TVectorD.h"
#include "TTree.h"
#include "TH2D.h"

#include "CAFAna/Core/SystShifts.h"
#include "CAFAna/Experiment/IExperiment.h"

namespace ana
{
  class SystPriorCovar : public IExperiment
  {

  private :
    int nShifts = 0;
    
    std::vector<std::string> * paramNames;
    TVectorD  priorValues;
    std::vector<const ISyst *> systs;
    TMatrixD  covMatInv;
    
    
  public :
    SystPriorCovar(std::vector<std::string> * parNames, TVectorD  priorVals, TMatrixD  priorCM, std::vector<const ISyst * > systList);
    

    virtual double ChiSq(osc::IOscCalculatorAdjustable* osc,
                         const SystShifts& syst = SystShifts::Nominal()) const override;
  };
}
