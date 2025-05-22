from array import array

dataEff_eb=array('d',[
0.915, 
0.935, 
0.888, 
0.911, 
0.901, 
0.859, 
0.916, 
0.92,  
0.898, 
0.898, 
0.93,  
0.913, 
0.906, 
0.92,  
 ])
dataErr_eb=array('d',[
0.010700471952208471, 
0.024372117265432664, 
0.005049762370646766, 
0.008774970085419102, 
0.035517602678108814, 
0.00353554804804008,  
0.023979159701707668, 
0.014882879425702553, 
0.0038078996835526047,
0.009460449249375008, 
0.0302902641124174,   
0.013928391866974461, 
0.008426155707082567, 
0.00561249498886191,  
 ])
mc22Eff_eb=array('d',[
0.914, 
0.906, 
0.881, 
0.917, 
0.906, 
0.849, 
0.913, 
0.918, 
0.895, 
0.9,   
0.914, 
0.913, 
0.911, 
0.913, 
 ])
sf_eb=array('d',[
1.00109409190372,   
1.032008830022075,  
1.0079455164585698, 
0.9934569247546347, 
0.9944812362030905, 
1.0117785630153122, 
1.0032858707557504, 
1.0021786492374727, 
1.0033519553072625, 
0.9977777777777778, 
1.0175054704595186, 
1.0,                
0.9945115257958288, 
1.0076670317634173, 
 ])
sfErr_eb=array('d',[
0.011707299728893294,
0.026900791683700513,
0.005731852861120052,
0.009569214924121158,
0.03920265196259251,
0.004164367547750389,
0.02626413987043556,
0.016212286956102998,
0.004254636517935871,
0.010511610277083342,
0.033140332726933695,
0.01525563183677378,
0.00924934764773059,
0.006147311050232102,
 ])

dataEff_ee=array('d',[
0.913, 
0.938, 
0.879, 
0.918, 
0.898, 
0.854, 
0.913, 
0.887, 
0.888, 
0.888, 
0.922, 
0.907, 
0.911, 
0.912, 
 ])
dataErr_ee=array('d',[
0.028372523680490622, 
0.0347922419513316,   
0.004743427031166395, 
0.017378150074159233, 
0.014212673921539196, 
0.004527703612207852, 
0.026589473481060152, 
0.016926313833791465, 
0.0068920316308038,   
0.004690426419847137, 
0.1356281685344163,   
0.027658635179632338, 
0.015524177917042834, 
0.022693613639083593, 
 ])
mc22Eff_ee=array('d',[
0.929, 
0.905, 
0.889, 
0.913, 
0.907, 
0.866, 
0.915, 
0.897, 
0.899, 
0.902, 
0.919, 
0.916, 
0.913, 
0.915, 
 ])
sf_ee=array('d',[
0.9827771797631862, 
1.03646408839779,   
0.9887514060742407, 
1.0054764512595837, 
0.990077177508269,  
0.9861431870669746, 
0.9978142076502732, 
0.9888517279821628, 
0.9877641824249166, 
0.9844789356984479, 
1.0032644178454841, 
0.990174672489083,  
0.9978094194961665, 
0.9967213114754099, 
 ])
sfErr_ee=array('d',[
0.0305409296883645,
0.0384444662445653,
0.005335688449006068,
0.01903411837257309,
0.015669982272920834,
0.005228295164212301,
0.029059533859082134,
0.01886991508783887,
0.0076663310687472746,
0.0052000292902961605,
0.14758233790469674,
0.030195016571651023,
0.017003480741558417,
0.024801763539982067,
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
print("   TLatex *   tex = new TLatex(0.95,0.92,\"17.8 fb^{-1} (13.6 TeV) 2023\"); ")
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
print("   totopT->SaveAs(\"EleID_SFvspT_passingHEEPV71_2023preBPIX_rebin.pdf\"); ")
print(" ")
print("    using namespace std; ")
