from array import array

dataEff_eb=array('d',[
0.92, 
0.925,
0.897,
0.924,
0.876,
0.873,
0.921,
0.923,
0.909,
0.905,
0.908,
0.918,
0.879,
0.927,
 ])

dataErr_eb=array('d',[
0.01852026187719819,  
0.06704476191321741,  
0.005522689562160819, 
0.0068190981808447385,
0.01787456572899047,  
0.005522689562160819, 
0.014053472880395091, 
0.009539397255592207, 
0.006204844881219841, 
0.01111305988465824,  
0.047534199267474736, 
0.01290349177548466,  
0.0485643912759133,   
0.020112187847173682, 
 ])

mc22Eff_eb=array('d',[
0.923, 
0.91,  
0.918, 
0.916, 
0.909, 
0.892, 
0.914, 
0.918, 
0.929, 
0.928, 
0.91,  
0.916, 
0.902, 
0.914, 
 ])

sf_eb=array('d',[
0.9967497291440953, 
1.0164835164835164, 
0.9771241830065359, 
1.0087336244541485, 
0.9636963696369637, 
0.9786995515695067, 
1.0076586433260395, 
1.0054466230936818, 
0.9784714747039828, 
0.9752155172413793, 
0.9978021978021978, 
1.002183406113537,  
0.9745011086474501, 
1.0142231947483589, 
 ])

sfErr_eb=array('d',[
0.020065289141059792,
0.07367556254199716,
0.006016001701700238,
0.00744443032843312,
0.019663988700759593,
0.0061913560113910525,
0.015375790897587626,
0.010391500278422883,
0.006679057999160216,
0.011975280048123104,
0.052235383810411797,
0.014086781414284563,
0.0538407885542276,
0.02200458188968674,
 ])

dataEff_ee=array('d',[
0.901, 
0.902, 
0.897, 
0.901, 
0.894, 
0.876, 
0.951, 
0.9,   
0.907, 
0.911, 
0.89,  
0.92,  
0.909, 
0.948, 
 ])

dataErr_ee=array('d',[
0.05071489031832755,  
0.035234927273942285, 
0.007905700474973746, 
0.030364454548040237, 
0.012206559711892629, 
0.005522689562160819, 
0.009110439067355649, 
0.05977457737198989,  
0.005244053775467987, 
0.010198043930087778, 
0.06828982427858492,  
0.030692020135533626, 
0.013171943668267044, 
0.01074709728252239,  
 ])

mc22Eff_ee=array('d',[
 0.909, 
 0.943, 
 0.906, 
 0.914, 
 0.909, 
 0.883, 
 0.931, 
 0.912, 
 0.917, 
 0.919, 
 0.945, 
 0.929, 
 0.907, 
 0.912, 
 ])

sf_ee=array('d',[
0.9911991199119912, 
0.9565217391304348, 
0.9900662251655629, 
0.9857768052516411, 
0.9834983498349835, 
0.9920724801812004, 
1.0214822771213747, 
0.9868421052631579, 
0.9890948745910578, 
0.9912948857453754, 
0.9417989417989419, 
0.9903121636167922, 
1.0022050716648292, 
1.0394736842105263, 
 ])

sfErr_ee=array('d',[
0.0557919585460149,
0.037364716091137104,
0.008725938714099057,
0.033221503881882095,
0.013428558538935785,
0.006254461565301041,
0.0097856488371167,
0.06554229974998892,
0.005718706407271523,
0.011096892198136863,
0.07226436431596288,
0.03303769659368528,
0.014522539876810412,
0.01178409789750262,
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
print("   TLatex *   tex = new TLatex(0.95,0.92,\"8.0 fb^{-1} (13.6 TeV) 2022\"); ")
print("   tex->SetNDC(); ")
print("   tex->SetTextAlign(31); ")
print("   tex->SetTextFont(42); ")
print("   tex->SetTextSize(0.053); ")
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
