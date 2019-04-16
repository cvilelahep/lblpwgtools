import uproot
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

sampleName = "Nominal"
samplePath = "/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/fit_covar_Nominal.root"

#sampleName = "MissingProton"
#samplePath = "/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/fit_covar_MissingProton.root"

#sampleName = "NuWro"
#samplePath = "/home/cvilela/CAFAna/lblpwgtools/code/CAFAna/CAFAna/build/Linux/scripts/fit_covar_NuWro.root"

fUproot = uproot.open(samplePath)

arrays = fUproot["fit_info"].arrays()

print list(arrays)

oscPars = ['dmsq32scaled', 'ssth23', 'th13', 'delta(pi)', 'ss2th12', 'dmsq21', 'rho']

parNames = np.array(arrays["fParamNames"][0])
postFitVals = np.array(arrays["fPostFitValues"][0])
postFitErrors = np.array(arrays["fPostFitErrors"][0])
preFitVals = np.array(arrays["fPreFitValues"][0])
preFitErrors = np.array(arrays["fPreFitErrors"][0])
fakeDataVals = np.array(arrays["fFakeDataVals"][0])

maskOscPars = np.isin(parNames, oscPars)

maxLinesPerSubPlot = 42
#maxLinesPerSubPlot = 28

print np.count_nonzero(~maskOscPars)

nSubPlots = int(np.ceil(np.count_nonzero(~maskOscPars)/float(maxLinesPerSubPlot)))

print nSubPlots

plt.figure(figsize = (7., 7.))

for i in range(nSubPlots) :
    plt.subplot(1, nSubPlots, i+1)

    plt.errorbar(x = preFitVals[~maskOscPars][i*maxLinesPerSubPlot:(i+1)*maxLinesPerSubPlot], y = range(len(preFitVals[~maskOscPars][i*maxLinesPerSubPlot:(i+1)*maxLinesPerSubPlot])), xerr = preFitErrors[~maskOscPars][i*maxLinesPerSubPlot:(i+1)*maxLinesPerSubPlot], linestyle = "none", elinewidth = 5, alpha = 0.5, color = 'b')

    plt.errorbar(x = postFitVals[~maskOscPars][i*maxLinesPerSubPlot:(i+1)*maxLinesPerSubPlot], y = range(len(postFitVals[~maskOscPars][i*maxLinesPerSubPlot:(i+1)*maxLinesPerSubPlot])), xerr = postFitErrors[~maskOscPars][i*maxLinesPerSubPlot:(i+1)*maxLinesPerSubPlot], linestyle = "none", elinewidth = 5, alpha = 0.5, color = 'r')

    plt.yticks(range(len(parNames[~maskOscPars][i*maxLinesPerSubPlot:(i+1)*maxLinesPerSubPlot])), parNames[~maskOscPars][i*maxLinesPerSubPlot:(i+1)*maxLinesPerSubPlot])

plt.tight_layout()

plt.savefig("nuisancePostFits_"+sampleName+".png")
plt.savefig("nuisancePostFits_"+sampleName+".pdf")

plt.figure(figsize = (3., 7.))

numOscPars = np.count_nonzero(maskOscPars)

for i in range(numOscPars) :
    plt.subplot(numOscPars, 1, i+1)
    plt.errorbar(x = [fakeDataVals[maskOscPars][i]], y = 0, xerr = [0.], elinewidth = 5, color = 'k', marker = "|")
    plt.errorbar(x = [postFitVals[maskOscPars][i]], y = 0, xerr = [postFitErrors[maskOscPars][i]], linestyle = "none", elinewidth = 5, alpha = 0.5, color = 'r', marker = "|")
    plt.yticks([0], [parNames[maskOscPars][i]])
    plt.ticklabel_format(style='sci', axis='x', scilimits=(-2,2))

plt.tight_layout()

plt.savefig("oscParsPostFits_"+sampleName+".png")
plt.savefig("oscParsPostFits_"+sampleName+".pdf")


print "Names    ", parNames[maskOscPars]
print "Pre vals ", fakeDataVals[maskOscPars]
print "Post vals", postFitVals[maskOscPars]
print "Post errs", postFitErrors[maskOscPars]




plt.show()

