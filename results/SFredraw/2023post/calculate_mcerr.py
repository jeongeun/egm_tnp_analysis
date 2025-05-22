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
0.12212288933692976,   
0.0038078996835526047, 
0.012288209796386137,  
0.015937380587787958,  
0.009974973684175822,  
0.01403567240997026,   
0.018207144202208113,  
0.0032403857795021904, 
0.011291594218709785,  
0.02927456404457633,   
0.009192393594706447,  
0.012206559711892629,  
0.009246626411832597,  
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
0.1328867130978561,
0.004341960870641511,
0.013459156403489745,
0.01759092780109046,
0.011818689199260452,
0.015406885192063952,
0.019876794980576543,
0.003636796609991235,
0.012574158372728045,
0.03252729338286259,
0.010068339096064017,
0.01345816947286949,
0.010105602635882619,
 ])


#####

dataEff_ee=array('d',[
0.928,  
0.925,  
0.877,  
0.899,  
0.905,  
0.854,  
0.903,  
0.887,  
0.887,  
0.892,  
0.96,   
0.908,  
0.903,  
0.908,  
 ])
dataErr_ee=array('d',[
0.029111854973532712,  
0.10887837296727029,   
0.0046368200310126385, 
0.07361385807033886,   
0.014142139159264426,  
0.0062849105005560795, 
0.030364454548040237,  
0.035700141456302306,  
0.007516654841084569,  
0.011726043663572135,  
0.05588380892530495,   
0.022616367966585633,  
0.008860028216659363,  
0.02308679492697072,   
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
0.966230936819172,  
0.9899553571428571, 
0.9878183831672204, 
1.0726256983240223, 
1.0,                
0.9944933920704846, 
0.9934354485776805, 
 ])
sfErr_ee=array('d',[
0.03171226031975241,
0.11847483456721468,
0.005221644179068286,
0.07932527809303756,
0.015661283675818854,
0.007274201968236203,
0.032826437349232684,
0.03888904298072147,
0.0083891237065676,
0.01298565189764356,
0.06244000997240776,
0.024907894236327787,
0.00975774032671736,
0.025259075412440612,
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
print("   TLatex *   tex = new TLatex(0.95,0.956,\"9.5 fb^{-1} (13.6 TeV) 2023\"); ")
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
print("   totopT->SaveAs(\"EleID_SFvspT_passingHEEPV71_rename_rebin.pdf\"); ")
print(" ")
print("    using namespace std; ")
