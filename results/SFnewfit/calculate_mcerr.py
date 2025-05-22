from array import array


dataEff_eb=array('d',[
0.899, 
0.897, 
0.89,  
0.918, 
0.9,   
0.861, 
0.916, 
0.912, 
0.899, 
0.901, 
0.92,  
0.914, 
0.91,  
0.916, 
 ])

dataErr_eb=array('d',[
0.038046026073691355, 
0.036262930107755977, 
0.0030822232235839147,
0.012124359776911942, 
0.012609524178175808, 
0.04063865278278797,  
0.01345362776354394,  
0.018289343892004453, 
0.005147824783342965, 
0.011291594218709785, 
0.028809722317301174, 
0.009027740581119959, 
0.007141435429939844, 
0.007582882037853424, 
 ])

mc22Eff_eb=array('d',[
0.912, 
0.919, 
0.877, 
0.913, 
0.906, 
0.844, 
0.911, 
0.916, 
0.891, 
0.898, 
0.9,   
0.913, 
0.907, 
0.915, 
 ])

sf_eb=array('d',[
0.9857456140350878,
0.9760609357997824,
1.014823261117446, 
1.0054764512595837,
0.9933774834437086,
1.0201421800947867,
1.0054884742041712,
0.9956331877729258,
1.0089786756453423,
1.0033407572383073,
1.0222222222222221,
1.0010952902519168,
1.0033076074972436,
1.0010928961748633,
 ])

sfErr_eb=array('d',[
0.04171713385273175, 
0.03945911872443523, 
0.0035145076665723087, 
0.013279693074383288, 
0.013917797106154314, 
0.04815006253884831, 
0.014767977786546585, 
0.019966532633192632, 
0.0057775811260863804, 
0.012574158372728045, 
0.03201080257477908, 
0.009887996255334017, 
0.00787368845638351, 
0.008287302773610299, 
 ])

dataEff_ee=array('d',[
0.928, 
0.925, 
0.877, 
0.899, 
0.905, 
0.854, 
0.903, 
0.886, 
0.887, 
0.892, 
0.96,  
0.908, 
0.902, 
0.908, 
 ])

dataErr_ee=array('d',[
0.029521180531950297,  
0.10514038282220595,   
0.0025495293683344797, 
0.07355270287351781,   
0.02051828696553396,   
0.003937016636998125,  
0.030569594370877765,  
0.03564407524400086,   
0.00543139945133849,   
0.0077781810212928385, 
0.0935307441433029,    
0.022682594648760993,  
0.016278823667575014,  
0.01917029212088331,   
 ])

mc22Eff_ee=array('d',[
0.918, 
0.919, 
0.888, 
0.928, 
0.903, 
0.864, 
0.925, 
0.918, 
0.896, 
0.903, 
0.895, 
0.908, 
0.908, 
0.914, 
 ])

sf_ee=array('d',[
1.0108932461873639, 
1.0065288356909685, 
0.9876126126126126, 
0.96875,            
1.0022148394241417, 
0.9884259259259259, 
0.9762162162162162, 
0.9651416122004357, 
0.9899553571428571, 
0.9878183831672204, 
1.0726256983240223, 
1.0,                
0.9933920704845814, 
0.9934354485776805, 
 ])

sfErr_ee=array('d',[
0.0321581487276147, 
0.11440738065528394, 
0.002871091631007297, 
0.07925937809646315, 
0.0227223554435592, 
0.00455673221874783, 
0.033048210130678664, 
0.0388279686753822, 
0.006061829744797422, 
0.008613710987035257, 
0.10450362474112056, 
0.024980831110970256, 
0.017928219898210366, 
0.020974061401404058, 
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
print("   TLatex *   tex = new TLatex(0.95,0.92,\"9.5 fb^{-1} (13.6 TeV) 2023\"); ")
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
print("   totopT->SaveAs(\"EleID_SFvspT_passingHEEPV71_2023postBPIX_newfit.pdf\"); ")
print(" ")
print("    using namespace std; ")
