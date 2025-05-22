from array import array


dataEff_eb=array('d',[
0.913, 
0.917, 
0.874, 
0.913, 
0.856, 
0.844, 
0.918, 
0.919, 
0.887, 
0.884, 
0.9,   
0.908, 
0.869, 
0.917, 
 ])
dataErr_eb=array('d',[
0.012206559711892629, 
0.017044063482632318, 
0.004301174258269483, 
0.009055390659712044, 
0.018452644796884823, 
0.006041531262850509, 
0.013656503945007314, 
0.01667333499933353,  
0.007176357014530429, 
0.009300542994900896, 
0.02610555687971435,  
0.007382418302968215, 
0.013019220406767845, 
0.01131371291840129,  
 ])
mc22Eff_eb=array('d',[
0.914, 
0.911, 
0.908, 
0.914, 
0.903, 
0.881, 
0.914, 
0.918, 
0.921, 
0.92,  
0.904, 
0.918, 
0.901, 
0.91,  
 ])
sf_eb=array('d',[
0.9989059080962801, 
1.0065861690450055, 
0.9625550660792951, 
0.9989059080962801, 
0.9479512735326688, 
0.9580022701475596, 
1.0043763676148796, 
1.0010893246187365, 
0.9630836047774158, 
0.9608695652173913, 
0.995575221238938,  
0.9891067538126361, 
0.9644839067702552, 
1.0076923076923077, 
 ])
sfErr_eb=array('d',[
0.013355098153055392,
0.0187091805517369,  
0.004736976055362867,
0.009907429605811863,
0.020434822587912318,
0.006857583726277536,
0.014941470399351547,
0.018162674291212995,
0.007791918582552041,
0.010109285864022714,
0.02887782840676366, 
0.008041850003233349,
0.014449745179542558,
0.012432651558682737,
 ])



dataEff_ee=array('d',[
0.93,                
0.9179999999999999,  
0.892,               
0.915,               
0.893,               
0.87,                
0.907,               
0.923,               
0.9,                 
0.902,               
0.904,               
0.927,               
0.9019999999999999,  
0.928,               
])
dataErr_ee=array('d',[
0.02940238255652074,   
0.04077376730202892,   
0.008336671997865823,  
0.0080932132061376,    
0.0063639688874160966, 
0.00644205712486315,   
0.011575841222131554,  
0.11285831870092705,   
0.009300542994900896,  
0.01841195535514902,   
0.02949576410266398,   
0.022293499052414286,  
0.03257299648481852,   
0.006123732521918316,   
])

mc22Eff_ee=array('d',[
0.914,              
0.9329999999999999, 
0.893,              
0.916,              
0.904,              
0.867,              
0.922,              
0.925,              
0.907,              
0.91,               
0.921,              
0.923,              
0.9059999999999999, 
0.907,               
])
sf_ee=array('d',[
1.0175054704595186, 
0.9839228295819935, 
0.9988801791713325, 
0.9989082969432315, 
0.9878318584070797, 
1.0034602076124568, 
0.9837310195227765, 
0.9978378378378379, 
0.9922822491730982, 
0.9912087912087912, 
0.9815418023887079, 
1.0043336944745396, 
0.9955849889624724, 
1.0231532524807057,  
])
sfErr_ee=array('d',[
0.03216890870516492,
0.04370178703325715,
0.009335578944978525,
0.008835385596220087,
0.007039788592274443,
0.007430285034444233,
0.012555142323353096,
0.1220089931901914,
0.010254181912790403,
0.02023291797269123,
0.032025802500178044,
0.024153303415400094,
0.03595253475145532,
0.006751634533537282,
 ])


mc22Err_eb = array('d', [
    ((mc22Eff_eb[i] ** 2) * sfErr_eb[i]) / dataEff_eb[i] for i in range(len(dataEff_eb))
])

mc22Err_ee = array('d', [
    ((mc22Eff_ee[i] ** 2) * sfErr_ee[i]) / dataEff_ee[i] for i in range(len(dataEff_ee))
])



print(" ")
print("   //MC efficiency EE ")
print("   Double_t Graph2_fx1005[14] = { 175, 225, 42.5, 105, 65, 37.5, 95, 140, 47.5, 55, 350, 120,  75, 85};")
print("   Double_t Graph2_fex1005[14] = { 25, 25, 2.5, 5, 5, 2.5, 5, 10, 2.5, 5, 100, 10, 5, 5};")
print("   Double_t Graph2_fy1005[14] = {")

for j in range(len(mc22Err_ee)):
   print(f"     {mc22Eff_ee[j]},")
print("}; ")
print("   Double_t Graph2_fey1005[14] = {")
for l in range(len(mc22Err_ee)):
   print(f"     {mc22Err_ee[l]},")
print("}; ")

print("   gre = new TGraphErrors(14,Graph2_fx1005,Graph2_fy1005,Graph2_fex1005,Graph2_fey1005); //EE") 
print("   gre->SetName(\"Graph2\");     ") 
print("   gre->SetTitle(\"Graph\");     ") 
print("   gre->SetFillStyle(3004);    ") 
print("   gre->SetLineColor(kCyan);   ")
print("   gre->SetLineStyle(2);       ") 
print("   gre->SetLineWidth(2);       ") 
print("   gre->SetFillColor(kCyan);   ") 
print("   gre->SetMarkerColor(kCyan); ") 
print("   gre->SetMarkerStyle(6);     ") 
print("   gre->SetMarkerSize(2);      ") 
print("   gre->Draw(\"e2p same\");    ") 
print(" ")
print(" ")

print("   //MC efficiency EB ")
print("   Double_t Graph3_fx1006[14] = { 175, 225, 42.5, 105, 65, 37.5, 95, 140, 47.5, 55, 350, 120,  75, 85};")
print("   Double_t Graph3_fex1006[14] ={ 25, 25, 2.5, 5, 5, 2.5, 5, 10, 2.5, 5, 100, 10, 5, 5};")
print("   Double_t Graph3_fy1006[14] = {")

for i in range(len(mc22Err_eb)):
   print(f"     {mc22Eff_eb[i]},")
print("}; ")

print("   Double_t Graph3_fey1006[14] = {")
for k in range(len(mc22Err_eb)):
   print(f"     {mc22Err_eb[k]},")
print("}; ")

print("   gre = new TGraphErrors(14,Graph3_fx1006,Graph3_fy1006,Graph3_fex1006,Graph3_fey1006); //EB ")
print("   gre->SetName(\"Graph3\"); ")
print("   gre->SetTitle(\"Graph\"); ")
print("   gre->SetFillStyle(3005); ")
print("   gre->SetLineColor(kSpring); ")
print("   gre->SetLineStyle(2); ")
print("   gre->SetLineWidth(2); ")
print("   gre->SetFillColor(kSpring); ")
print("   gre->SetMarkerColor(kSpring); ")
print("   gre->SetMarkerStyle(6); ")
print("   gre->SetMarkerSize(2); ")
print("   gre->Draw(\"e2p same\"); ")
print(" ")
print("   totopT_up->Modified(); ")
print(" ")
print("   TLegend *leg = new TLegend(0.2,0.1,0.93,0.25,NULL,\"brNDC\"); ")
print("   leg->SetBorderSize(0); ")
print("   leg->SetTextFont(62); ")
print("   leg->SetTextSize(0.042); ")
print("   leg->SetLineColor(1); ")
print("   leg->SetLineStyle(1); ")
print("   leg->SetLineWidth(1); ")
print("   leg->SetFillColor(0); ")
print("   leg->SetFillStyle(0); ")
print("   leg->SetNColumns(2); ")
print("   TLegendEntry *entry=leg->AddEntry(\"Graph1\",\"0.000 #leq |#eta| #leq  1.444 (Data)\",\"PL\"); ")
print("   entry=leg->AddEntry(\"Graph0\",\"1.566 #leq |#eta| #leq  2.500 (Data)\",\"PL\"); ")
print("   entry=leg->AddEntry(\"Graph3\",\"0.000 #leq |#eta| #leq  1.444 (MC)\",\"PF\"); ")
print("   entry=leg->AddEntry(\"Graph2\",\"1.566 #leq |#eta| #leq  2.500 (MC)\",\"PF\"); ")
print("   leg->Draw(); ")
print(" ")
print("   TLatex *   tex = new TLatex(0.95,0.92,\"26.7 fb^{-1} (13.6 TeV) 2022\"); ")
print("   tex->SetNDC(); ")
print("   tex->SetTextAlign(31); ")
print("   tex->SetTextFont(42); ")
print("   tex->SetTextSize(0.055); ")
print("   tex->SetLineWidth(2); ")
print("   tex->Draw(); ")
print("   tex = new TLatex(0.15735,0.839425,\"CMS\"); ")
print("   tex->SetNDC(); ")
print("   tex->SetTextAlign(13); ")
print("   tex->SetTextFont(61); ")
print("   tex->SetTextSize(0.06125); ")
print("   tex->SetLineWidth(2); ")
print("   tex->Draw(); ")
print("   tex = new TLatex(0.15735,0.785925,\"Preliminary\"); ")
print("   tex->SetNDC(); ")
print("   tex->SetTextAlign(13); ")
print("   tex->SetTextFont(52); ")
print("   tex->SetTextSize(0.05135); ")
print("   tex->SetLineWidth(2); ")
print("   tex->Draw(); ")
print(" ")
print("   totopT->Modified(); ")
print("   totopT->Update(); ")
print("   totopT->SetSelected(totopT); ")
print("   totopT->SaveAs(\"EleID_SFvspT_passingHEEPV71_2022postEE_rebin.pdf\"); ")
print(" ")
print("    using namespace std; ")
