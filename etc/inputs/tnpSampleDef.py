from libPython.tnpClassUtils import tnpSample

#github branches
#LegacyReReco2016: https://github.com/swagata87/egm_tnp_analysis/tree/Legacy2016_94XIDv2 
#ReReco2017: https://github.com/swagata87/egm_tnp_analysis/tree/tnp_2017datamc_IDV2_10_2_0
#PromptReco2018: https://github.com/swagata87/egm_tnp_analysis/tree/egm_tnp_Prompt2018_102X_10222018_MC102XECALnoiseFix200kRelVal
#UL2017: https://github.com/swagata87/egm_tnp_analysis/blob/UL2017Final/etc/inputs/tnpSampleDef.py

### eos repositories
eosLegacyReReco2016 = '/eos/cms/store/group/phys_egamma/swmukher/egmNtuple_V2ID_2016/'
eosReReco2017 = '/eos/cms/store/group/phys_egamma/swmukher/ntuple_2017_v2/'
eosReReco2018 = '/eos/cms/store/group/phys_egamma/swmukher/rereco2018/ECAL_NOISE/'
# UL Summer19
eosUL2016preVFP  = '/eos/cms/store/group/phys_egamma/tnpTuples/rasharma/2021-02-10/UL2016preVFP/merged/'
eosUL2016postVFP = '/eos/cms/store/group/phys_egamma/tnpTuples/rasharma/2021-02-10/UL2016postVFP/merged/'
eosUL2017 = '/eos/cms/store/group/phys_egamma/tnpTuples/tomc/2020-05-20/UL2017/merged/'
eosUL2018 = '/eos/cms/store/group/phys_egamma/tnpTuples/tomc/2020-05-20/UL2018/merged/'
eosPrompt2022FG = '/eos/cms/store/group/phys_egamma/ec/tnpTuples/rsalvatico/ntuples_Run3/PromptData2022/'
eos2022MC = '/eos/cms/store/group/phys_egamma/abelvede/MC_merged/'
eosPrompt2023 = '/eos/cms/store/group/phys_egamma/ec/tnpTuples/Prompt2023/photonIDpostBPIXntuples/'
#eosPrompt2022MC = '/eos/cms/store/group/phys_egamma/ec/fmausolf/EGM_comm/DYToEE_M-50_NNPDF31_TuneCP5_13p6TeV-powheg-pythia8_EleID_PhoID/DYToEE_M-50_NNPDF31_TuneCP5_13p6TeV-powheg-pythia8/DYToEE_M-50_NNPDF31_TuneCP5_13p6TeV-powheg-pythia8_EleID_PhoID/221018_080249/0000/'


ReReco2017 = {

    'DY_madgraph'              : tnpSample('DY_madgraph',
                                       eosReReco2017 + 'DYJetsToLL.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_1j_madgraph'              : tnpSample('DY_1j_madgraph',
                                       eosReReco2017 + 'DY1JetsToLLM50madgraphMLM.root',
                                       isMC = True, nEvts =  -1 ),
#    'DY_amcatnlo'                 : tnpSample('DY_amcatnlo',
#                                       eosMoriond18 + 'DYJetsToLLM50amcatnloFXFX.root',
#                                       isMC = True, nEvts =  -1 ),
    'DY_amcatnloext'                 : tnpSample('DY_amcatnloext',
                                       eosReReco2017 + 'DYJetsToLLM50amcatnloFXFXext.root',
                                       isMC = True, nEvts =  -1 ),


    'data_Run2017B' : tnpSample('data_Run2017B' , eosReReco2017 + 'RunB.root' , lumi = 4.793 ),
    'data_Run2017C' : tnpSample('data_Run2017C' , eosReReco2017 + 'RunC.root' , lumi = 9.753),
    'data_Run2017D' : tnpSample('data_Run2017D' , eosReReco2017 + 'RunD.root' , lumi = 4.320 ),
    'data_Run2017E' : tnpSample('data_Run2017E' , eosReReco2017 + 'RunE.root' , lumi = 8.802),
    'data_Run2017F' : tnpSample('data_Run2017F' , eosReReco2017 + 'RunF.root' , lumi = 13.567),

    }

LegacyReReco2016 = {

    'DY_madgraph' : tnpSample('DY_madgraph', 
                                        eosLegacyReReco2016 + 'TnPTree_DY_M50_madgraphMLM.root',
                                        isMC = True, nEvts =  -1 ),
    'DY_amcatnlo' : tnpSample('DY_amcatnlo', 
                                        eosLegacyReReco2016 + 'TnPTree_DY_M50_amcatnloFXFX.root',
                                        isMC = True, nEvts =  -1 ),

    'data_Run2016Bv2' : tnpSample('data_Run2017Bv2' , eosLegacyReReco2016 + 'TnPTree_2016B_2.root' , lumi = 5.785 ),
    'data_Run2016C' : tnpSample('data_Run2017C' , eosLegacyReReco2016 + 'TnPTree_2016C.root' , lumi = 2.573 ),
    'data_Run2016D' : tnpSample('data_Run2017D' , eosLegacyReReco2016 + 'TnPTree_2016D.root' , lumi = 4.248 ),
    'data_Run2016E' : tnpSample('data_Run2017E' , eosLegacyReReco2016 + 'TnPTree_2016E.root' , lumi = 3.947 ),
    'data_Run2016F' : tnpSample('data_Run2017F' , eosLegacyReReco2016 + 'TnPTree_2016F.root' , lumi = 3.102 ),
    'data_Run2016G' : tnpSample('data_Run2017G' , eosLegacyReReco2016 + 'TnPTree_2016G.root' , lumi = 7.540 ),
    'data_Run2016H' : tnpSample('data_Run2017H' , eosLegacyReReco2016 + 'TnPTree_2016H.root' , lumi = 7.813 ),



}


ReReco2018 = {
    ### MiniAOD TnP for IDs scale 

    'DY_madgraph'              : tnpSample('DY_madgraph',
                                            eosReReco2018 + 'DYJetsToLLmadgraphMLM.root',
                                            isMC = True, nEvts =  -1 ),

    'DY_powheg'              : tnpSample('DY_powheg',
                                            eosReReco2018 + 'DYToEEpowheg.root',
                                            isMC = True, nEvts =  -1 ),
    

    'data_Run2018A' : tnpSample('data_Run2018A' , eosReReco2018 + 'RunA.root' , lumi = 10.723),  
    'data_Run2018B' : tnpSample('data_Run2018B' , eosReReco2018 + 'RunB.root' , lumi = 5.964),
    'data_Run2018C' : tnpSample('data_Run2018C' , eosReReco2018 + 'RunC.root' , lumi = 6.382),
    'data_Run2018D' : tnpSample('data_Run2018D' , eosReReco2018 + 'RunD.root' , lumi = 29.181), 
}

UL2016_preVFP = {
    'DY_madgraph'              : tnpSample('DY_madgraph',
                                       eosUL2016preVFP + 'DY_LO_L1matched.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_amcatnloext'           : tnpSample('DY_amcatnloext',
                                       eosUL2016preVFP + 'DY_NLO_L1matched.root',
                                       isMC = True, nEvts =  -1 ),


    'data_Run2016B' : tnpSample('data_Run2016B' , eosUL2016preVFP + 'Run2016B_L1matched.root' , lumi = 5.9098246),
    'data_Run2016C' : tnpSample('data_Run2016C' , eosUL2016preVFP + 'Run2016C_L1matched.root' , lumi = 2.64992914),
    'data_Run2016D' : tnpSample('data_Run2016D' , eosUL2016preVFP + 'Run2016D_L1matched.root' , lumi = 4.292865604),
    'data_Run2016E' : tnpSample('data_Run2016E' , eosUL2016preVFP + 'Run2016E_L1matched.root' , lumi = 4.185165152),
    'data_Run2016F' : tnpSample('data_Run2016F' , eosUL2016preVFP + 'Run2016F_L1matched.root' , lumi = 2.725508364)
}

UL2016_postVFP = {
    'DY_madgraph'              : tnpSample('DY_madgraph',
                                       eosUL2016postVFP + 'DY_LO_L1matched.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_amcatnloext'           : tnpSample('DY_amcatnloext',
                                       eosUL2016postVFP + 'DY_NLO_L1matched.root',
                                       isMC = True, nEvts =  -1 ),


    'data_Run2016F' : tnpSample('data_Run2016F' , eosUL2016postVFP + 'Run2016F_L1merged.root' , lumi = 0.414987426),
    'data_Run2016G' : tnpSample('data_Run2016G' , eosUL2016postVFP + 'Run2016G_L1matched.root' , lumi = 7.634508755),
    'data_Run2016H' : tnpSample('data_Run2016H' , eosUL2016postVFP + 'Run2016H_L1matched.root' , lumi = 8.802242522)
    }

UL2017 = {
    'DY_madgraph'              : tnpSample('DY_madgraph',
                                       eosUL2017 + 'DY_LO.root ',
                                       isMC = True, nEvts =  -1 ),
    'DY_amcatnloext'           : tnpSample('DY_amcatnloext',
                                       eosUL2017 + 'DY_NLO.root',
                                       isMC = True, nEvts =  -1 ),


    'data_Run2017B' : tnpSample('data_Run2017B' , eosUL2017 + 'Run2017B.root' , lumi = 4.793961427),
    'data_Run2017C' : tnpSample('data_Run2017C' , eosUL2017 + 'Run2017C.root' , lumi = 9.631214821),
    'data_Run2017D' : tnpSample('data_Run2017D' , eosUL2017 + 'Run2017D.root' , lumi = 4.247682053),
    'data_Run2017E' : tnpSample('data_Run2017E' , eosUL2017 + 'Run2017E.root' , lumi = 9.313642402),
    'data_Run2017F' : tnpSample('data_Run2017F' , eosUL2017 + 'Run2017F.root' , lumi = 13.510934811),
}

UL2018 = {
    'DY_madgraph'              : tnpSample('DY_madgraph',
                                       eosUL2018 + 'DY_LO.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_amcatnloext'           : tnpSample('DY_amcatnloext',
                                       eosUL2018 + 'DY_NLO.root',
                                       isMC = True, nEvts =  -1 ),


    'data_Run2018A' : tnpSample('data_Run2018A' , eosUL2018 + 'Run2018A.root' , lumi = 14.02672485),
    'data_Run2018B' : tnpSample('data_Run2018B' , eosUL2018 + 'Run2018B.root' , lumi = 7.060617355),
    'data_Run2018C' : tnpSample('data_Run2018C' , eosUL2018 + 'Run2018C.root' , lumi = 6.894770971),
    'data_Run2018D' : tnpSample('data_Run2018D' , eosUL2018 + 'Run2018D.root' , lumi = 31.74220577),
}

the2022_preEE = {
    'DY_madgraph'              : tnpSample('DY_madgraph',
                                       eos2022MC + 'DYJetsToLL_MG-pythia8_Run3Summer22MiniAODv4_13_3_0.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_amcatnloext'           : tnpSample('DY_powheg',
                                       eos2022MC + 'DYto2E_powheg-pythia8_Run3Summer22MiniAODv4_13_3_0.root',
                                       isMC = True, nEvts =  -1 ),
}

the2022_postEE = {
    'DY_madgraph'              : tnpSample('DY_madgraph',
                                       eos2022MC + 'DYJetsToLL_MG-pythia8_Run3Summer22EEMiniAODv4_13_3_0.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_amcatnloext'           : tnpSample('DY_powheg',
                                       eos2022MC + 'DYto2E_powheg-pythia8_Run3Summer22EEMiniAODv4_13_3_0.root',
                                       isMC = True, nEvts =  -1 ),
}


Prompt2023_preBPIX = {
    'DY_madgraph'              : tnpSample('DY_madgraph',
                                       eosPrompt2023 + 'DY_LO_2023preBPIX.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_amcatnloext'           : tnpSample('DY_amcatnloext',
                                       eosPrompt2023 + 'DY_NLO_2023preBPIX.root',
                                       isMC = True, nEvts =  -1 ),

    'data_Run2023C' : tnpSample('data_Run2023C' , eosPrompt2023 + 'data_2023C.root' , lumi = 17.060),
}

Prompt2023_postBPIX = {
    'DY_madgraph'              : tnpSample('DY_madgraph',
                                       eosPrompt2023 + 'DY_LO_2023postBPIX.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_amcatnloext'           : tnpSample('DY_amcatnloext',
                                       eosPrompt2023 + 'DY_NLO_2023postBPIX.root',
                                       isMC = True, nEvts =  -1 ),

    'data_Run2023D' : tnpSample('data_Run2023D' , eosPrompt2023 + 'data_2023D.root' , lumi = 9.525),
}

Prompt2023_preBPIX_AOD = {
    'DY_madgraph'              : tnpSample('DY_madgraph',
                                       eosPrompt2023 + '/AODntuples/DY_LO_2023preBPIX_AOD.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_amcatnloext'           : tnpSample('DY_amcatnloext',
                                       eosPrompt2023 + '/AODntuples/DY_NLO_2023preBPIX_AOD.root',
                                       isMC = True, nEvts =  -1 ),

    'data_Run2023C' : tnpSample('data_Run2023C' , eosPrompt2023 + '/AODntuples/data_2023C_AOD.root' , lumi = 17.060),
}

Prompt2023_postBPIX_AOD = {
    'DY_madgraph'              : tnpSample('DY_madgraph',
                                       eosPrompt2023 + '/AODntuples/DY_LO_2023postBPIX_AOD.root',
                                       isMC = True, nEvts =  -1 ),
    'DY_amcatnloext'           : tnpSample('DY_amcatnloext',
                                       eosPrompt2023 + '/AODntuples/DY_NLO_2023postBPIX_AOD.root',
                                       isMC = True, nEvts =  -1 ),

    'data_Run2023D' : tnpSample('data_Run2023D' , eosPrompt2023 + '/AODntuples/data_2023D_AOD.root' , lumi = 9.525),
}


# DATA 2022
#EG_Run2022CD.root
#EG_Run2022C_preEE_all.root
#EG_Run2022D_preEE_all.root
#EG_Run2022EFG.root
#EG_Run2022E_postEE_all.root
#EG_Run2022F_postEE_all.root
#EG_Run2022G_postEE_all.root
# MC 2022
#DY_LO_mg_2022postEE.root
#DY_LO_mg_2022preEE.root
#DY_NLO_amc_2022postEE.root
#DY_NLO_amc_2022preEE.root
#DY_NLO_pow_M-ALL_2022postEE.root
#DY_NLO_pow_M-ALL_2022preEE.root
#../root/mc/Rew_DY_LO_mg_2022postEE_trig_eff_EFG.root
#../root/mc/Rew_DY_NLO_pow_M-ALL_2022postEE_trig_eff_EFG.root
#../root/mc/Rew_DY_LO_mg_2022preEE_trig_eff_CD.root    
#../root/mc/Rew_DY_NLO_pow_M-ALL_2022preEE_trig_eff_CD.root
#../root/mc/Rew_DY_NLO_amc_2022preEE_trig_eff_CD.root
#/d0/scratch/jelee/workspace/HEEPstudy/HEEP2024Aug/CMSSW_13_3_0/src/EgammaAnalysis/TnPTreeProducer/test/hltResampling/reweightedMC/Rew_DY_NLO_amc_2022postEE_trig_eff_EFG.root

#Rew_DY_LO_mg_2022postEE_trig_eff_EFG.root          
#Rew_DY_LO_mg_2022preEE_trig_eff_CD.root            
#Rew_DY_NLO_amc_v1_2022postEE_trig_eff_EFG.root
#Rew_DY_NLO_amc_v2_2022postEE_trig_eff_EFG.root
#Rew_DY_NLO_amc_v3_2022postEE_trig_eff_EFG.root
#Rew_DY_NLO_pow_M-ALL_2022postEE_trig_eff_EFG.root
#Rew_DY_NLO_pow_M-ALL_2022preEE_trig_eff_CD.root
#Rew_DY_NLO_amc_2022postEE_trig_eff_EFG.root        
#Rew_DY_NLO_amc_2022preEE_trig_eff_CD.root          

#/d0/scratch/jelee/workspace/HEEPstudy/HEEP2024March/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/data/2023/*
#8.4G Aug 13 14:36 /d0/scratch/jelee/workspace/HEEPstudy/HEEP2024March/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/data/2023/C_2023.root
#4.4G Aug 13 14:36 /d0/scratch/jelee/workspace/HEEPstudy/HEEP2024March/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/data/2023/D_2023.root
#2.1G Aug 13 14:36 /d0/scratch/jelee/workspace/HEEPstudy/HEEP2024March/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/data/2023/C1_2023.root
# 355 Aug 13 14:36 /d0/scratch/jelee/workspace/HEEPstudy/HEEP2024March/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/data/2023/Filtered_C1_2023.root
#553M Aug 13 14:36 /d0/scratch/jelee/workspace/HEEPstudy/HEEP2024March/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/data/2023/Filtered_EGamma0_C1_all.root
#553M Aug 13 14:36 /d0/scratch/jelee/workspace/HEEPstudy/HEEP2024March/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/data/2023/Filtered_EGamma1_C1_all.root
#765M Aug 13 14:36 /d0/scratch/jelee/workspace/HEEPstudy/HEEP2024March/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/data/2023/C3_2023.root
#595M Aug 13 14:36 /d0/scratch/jelee/workspace/HEEPstudy/HEEP2024March/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/data/2023/C2_2023.root
#5.1G Aug 13 14:36 /d0/scratch/jelee/workspace/HEEPstudy/HEEP2024March/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/data/2023/C4_2023.root
#8.4G Aug 13 14:36 /d0/scratch/jelee/workspace/HEEPstudy/HEEP2024March/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/data/2023/C_2023_ALL.root
#1.1G Aug 13 14:36 /d0/scratch/jelee/workspace/HEEPstudy/HEEP2024March/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/data/2023/C1_2023_Filtered.root


dirRun3 = '/d0/scratch/jelee/workspace/HEEPstudy/HEEP2024Aug/TnPFitter/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/mc/'
mcRun3  = '/d0/scratch/jelee/workspace/HEEPstudy/HEEP2024Aug/CMSSW_13_3_0/src/EgammaAnalysis/TnPTreeProducer/test/hltResampling/reweightedMC/'
mcRun3_new  = '/d0/scratch/jelee/workspace/HEEPstudy/HEEP2024Aug/CMSSW_13_3_0/src/EgammaAnalysis/TnPTreeProducer/test/hltResampling/'
PNFS    = '/pnfs/knu.ac.kr/data/cms/store/user/jelee/tnpTuple_2024-08-27_SS_corrected/'
Datadir = '/d0/scratch/jelee/workspace/HEEPstudy/HEEP2024March/CMSSW_11_2_0/src/egm_tnp_analysis/etc/root/data/'

Run2022_130X_ReReco_preEE = {
    'DY_amc_preEE'  : tnpSample('DY_amc_preEE'   , dirRun3 + 'Rew_DY_NLO_amc_2022preEE_trig_eff_CD.root', isMC = True, nEvts =  -1 ),
    'DY_mg_preEE'   : tnpSample('DY_mg_preEE'    , dirRun3 + 'Rew_DY_LO_mg_2022preEE_trig_eff_CD.root'  , isMC = True, nEvts =  -1 ),
    'DY_pow_preEE'  : tnpSample('DY_pow_preEE'   , dirRun3 + 'Rew_DY_NLO_pow_M-ALL_2022preEE_trig_eff_CD.root', isMC = True, nEvts =  -1 ),
    'data_Run2022CD': tnpSample('data_Run2022CD' , PNFS    + 'EG_Run2022CD.root'  ,lumi=7.9804),
    #'data_Run2022C' : tnpSample('data_Run2022C' , PNFS + 'EG_Run2022C_preEE_all.root'  ,lumi=5.0104),
    #'data_Run2022D' : tnpSample('data_Run2022D' , PNFS + 'EG_Run2022D_preEE_all.root'  ,lumi=2.9700),
}

Run2022_130X_ReReco_postEE = {
    'DY_amc_postEE' : tnpSample('DY_amc_postEE' , mcRun3 + 'Rew_DY_NLO_amc_2022postEE_trig_eff_EFG.root', isMC = True, nEvts =  -1 ),
    'DY_mg_postEE'  : tnpSample('DY_mg_postEE'  , mcRun3 + 'Rew_DY_LO_mg_2022postEE_trig_eff_EFG.root'  , isMC = True, nEvts =  -1 ),
    'DY_pow_postEE' : tnpSample('DY_pow_postEE' , mcRun3 + 'Rew_DY_NLO_pow_M-ALL_2022postEE_trig_eff_EFG.root', isMC = True, nEvts =  -1 ),
    'data_Run2022E' : tnpSample('data_Run2022E' , PNFS   + 'EG_Run2022E_postEE_all.root' ,lumi=5.8070),
    'data_Run2022F' : tnpSample('data_Run2022F' , PNFS   + 'EG_Run2022F_postEE_all.root' ,lumi=17.7819),
    'data_Run2022G' : tnpSample('data_Run2022G' , PNFS   + 'EG_Run2022G_postEE_all.root' ,lumi=3.0828),
    'data_Run2022G_Filtered' : tnpSample('data_Run2022G_Filtered' , Datadir + 'Filtered_G_all.root',lumi=3.0828),
#    'data_Run2022G_Filtered' : tnpSample('data_Run2022G_Filtered' , PNFS + 'EG_Run2022G_postEE_Filtered.root' ,lumi=3.0828),
}

Run2023_130X_ReReco_preBPIX = {
    'DY_amc_preBPIX' : tnpSample('DY_amc_preBPIX' , mcRun3 + 'Rew_DY_NLO_amc_012j_2023preBPIX_trig_eff_C.root', isMC = True, nEvts =  -1 ),
    'DY_pow_preBPIX' : tnpSample('DY_pow_preBPIX' , mcRun3 + 'Rew_DY_NLO_pow_M-ALL_2023preBPIX_trig_eff_C.root', isMC = True, nEvts =  -1 ),
    'DY_mg_preBPIX'  : tnpSample('DY_mg_preBPIX'  , mcRun3 + 'Rew_DY_LO_mg_2023preBPIX_trig_eff_C.root', isMC = True, nEvts =  -1 ),
    'data_Run2023C1_Filtered' : tnpSample('data_Run2023C1_Filtered' , Datadir + '2023/C1_2023_Filtered.root',lumi=4.304),
    'data_Run2023C2' : tnpSample('data_Run2023C2' , Datadir + '2023/C2_2023.root',lumi=1.254),
    'data_Run2023C3' : tnpSample('data_Run2023C3' , Datadir + '2023/C3_2023.root',lumi=1.585),
    'data_Run2023C4' : tnpSample('data_Run2023C4' , Datadir + '2023/C4_2023.root',lumi=10.647),
  # 'data_Run2023C' : tnpSample('data_Run2023C' , dirRun3 + 'data/2023/C_2023.root',lumi=17.650),
}

Run2023_130X_ReReco_postBPIX = {
    'DY_amc_postBPIX'  : tnpSample('DY_amc_postBPIX' , mcRun3 + 'Rew_DY_NLO_amc_012j_2023postBPIX_trig_eff_D.root', isMC = True, nEvts =  -1 ),
    'DY_pow_postBPIX'  : tnpSample('DY_pow_postBPIX' , mcRun3_new + 'Rew_DY_NLO_pow_M-ALL_2023postBPIX_trig_eff_D.root', isMC = True, nEvts =  -1 ),
    'DY_mg_postBPIX'   : tnpSample('DY_mg_postBPIX'  , mcRun3 + 'Rew_DY_LO_mg_2023postBPIX_trig_eff_D.root', isMC = True, nEvts =  -1 ),
    'data_Run2023D'    : tnpSample('data_Run2023D'   , Datadir + '2023/D_2023.root',lumi=9.451),
}
#Run3 = {
#    'DY_preEE'   : tnpSample('DY_preEE'   , dirRun3 + 'mc/DYJet_trig_eff_preEE_CD.root'  , isMC = True, nEvts =  -1 ),
#    'DY_postEE'  : tnpSample('DY_postEE'  , dirRun3 + 'mc/DYJet_trig_eff_postEE_EFG.root', isMC = True, nEvts =  -1 ),
#    # 'data_Run3B' : tnpSample('data_Run3B' , dirRun3 + 'Data/B/B.root',lumi=0.096862847),
#    'data_Run3C' : tnpSample('data_Run3C' , PNFS + 'EG_Run2022C_preEE_all.root'  ,lumi=5.0104),
#    'data_Run3D' : tnpSample('data_Run3D' , PNFS + 'EG_Run2022D_preEE_all.root'  ,lumi=2.9700),
#    'data_Run3E' : tnpSample('data_Run3E' , PNFS + 'EG_Run2022E_postEE_all.root' ,lumi=5.8070),
#    'data_Run3F' : tnpSample('data_Run3F' , PNFS + 'EG_Run2022F_postEE_all.root' ,lumi=17.7819),
#    'data_Run3G' : tnpSample('data_Run3G' , PNFS + 'EG_Run2022G_postEE_all.root' ,lumi=3.0828),
#    #'data_Run3'         : tnpSample('data_Run3'  , dirRun3 + 'data/Run3.root',lumi=20.665),
#}
#Run3_130X_ReReco_postEE = {
##    'DY_postEE'  : tnpSample('DY_postEE'  , dirRun3 + 'mc/DYJet_trig_eff_postEE_EFG.root', isMC = True, nEvts =  -1 ),
#    'DY_postEE'  : tnpSample('DY_postEE'  , dirRun3 + 'mc/DYto2E_50toinf_trig_eff_postEE_EFG.root', isMC = True, nEvts =  -1 ),
#    'DY_mg_postEE'  : tnpSample('DY_mg_postEE'  , dirRun3 + 'mc/DYJet_trig_eff_postEE_EFG.root', isMC = True, nEvts =  -1 ),
#    'data_Run2022E' : tnpSample('data_Run2022E' , dirRun3 + 'data/E.root',lumi=5.8070),
#    'data_Run2022F' : tnpSample('data_Run2022F' , dirRun3 + 'data/F.root',lumi=17.7819),
#    'data_Run2022G' : tnpSample('data_Run2022G' , dirRun3 + 'data/G.root',lumi=3.0828),
#    'data_Run2022G_Filtered' : tnpSample('data_Run2022G_Filtered' , dirRun3 + 'data/Filtered_G_all.root',lumi=3.0828),
#}
#Run3_130X_ReReco_preBPIX = {
#    'DY_amc_preBPIX'        : tnpSample('DY_preBPIX'   , dirRun3 + 'c/2023/DYto2L_LO_preBPIX_all_trig_eff_C_all.root', isMC = True, nEvts =  -1 ),
#    'DY_preBPIX_powheg' : tnpSample('DY_preBPIX_powheg'   , dirRun3 + 'mc/2023/DYto2E_50to4000_preBPIX_all_trig_eff_C_all.root', isMC = True, nEvts =  -1 ),
#    'DY_nlo_preBPIX'    : tnpSample('DY_nlo_preBPIX'   , dirRun3 + 'mc/2023/DYto2L_NLO_preBPIX_all_trig_eff_C_all.root', isMC = True, nEvts =  -1 ),
#
##    'DY_mg_preBPIX' : tnpSample('DY_mg_preBPIX', dirRun3 + 'mc/DYJet_trig_eff_preBPIX_CD.root', isMC = True, nEvts =  -1 ),
##    'DY_powheg_preBPIX' : tnpSample('DY_powheg_preBPIX', dirRun3 + 'mc/DYto2E_POWHEG_trig_eff_preBPIX_CD.root', isMC = True, nEvts =  -1 ),
#    'data_Run2023C1_Filtered' : tnpSample('data_Run2023C1_Filtered' , dirRun3 + 'data/2023/C1_2023_Filtered.root',lumi=4.304),
#    'data_Run2023C2' : tnpSample('data_Run2023C2' , dirRun3 + 'data/2023/C2_2023.root',lumi=1.254),
#    'data_Run2023C3' : tnpSample('data_Run2023C3' , dirRun3 + 'data/2023/C3_2023.root',lumi=1.585),
#    'data_Run2023C4' : tnpSample('data_Run2023C4' , dirRun3 + 'data/2023/C4_2023.root',lumi=10.647),
#  # 'data_Run2023C' : tnpSample('data_Run2023C' , dirRun3 + 'data/2023/C_2023.root',lumi=17.650),
#}


