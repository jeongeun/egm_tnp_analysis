#!/bin/bash
#if [ -z "$1" ]; then
#    echo "Please provide a flag"
#    exit 1
#fi
#
#echo "@@@ python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --checkBins"
#python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --checkBins
#echo "@@@ python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --createBins"
#python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --createBins
#echo "@@@ python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --createHists"
#python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --createHists
#echo "@@@ python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --doFit"
#python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --doFit
#echo "@@@ python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --sumUp"
#python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --sumUp


#etc/config/settings_ReReco_postEE.py
#
#python tnpEGM_fitter.py etc/config/settings_ReReco_postEE.py --flag passingHEEPV71 --checkBins
#python tnpEGM_fitter.py etc/config/settings_ReReco_postEE.py --flag passingHEEPV71 --createBins
#python tnpEGM_fitter.py etc/config/settings_ReReco_postEE.py --flag passingHEEPV71 --createHists
#python tnpEGM_fitter.py etc/config/settings_ReReco_postEE.py --flag passingHEEPV71 --doFit
#python tnpEGM_fitter.py etc/config/settings_ReReco_postEE.py --flag passingHEEPV71 --sumUp
#
#etc/config/settings_ReReco_preEE.py

#etc/config/settings_ReReco_preBPIX.py
#etc/config/settings_ReReco_postEE_runFilter.py
python tnpEGM_fitter.py etc/config/settings_ReReco_preBPIX_runFilter.py --flag passingHEEPV71 --checkBins

python tnpEGM_fitter.py etc/config/settings_ReReco_preBPIX_runFilter.py --flag passingHEEPV71 --createBins

python tnpEGM_fitter.py etc/config/settings_ReReco_preBPIX_runFilter.py --flag passingHEEPV71 --createHists

python tnpEGM_fitter.py etc/config/settings_ReReco_preBPIX_runFilter.py --flag passingHEEPV71 --doFit

python tnpEGM_fitter.py etc/config/settings_ReReco_preBPIX_runFilter.py --flag passingHEEPV71 --sumUp

