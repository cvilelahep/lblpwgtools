import uproot
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt


deltasToPlot = {}
#deltasToPlot["Nominal (ND+FD)"] = "/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/delta_delta_nominal_NDFD.root"
#deltasToPlot["NuWroReweight (FD only)"] = "/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/delta_delta_NuWro_FD.root"
#deltasToPlot["NuWroReweight (ND+FD)"] = "/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/delta_delta_NuWroReweight_NDFD.root"
deltasToPlot["20% Missing proton energy (ND+FD)"] = "/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/delta_delta_MissingProton_NDFD.root"
#deltasToPlot["20% Missing proton energy (FD only)"] = "/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/delta_delta_MissingProton_FD.root"


for sampleName, samplePath in deltasToPlot.iteritems() :

    print sampleName
    print samplePath
    
    fUproot = uproot.open(samplePath)

    print fUproot

    print list(fUproot)
    
    trueDeltas = []
    postFitChi2 = []
    preFitChi2 = []
    
    for idir in list(fUproot) :
        print idir

        arrays = fUproot[idir]["fit_info"].arrays()

        if not arrays["IsValid"][0] :
            continue

        
        parNames = np.array(arrays["fParamNames"])

        postFitChi2.append(np.array(arrays["chisq"][0]))
        deltapiMask = (parNames == "delta(pi)") 
    
        trueDeltas.append( np.array(arrays["fFakeDataVals"])[deltapiMask][0])
#        postFitDeltas.append( np.array(arrays["fPostFitValues"])[deltapiMask][0])


    
    plt.plot(trueDeltas, postFitChi2, label = sampleName)

#plt.title("This plot kills ND skeptics")
plt.xlabel(r"$\delta_{true}$ [$\pi$]")
plt.ylabel(r"$\chi^{2}$")
plt.yscale('log')
plt.legend()
plt.savefig("postFitChi2vsdelta.png")
plt.savefig("postFitChi2vsdelta.pdf")
plt.show()
