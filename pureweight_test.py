import etc.inputs.tnpSampleDef as tnpSamples
from libPython.tnpClassUtils import mkdir
import libPython.puReweighter as pu

puType = 0
#
#Run3_130X_ReReco_preEE = {
#    'DY_preEE'   : tnpSample('DY_preEE'   , dirRun3 + 'mc/DYJet_trig_eff_preEE_CD.root', isMC = True, nEvts =  -1 ),
#    'data_Run2022C' : tnpSample('data_Run2022C' , dirRun3 + 'data/C.root',lumi=5.0104),
#    'data_Run2022D' : tnpSample('data_Run2022D' , dirRun3 + 'data/D.root',lumi=2.9700),
#}
#
#Run3_130X_ReReco_postEE = {
#    'DY_postEE'  : tnpSample('DY_postEE'  , dirRun3 + 'mc/DYJet_trig_eff_postEE_EFG.root', isMC = True, nEvts =  -1 ),
#    'data_Run2022E' : tnpSample('data_Run2022E' , dirRun3 + 'data/E.root',lumi=5.8070),
#    'data_Run2022F' : tnpSample('data_Run2022F' , dirRun3 + 'data/F.root',lumi=17.7819),
#    'data_Run2022G' : tnpSample('data_Run2022G' , dirRun3 + 'data/G.root',lumi=3.0828),
#
#for sName in tnpSamples.Moriond18_94X.keys():    
#    sample = tnpSamples.Moriond18_94X[sName]
#for sName in tnpSamples.UL2017.keys():
#    sample = tnpSamples.UL2017[sName]
#for sName in tnpSamples.Run3.keys():    
#    sample = tnpSamples.Run3[sName]
#for sName in tnpSamples.Run3_130X_ReReco_preBPIX.keys():    
#    sample = tnpSamples.Run3_130X_ReReco_preBPIX[sName]
for sName in tnpSamples.Run3_130X_ReReco_postBPIX.keys():    
    sample = tnpSamples.Run3_130X_ReReco_postBPIX[sName]
#    if sample is None : continue
#    if not 'rec' in sName : continue
#    if not 'Winter17' in sName : continue
    if not 'DY' in sName: continue
    if not sample.isMC: continue
    
    trees = {}
    trees['ele'] = 'tnpEleIDs'
#    trees['pho'] = 'tnpPhoIDs'
#    trees['rec'] = 'GsfElectronToSC'
    for tree in trees:
#        dirout =  '/eos/cms/store/group/phys_egamma/swmukher/ntuple_2017_v2/PU/'
#        dirout =  '/eos/cms/store/group/phys_egamma/asroy/Tag-and-Probe_Tree/UL2018_MINIAOD_Nm1/PU_Trees/'
#        dirout =  '/eos/cms/store/group/phys_egamma/asroy/Tag-and-Probe_Tree/UL2018_AOD/PU_Trees/'
        # dirout =  '/eos/cms/store/group/phys_egamma/asroy/Tag-and-Probe_Tree/UL2016/PU_Trees/preVFP/'
        dirout = './PU_Trees/'
        mkdir(dirout)
        
        if   puType == 0 : sample.set_puTree( dirout + '%s_%s.pu.puTree.root'   % (sample.name,tree) )
        elif puType == 1 : sample.set_puTree( dirout + '%s_%s.nVtx.puTree.root' % (sample.name,tree) )
        elif puType == 2 : sample.set_puTree( dirout + '%s_%s.rho.puTree.root'  % (sample.name,tree) )
        sample.set_tnpTree(trees[tree]+'/fitter_tree')
        sample.dump()
        pu.reweight(sample, puType )
