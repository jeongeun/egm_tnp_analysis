#############################################################
########## General settings
#############################################################
flags = {
    'passingHEEPV70'           : '(passingHEEPV70 == 1)',
    }

baseOutDir = 'results/tnpEleIDs/Run3F'

#############################################################
########## samples definition  - preparing the samples
#############################################################
### samples are defined in etc/inputs/tnpSampleDef.py
### not: you can setup another sampleDef File in inputs
import etc.inputs.tnpSampleDef as tnpSamples
tnpTreeDir = 'tnpEleIDs'
#Run3
samplesDef = {
    'data'   : tnpSamples.Run3['data_Run3'].clone(),
    'mcNom'  : tnpSamples.Run3['DY_postEE'].clone(),
    # 'mcAlt'  : tnpSamples.Run3['DY_postEE'].clone(),
    'tagSel' : tnpSamples.Run3['DY_postEE'].clone(),
}

## can add data sample easily
# samplesDef['data'].add_sample( tnpSamples.Run3['data_Run3C'] )
# samplesDef['data'].add_sample( tnpSamples.Run3['data_Run3D'] )
# samplesDef['data'].add_sample( tnpSamples.Run3['data_Run3E'] )
# samplesDef['data'].add_sample( tnpSamples.Run3['data_Run3F'] )
# samplesDef['data'].add_sample( tnpSamples.Run3['data_Run3G'] )

samplesDef['data'].set_tnpTree(tnpTreeDir)
if not samplesDef['mcNom' ] is None: samplesDef['mcNom' ].set_tnpTree(tnpTreeDir)
# if not samplesDef['mcAlt' ] is None: samplesDef['mcAlt' ].set_tnpTree(tnpTreeDir)
if not samplesDef['tagSel'] is None: samplesDef['tagSel'].set_tnpTree(tnpTreeDir)

## some sample-based cuts... general cuts defined here after
## require mcTruth on MC DY samples and additional cuts
## all the samples MUST have different names (i.e. sample.name must be different for all)
## if you need to use 2 times the same sample, then rename the second one
#samplesDef['data'  ].set_cut('run >= 273726')
if not samplesDef['mcNom' ] is None: samplesDef['mcNom' ].set_mcTruth()
# if not samplesDef['mcAlt' ] is None: samplesDef['mcAlt' ].set_mcTruth()
if not samplesDef['tagSel'] is None: samplesDef['tagSel'].set_mcTruth()
if not samplesDef['tagSel'] is None:
    samplesDef['tagSel'].rename('mcAltSel_DY_madgraph')
    samplesDef['tagSel'].set_cut('tag_Ele_pt > 32')  #canceled non trig MVA cut

### set MC weight, simple way (use tree weight) 
# weightName = 'totWeight'
# if not samplesDef['mcNom' ] is None: samplesDef['mcNom' ].set_weight(weightName)
# if not samplesDef['mcAlt' ] is None: samplesDef['mcAlt' ].set_weight(weightName)
# if not samplesDef['tagSel'] is None: samplesDef['tagSel'].set_weight(weightName)


### set MC weight, can use several pileup rw for different data taking periods
##weightName = 'weights_data_Run2022_B-G.totWeight'
weightName = 'weights_2022_run3.PUweight'
if not samplesDef['mcNom' ] is None: samplesDef['mcNom' ].set_weight(weightName)
##if not samplesDef['mcAlt' ] is None: samplesDef['mcAlt' ].set_weight(weightName)
if not samplesDef['tagSel'] is None: samplesDef['tagSel'].set_weight(weightName)
if not samplesDef['mcNom' ] is None: samplesDef['mcNom' ].set_puTree('/cms/ldap_home/taebh/CMSSW_11_2_0/src/egm_tnp_analysis/PU_Trees/DY_postEE_ele.pu.puTree.root')
# if not samplesDef['mcAlt' ] is None: samplesDef['mcAlt' ].set_puTree('/eos/cms/store/group/phys_egamma/swmukher/UL2017/PU_miniAOD/DY_amcatnloext_ele.pu.puTree.root')
if not samplesDef['tagSel'] is None: samplesDef['tagSel'].set_puTree('/cms/ldap_home/taebh/CMSSW_11_2_0/src/egm_tnp_analysis/PU_Trees/DY_postEE_ele.pu.puTree.root')
#
#############################################################
########## bining definition  [can be nD bining]
#############################################################
biningDef = [
   { 'var' : 'el_sc_eta' , 'type': 'float', 'bins': [-1.4442, 0.0, 1.4442] },
   { 'var' : 'el_et' , 'type': 'float', 'bins': [35, 40, 45, 50, 60, 70, 80, 90, 100, 200, 500,1000] },
#    { 'var' : 'el_neuIso', 'type': 'float', 'bins': [x*0.1 for x in range(0, 51)]},
#    { 'var' : 'el_hoe_depth1', 'type': 'float', 'bins': [x*0.04 for x in range(0, 51)]},
#   { 'var' : 'probe_sc_eta' , 'type': 'float', 'bins': [-2.5,-1.566,-1.4442, 0.0, 1.4442, 1.566, 2.5] },
#   { 'var' : 'probe_Ele_pt' , 'type': 'float', 'bins': [10,30, 50, 100,500] },
#   { 'var' : 'probe_sc_eta' , 'type': 'float', 'bins': [-2.5,-2.0,-1.566,-1.4442, -0.8, 0.0, 0.8, 1.4442, 1.566, 2.0, 2.5] },
#   { 'var' : 'probe_Ele_pt' , 'type': 'float', 'bins': [10,20.0,30,40,50,200,500] },
]

#############################################################
########## Cuts definition for all samples
#############################################################
### cut
cutBase   = 'tag_Ele_pt > 35 && abs(tag_sc_eta) < 2.17 && el_q*tag_Ele_q < 0'
additionalCuts = None

#############################################################
########## fitting params to tune fit by hand if necessary
#############################################################
tnpParNomFit = [
    "meanP[-0.0,-5.0,5.0]","sigmaP[0.5,0.1,5.0]",
    "meanF[-0.0,-5.0,5.0]","sigmaF[0.5,0.1,5.0]",
    "acmsP[60.,50.,80.]","betaP[0.05,0.01,0.08]","gammaP[0.1, 0, 1]","peakP[90.0]",
    "acmsF[60.,50.,80.]","betaF[0.05,0.01,0.08]","gammaF[0.1, 0, 1]","peakF[90.0]",
    ]

tnpParAltSigFit = [
    "meanP[-0.0,-5.0,5.0]","sigmaP[1,0.7,6.0]","alphaP[2.0,1.2,3.5]" ,'nP[3,-5,5]',"sigmaP_2[1.5,0.5,6.0]","sosP[1,0.5,5.0]",
    "meanF[-0.0,-5.0,5.0]","sigmaF[2,0.7,15.0]","alphaF[2.0,1.2,3.5]",'nF[3,-5,5]',"sigmaF_2[2.0,0.5,6.0]","sosF[1,0.5,5.0]",
    "acmsP[60.,50.,75.]","betaP[0.04,0.01,0.06]","gammaP[0.1, 0.005, 1]","peakP[90.0]",
    "acmsF[60.,50.,75.]","betaF[0.04,0.01,0.06]","gammaF[0.1, 0.005, 1]","peakF[90.0]",
    ]
     
tnpParAltBkgFit = [
    "meanP[-0.0,-5.0,5.0]","sigmaP[0.5,0.1,5.0]",
    "meanF[-0.0,-5.0,5.0]","sigmaF[0.5,0.1,5.0]",
    "alphaP[0.,-5.,5.]",
    "alphaF[0.,-5.,5.]",
    ]
