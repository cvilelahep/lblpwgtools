import uproot
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt


deltasToPlot = {}
deltasToPlot["Nominal (FD)"] = ["/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/delta_excl_nominal_FD.root",
                                "/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/delta_delta_nominal_NDFD.root"]
deltasToPlot["NuWroReweight (FD)"] = ["/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/delta_excl_NuWro_FD.root",
                                      "/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/delta_delta_NuWro_FD.root"]
deltasToPlot["MissingProtonEnergy (FD)"] = ["/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/delta_excl_MissingProton_FD.root",
                                            "/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/delta_delta_MissingProton_FD.root"]


for sampleName, samplePath in deltasToPlot.iteritems() :

    print sampleName
    print samplePath
    
    fUproot = uproot.open(samplePath[0])

    fUprootBF = uproot.open(samplePath[1])
    
    print fUproot

    print list(fUproot)
    
    trueDeltas = []
    bestFitChi2 = []
    bestFitGlobalChi2 = []

    nDeltaPoints = len(list(fUproot))
    deltaStep = 2./nDeltaPoints

    trueDeltas = np.arange(0., 2., deltaStep)

    if len(list(fUproot)) != len(list(fUprootBF)) :
        print "Best fit and fixed delta do not have same number of test points. Exiting."
        exit(-1)
    
    for idir in list(fUproot) :
        print idir

        arrays = fUproot[idir]["fit_info"].arrays()
        
        if not arrays["IsValid"][0] :
            continue
    
        parNames = np.array(arrays["fParamNames"])
        bestFitChi2.append( arrays["chisq"][0] )

        
    for idir in list(fUprootBF) :
        arraysBF = fUprootBF[idir]["fit_info"].arrays()
        bestFitGlobalChi2.append( arraysBF["chisq"][0] )
        
    plt.plot(trueDeltas, (np.array(bestFitChi2)-bestFitGlobalChi2)**0.5, label = sampleName)

#plt.title("This plot kills ND skeptics")
plt.xlabel(r"$\delta_{true}$ [$\pi$]")
plt.ylabel(r"$\sqrt{\chi^{2} (\delta_{true}) - \chi^2 (\delta_{best fit})}$")
plt.legend(loc = "upper right")
plt.savefig("truedeltaexclvsdelta.png")
plt.savefig("truedeltaexclvsdelta.pdf")
plt.show()
