#!/bin/bash
if [ -z "$1" ]; then
    echo "Please provide a flag"
    exit 1
fi

python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --checkBins
python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --createBins
python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --createHists
python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --doFit
python tnpEGM_fitter.py etc/config/settings_test.py --flag ${1} --sumUp
