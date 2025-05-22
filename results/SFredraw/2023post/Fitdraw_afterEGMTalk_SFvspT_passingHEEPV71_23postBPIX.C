void Fitdraw_afterEGMTalk_SFvspT_passingHEEPV71_23postBPIX()
{
//=========Macro generated from canvas: totopT/totopT
//=========  (Wed Oct 16 16:26:05 2024) by ROOT version 6.22/06
   TCanvas *totopT = new TCanvas("totopT", "totopT",0,0,800,800);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   totopT->SetHighLightColor(2);
   totopT->Range(0,0,1,1);
   totopT->SetFillColor(0);
   totopT->SetBorderMode(0);
   totopT->SetBorderSize(2);
   totopT->SetLeftMargin(0.12);
   totopT->SetRightMargin(0.05);
   totopT->SetTopMargin(0.055);
   totopT->SetFrameLineWidth(2);
   totopT->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: totopT_do
   TPad *totopT_do = new TPad("totopT_do", "totopT_do",0,0,1,0.45);
   totopT_do->Draw();
   totopT_do->cd();
   totopT_do->Range(0.7108434,0.2115038,3.120482,1.509737);
   totopT_do->SetFillColor(0);
   totopT_do->SetBorderMode(0);
   totopT_do->SetBorderSize(0);
   totopT_do->SetLogx();
   totopT_do->SetLeftMargin(0.12);
   totopT_do->SetRightMargin(0.05);
   totopT_do->SetTopMargin(0.0075);
   totopT_do->SetBottomMargin(0.2222222);
   totopT_do->SetFrameLineWidth(2);
   totopT_do->SetFrameBorderMode(0);
   totopT_do->SetFrameLineWidth(2);
   totopT_do->SetFrameBorderMode(0);
  
   //EE SF 
   Double_t Graph0_fx1001[13] = {
   175,
   225,
   42.5,
   105,
   65,
   37.5,
   95,
   140,
   47.5,
   55,
 //  350,
   120,
   75,
   85};
   Double_t Graph0_fy1001[13] = {
   1.010893,
   1.006529,
   0.9876126,
   0.96875,
   1.002215,
   0.9884259,
   0.9762162,
   0.9662309,
   0.9899554,
   0.9878184,
//   1.072626,
   1,
   0.9944934,
   0.9934354};
   Double_t Graph0_fex1001[13] = {
   25,
   25,
   2.5,
   5,
   5,
   2.5,
   5,
   10,
   2.5,
   5,
//   100,
   10,
   5,
   5};
   Double_t Graph0_fey1001[13] = {
   0.03171226,
   0.1184748,
   0.005221644,
   0.07932528,
   0.01566128,
   0.007274202,
   0.03282644,
   0.03888904,
   0.008389124,
   0.01298565,
//   0.06244001,
   0.02490789,
   0.00975774,
   0.02525908};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Graph",100,10,450);
   Graph_Graph01001->SetMinimum(0.5);
   Graph_Graph01001->SetMaximum(1.5);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);
   Graph_Graph01001->SetLineWidth(2);
   Graph_Graph01001->SetMarkerStyle(20);
   Graph_Graph01001->SetMarkerSize(0.9);
   Graph_Graph01001->GetXaxis()->SetTitle("Offline electron #it{p}_{T} (GeV)");
   Graph_Graph01001->GetXaxis()->SetMoreLogLabels();
   Graph_Graph01001->GetXaxis()->SetNoExponent();
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("Data / MC ");
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph01001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph01001->GetYaxis()->SetTickLength(0.02);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph01001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("ap");
   // Fitting SF EE

   TF1 *fitFuncConst = new TF1("fitFuncConst", "[0]", 35, 450);
   gre->Fit(fitFuncConst, "RN");
   fitFuncConst->SetLineColor(kBlue-9);
   fitFuncConst->SetLineStyle(2);
   fitFuncConst->Draw("same");
   Double_t parConst = fitFuncConst->GetParameter(0);
   Double_t errConst = fitFuncConst->GetParError(0);
   Double_t ci95 = 1.96 * errConst;
   TLatex *latex = new TLatex();
   latex->SetNDC();
   latex->SetTextSize(0.06);
   latex->SetTextAlign(13);
   TString textConst  = Form("EE Const Fit: SF = %.3f #pm %.3f (95%% CI)", parConst,  ci95);
   latex->SetTextColor(kBlue-9);
   latex->DrawLatex(0.15, 0.80, textConst);



   //EB SF 
   Double_t Graph1_fx1002[14] = {
   175,
   225,
   42.5,
   105,
   65,
   37.5,
   95,
   140,
   47.5,
   55,
   350,
   120,
   75,
   85};
   Double_t Graph1_fy1002[14] = {
   0.9857456,
   0.9760609,
   1.014823,
   1.005476,
   0.9933775,
   1.020142,
   1.005488,
   0.9956332,
   1.008979,
   1.003341,
   1.022222,
   1.001095,
   1.003308,
   1.001093};
   Double_t Graph1_fex1002[14] = {
   25,
   25,
   2.5,
   5,
   5,
   2.5,
   5,
   10,
   2.5,
   5,
   100,
   10,
   5,
   5};
   Double_t Graph1_fey1002[14] = {
   0.04171713,
   0.1328867,
   0.004341961,
   0.01345916,
   0.01759093,
   0.01181869,
   0.01540689,
   0.01987679,
   0.003636797,
   0.01257416,
   0.03252729,
   0.01006834,
   0.01345817,
   0.0101056};
   gre = new TGraphErrors(14,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11002 = new TH1F("Graph_Graph11002","Graph",100,10,450);
   Graph_Graph11002->SetMinimum(0.5);
   Graph_Graph11002->SetMaximum(1.5);
   Graph_Graph11002->SetDirectory(0);
   Graph_Graph11002->SetStats(0);
   Graph_Graph11002->SetLineWidth(2);
   Graph_Graph11002->SetMarkerStyle(20);
   Graph_Graph11002->SetMarkerSize(0.9);
   Graph_Graph11002->GetXaxis()->SetTitle("Offline electron #it{p}_{T} (GeV)");
   Graph_Graph11002->GetXaxis()->SetMoreLogLabels();
   Graph_Graph11002->GetXaxis()->SetNoExponent();
   Graph_Graph11002->GetXaxis()->SetLabelFont(42);
   Graph_Graph11002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph11002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph11002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11002->GetXaxis()->SetTitleFont(42);
   Graph_Graph11002->GetYaxis()->SetTitle("Data / MC ");
   Graph_Graph11002->GetYaxis()->SetLabelFont(42);
   Graph_Graph11002->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph11002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph11002->GetYaxis()->SetTickLength(0.02);
   Graph_Graph11002->GetYaxis()->SetTitleOffset(1);
   Graph_Graph11002->GetYaxis()->SetTitleFont(42);
   Graph_Graph11002->GetZaxis()->SetLabelFont(42);
   Graph_Graph11002->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph11002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph11002->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph11002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11002);
   
   gre->Draw("p");

   // Fitting EB SF

   TF1 *fitFuncConst_EB = new TF1("fitFuncConst_EB", "[0]", 35, 450);
   gre->Fit(fitFuncConst_EB, "RN");
   fitFuncConst_EB->SetLineColor(kRed-9);
   fitFuncConst_EB->SetLineStyle(2);
   fitFuncConst_EB->Draw("same");
   Double_t parConst_EB = fitFuncConst_EB->GetParameter(0);
   Double_t errConst_EB = fitFuncConst_EB->GetParError(0);
   Double_t ci95_EB = 1.96 * errConst_EB;
   latex->SetNDC();
   latex->SetTextSize(0.06);
   latex->SetTextAlign(13);
   TString textConst_EB  = Form("EB Const Fit: SF = %.3f #pm %.3f (95%% CI)", parConst_EB,  ci95_EB);
   latex->SetTextColor(kRed-9);
   latex->DrawLatex(0.15, 0.90, textConst_EB);



   TLine *line = new TLine(10,1,450,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   totopT_do->Modified();
   totopT->cd();
  
// ------------>Primitives in pad: totopT_up
   TPad *totopT_up = new TPad("totopT_up", "totopT_up",0,0.45,1,1);
   totopT_up->Draw();
   totopT_up->cd();
   totopT_up->Range(0.7108434,-0.01008403,3.120482,1.334454);
   totopT_up->SetFillColor(0);
   totopT_up->SetBorderMode(0);
   totopT_up->SetBorderSize(0);
   totopT_up->SetLogx();
   totopT_up->SetLeftMargin(0.12);
   totopT_up->SetRightMargin(0.05);
   totopT_up->SetBottomMargin(0.0075);
   totopT_up->SetFrameLineWidth(2);
   totopT_up->SetFrameBorderMode(0);
   totopT_up->SetFrameLineWidth(2);
   totopT_up->SetFrameBorderMode(0);

//EE SF 
 
   Double_t Graph0_fx1003[13] = {
   175,
   225,
   42.5,
   105,
   65,
   37.5,
   95,
   140,
   47.5,
   55,
//   350,
   120,
   75,
   85};
   Double_t Graph0_fy1003[13] = {
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
//   0.96,
   0.908,
   0.903,
   0.908};
   Double_t Graph0_fex1003[13] = {
   25,
   25,
   2.5,
   5,
   5,
   2.5,
   5,
   10,
   2.5,
   5,
//   100,
   10,
   5,
   5};
   Double_t Graph0_fey1003[13] = {
   0.02911185,
   0.1088784,
   0.00463682,
   0.07361386,
   0.01414214,
   0.006284911,
   0.03036445,
   0.03570014,
   0.007516655,
   0.01172604,
//   0.05588381,
   0.02261637,
   0.008860028,
   0.02308679};
   gre = new TGraphErrors(13,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#999999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01003 = new TH1F("Graph_Graph01003","Graph",100,10,450);
   Graph_Graph01003->SetMinimum(0);
   Graph_Graph01003->SetMaximum(1.2);
   Graph_Graph01003->SetDirectory(0);
   Graph_Graph01003->SetStats(0);
   Graph_Graph01003->SetLineWidth(2);
   Graph_Graph01003->SetMarkerStyle(20);
   Graph_Graph01003->SetMarkerSize(0.9);
   Graph_Graph01003->GetXaxis()->SetTitle("Offline electron #it{p}_{T} (GeV)");
   Graph_Graph01003->GetXaxis()->SetMoreLogLabels();
   Graph_Graph01003->GetXaxis()->SetNoExponent();
   Graph_Graph01003->GetXaxis()->SetLabelFont(42);
   Graph_Graph01003->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph01003->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph01003->GetXaxis()->SetTitleSize(0.045);
   Graph_Graph01003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01003->GetXaxis()->SetTitleFont(42);
   Graph_Graph01003->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph01003->GetYaxis()->SetLabelFont(42);
   Graph_Graph01003->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph01003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01003->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph01003->GetYaxis()->SetTickLength(0.02);
   Graph_Graph01003->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01003->GetYaxis()->SetTitleFont(42);
   Graph_Graph01003->GetZaxis()->SetLabelFont(42);
   Graph_Graph01003->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph01003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph01003->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph01003->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph01003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01003);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1004[14] = {
   175,
   225,
   42.5,
   105,
   65,
   37.5,
   95,
   140,
   47.5,
   55,
   350,
   120,
   75,
   85};
   Double_t Graph1_fy1004[14] = {
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
   0.916};
   Double_t Graph1_fex1004[14] = {
   25,
   25,
   2.5,
   5,
   5,
   2.5,
   5,
   10,
   2.5,
   5,
   100,
   10,
   5,
   5};
   Double_t Graph1_fey1004[14] = {
   0.03804603,
   0.1221229,
   0.0038079,
   0.01228821,
   0.01593738,
   0.009974974,
   0.01403567,
   0.01820714,
   0.003240386,
   0.01129159,
   0.02927456,
   0.009192394,
   0.01220656,
   0.009246626};

   gre = new TGraphErrors(14,Graph1_fx1004,Graph1_fy1004,Graph1_fex1004,Graph1_fey1004);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11004 = new TH1F("Graph_Graph11004","Graph",100,10,450);
   Graph_Graph11004->SetMinimum(0);
   Graph_Graph11004->SetMaximum(1.2);
   Graph_Graph11004->SetDirectory(0);
   Graph_Graph11004->SetStats(0);
   Graph_Graph11004->SetLineWidth(2);
   Graph_Graph11004->SetMarkerStyle(20);
   Graph_Graph11004->SetMarkerSize(0.9);
   Graph_Graph11004->GetXaxis()->SetTitle("Offline electron #it{p}_{T} (GeV)");
   Graph_Graph11004->GetXaxis()->SetMoreLogLabels();
   Graph_Graph11004->GetXaxis()->SetNoExponent();
   Graph_Graph11004->GetXaxis()->SetLabelFont(42);
   Graph_Graph11004->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph11004->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph11004->GetXaxis()->SetTitleSize(0.045);
   Graph_Graph11004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph11004->GetXaxis()->SetTitleFont(42);
   Graph_Graph11004->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph11004->GetYaxis()->SetLabelFont(42);
   Graph_Graph11004->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph11004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11004->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph11004->GetYaxis()->SetTickLength(0.02);
   Graph_Graph11004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph11004->GetYaxis()->SetTitleFont(42);
   Graph_Graph11004->GetZaxis()->SetLabelFont(42);
   Graph_Graph11004->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph11004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11004->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph11004->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph11004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11004);
   
   gre->Draw("p");
 
   //MC efficiency EE 
   Double_t Graph2_fx1005[13] = { 175, 225, 42.5, 105, 65, 37.5, 95, 140, 47.5, 55, //350, 
120,  75, 85};
   Double_t Graph2_fex1005[13] = { 25, 25, 2.5, 5, 5, 2.5, 5, 10, 2.5, 5, //100, 
10, 5, 5};
   Double_t Graph2_fy1005[13] = {
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
//     0.895,
     0.908,
     0.908,
     0.914,
}; 
   Double_t Graph2_fey1005[13] = {
     0.028798149639766197,
     0.10817213487234748,
     0.004694978549075511,
     0.07598849865325302,
     0.014110885813056105,
     0.0063585043003283985,
     0.03110423084932139,
     0.03694783523887883,
     0.007592923041275958,
     0.01187064734103771,
  //   0.05210000936265409,
     0.022616367966585633,
     0.008909087066142527,
     0.023239350840585066,
}; 
   gre = new TGraphErrors(13,Graph2_fx1005,Graph2_fy1005,Graph2_fex1005,Graph2_fey1005); //EE
   gre->SetName("Graph2");     
   gre->SetTitle("Graph");     
   gre->SetFillStyle(3004);    
   gre->SetLineColor(kCyan);   
   gre->SetLineStyle(2);       
   gre->SetLineWidth(2);       
   gre->SetFillColor(kCyan);   
   gre->SetMarkerColor(kCyan); 
   gre->SetMarkerStyle(6);     
   gre->SetMarkerSize(2);      
   gre->Draw("e2p same");    
 
 
   //MC efficiency EB 
   Double_t Graph3_fx1006[14] = { 175, 225, 42.5, 105, 65, 37.5, 95, 140, 47.5, 55, 350, 120,  75, 85};
   Double_t Graph3_fex1006[14] ={ 25, 25, 2.5, 5, 5, 2.5, 5, 10, 2.5, 5, 100, 10, 5, 5};
   Double_t Graph3_fy1006[14] = {
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
}; 
   Double_t Graph3_fey1006[14] = {
     0.03859619107809401,
     0.1251180995547809,
     0.0037522786769389146,
     0.012221280549129132,
     0.016043629791706544,
     0.009778022984255974,
     0.013959058477601427,
     0.018287000097831834,
     0.003211550310941548,
     0.01125399734561752,
     0.02863816047838989,
     0.009182336271298674,
     0.012166318306249027,
     0.009236531841514004,
}; 
   gre = new TGraphErrors(14,Graph3_fx1006,Graph3_fy1006,Graph3_fex1006,Graph3_fey1006); //EB 
   gre->SetName("Graph3"); 
   gre->SetTitle("Graph"); 
   gre->SetFillStyle(3005); 
   gre->SetLineColor(kSpring); 
   gre->SetLineStyle(2); 
   gre->SetLineWidth(2); 
   gre->SetFillColor(kSpring); 
   gre->SetMarkerColor(kSpring); 
   gre->SetMarkerStyle(6); 
   gre->SetMarkerSize(2); 
   gre->Draw("e2p same"); 
 
   totopT_up->Modified(); 
 
   TLegend *leg = new TLegend(0.2,0.1,0.93,0.25,NULL,"brNDC"); 
   leg->SetBorderSize(0); 
   leg->SetTextFont(62); 
   leg->SetTextSize(0.042); 
   leg->SetLineColor(1); 
   leg->SetLineStyle(1); 
   leg->SetLineWidth(1); 
   leg->SetFillColor(0); 
   leg->SetFillStyle(0); 
   leg->SetNColumns(2); 
   TLegendEntry *entry=leg->AddEntry("Graph1","0.000 #leq |#eta| #leq  1.444 (Data)","PL"); 
   entry=leg->AddEntry("Graph0","1.566 #leq |#eta| #leq  2.500 (Data)","PL"); 
   entry=leg->AddEntry("Graph3","0.000 #leq |#eta| #leq  1.444 (MC)","PF"); 
   entry=leg->AddEntry("Graph2","1.566 #leq |#eta| #leq  2.500 (MC)","PF"); 
   leg->Draw(); 
 
   TLatex *   tex = new TLatex(0.95,0.92,"9.5 fb^{-1} (13.6 TeV) 2023"); 
   tex->SetNDC(); 
   tex->SetTextAlign(31); 
   tex->SetTextFont(42); 
   tex->SetTextSize(0.055); 
   tex->SetLineWidth(2); 
   tex->Draw(); 
   tex = new TLatex(0.15735,0.839425,"CMS"); 
   tex->SetNDC(); 
   tex->SetTextAlign(13); 
   tex->SetTextFont(61); 
   tex->SetTextSize(0.065); 
   tex->SetLineWidth(2); 
   tex->Draw(); 
   tex = new TLatex(0.15735,0.785925,"Preliminary"); 
   tex->SetNDC(); 
   tex->SetTextAlign(13); 
   tex->SetTextFont(52); 
   tex->SetTextSize(0.05); 
   tex->SetLineWidth(2); 
   tex->Draw(); 
 
   totopT->Modified(); 
   totopT->Update(); 
   totopT->SetSelected(totopT); 
   totopT->SaveAs("./png/Fit_EleID_SFvspT_passingHEEPV71_23postBPIX_rebin.pdf"); 
 
    using namespace std; 
}
