void EleID_SFvspT_passingHEEPV71_23preBPIX()
{
//=========Macro generated from canvas: totopT/totopT
//=========  (Tue Nov 12 20:10:15 2024) by ROOT version 6.22/06
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
   
   //Double_t Graph0_fx1001[14] = {
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
//   350,
   120,
   75,
   85};
   Double_t Graph0_fy1001[13] = {
   0.9827772,
   1.036464,
   0.9887514,
   1.005476,
   0.9900772,
   0.9861432,
   0.9978142,
   0.9888517,
   0.9877642,
   0.9844789,
//   1.003264,
   0.9901747,
   0.9978094,
   0.9967213};
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
   0.03076772,
   0.03868982,
   0.003644978,
   0.01900258,
   0.0284638,
   0.004546209,
   0.02856204,
   0.01857116,
   0.007666331,
   0.01466603,
//   0.1157527,
   0.03021475,
   0.0230011,
   0.02554901};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
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

//  // Fitting SF EE
//   TF1 *fitFuncConst = new TF1("fitFuncConst", "[0]", 35, 250);
//   gre->Fit(fitFuncConst, "RN");
//   fitFuncConst->SetLineColor(kBlue-9);
//   fitFuncConst->SetLineStyle(2);
//   fitFuncConst->Draw("same");
//   Double_t parConst = fitFuncConst->GetParameter(0);
//   Double_t errConst = fitFuncConst->GetParError(0);
//   Double_t ci95 = 1.96 * errConst;
//   TLatex *latex = new TLatex();
//   latex->SetNDC();
//   latex->SetTextSize(0.06);
//   latex->SetTextAlign(13);
//   TString textConst  = Form("EE Const Fit: SF = %.3f #pm %.3f (95%% CI)", parConst,  ci95);
//   latex->SetTextColor(kBlue-9);
//   latex->DrawLatex(0.15, 0.80, textConst);
   
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
   1.001094,
   1.030905,
   1.007946,
   0.9934569,
   0.9944812,
   1.011779,
   1.003286,
   1.001089,
   1.003352,
   0.9977778,
   1.017505,
   1.002191,
   0.9945115,
   1.007667};
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
   0.01245056,
   0.02690079,
   0.004170543,
   0.009569215,
   0.01371943,
   0.003994322,
   0.02626414,
   0.01515298,
   0.00575176,
   0.01113886,
   0.03413672,
   0.01602272,
   0.01780162,
   0.006883801};
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

//  // Fitting SF EB
//   TF1 *fitFuncConst_EB = new TF1("fitFuncConst_EB", "[0]", 35, 450);
//   gre->Fit(fitFuncConst_EB, "RN");
//   fitFuncConst_EB->SetLineColor(kRed-9);
//   fitFuncConst_EB->SetLineStyle(2);
//   fitFuncConst_EB->Draw("same");
//   Double_t parConst_EB = fitFuncConst_EB->GetParameter(0);
//   Double_t errConst_EB = fitFuncConst_EB->GetParError(0);
//   Double_t ci95_EB = 1.96 * errConst_EB;
//   latex->SetNDC();
//   latex->SetTextSize(0.06);
//   latex->SetTextAlign(13);
//   TString textConst_EB  = Form("EB Const Fit: SF = %.3f #pm %.3f (95%% CI)", parConst_EB,  ci95_EB);
//   latex->SetTextColor(kRed-9);
//   latex->DrawLatex(0.15, 0.90, textConst_EB);


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
   
   //Double_t Graph0_fx1003[14] = {
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
//   0.922,
   0.907,
   0.911,
   0.912};
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
   0.02858321,
   0.03501428,
   0.003240386,
   0.01734935,
   0.02581666,
   0.003937017,
   0.02613427,
   0.01665833,
   0.006892032,
   0.01322876,
//   0.1063767,
   0.02767671,
   0.021,
   0.02337734};
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
   0.915,
   0.934,
   0.888,
   0.911,
   0.901,
   0.859,
   0.916,
   0.919,
   0.898,
   0.898,
   0.93,
   0.915,
   0.906,
   0.92};
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
   0.01137981,
   0.02437212,
   0.003674248,
   0.00877497,
   0.01242981,
   0.00339118,
   0.02397916,
   0.01391043,
   0.005147825,
   0.01002497,
   0.03120096,
   0.01462874,
   0.01621728,
   0.006284911};
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
   Double_t Graph2_fx1005[13] = { 175, 225, 42.5, 105, 65, 37.5, 95, 140, 47.5, 55, 120,  75, 85};
   Double_t Graph2_fex1005[13] = { 25, 25, 2.5, 5, 5, 2.5, 5, 10, 2.5, 5, 10, 5, 5};
   Double_t Graph2_fy1005[13] = {
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
//     0.919,
     0.916,
     0.913,
     0.915,
}; 
   Double_t Graph2_fey1005[13] = {
     0.029084124248874976,
     0.03378243840762336,
     0.00327725023660688,
     0.01725485906021508,
     0.026075404837184308,
     0.003992337713864609,
     0.026191519827607646,
     0.016846139597137898,
     0.006977405896500695,
     0.0134373218717797,
//     0.10603056158838965,
     0.02795133786162818,
     0.02104610556949442,
     0.023454240743925294,
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
}; 
   Double_t Graph3_fey1006[14] = {
     0.01136737411849835,
     0.023641475634349027,
     0.0036452845540058945,
     0.008832763521766538,
     0.012498784758073566,
     0.0033517015083021464,
     0.023900625335872384,
     0.013895294850903185,
     0.005130627150436474,
     0.01004730115131898,
     0.03066417236269927,
     0.014596766863347193,
     0.01630677714909463,
     0.006237090529356197,
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
 
   TLatex *   tex = new TLatex(0.95,0.92,"17.8 fb^{-1} (13.6 TeV) 2023"); 
   tex->SetNDC(); 
   tex->SetTextAlign(31); 
   tex->SetTextFont(42); 
   tex->SetTextSize(0.053); 
   tex->SetLineWidth(2); 
   tex->Draw(); 
   tex = new TLatex(0.15735,0.839425,"CMS"); 
   tex->SetNDC(); 
   tex->SetTextAlign(13); 
   tex->SetTextFont(61); 
   tex->SetTextSize(0.06125); 
   tex->SetLineWidth(2); 
   tex->Draw(); 
   tex = new TLatex(0.15735,0.785925,"Preliminary"); 
   tex->SetNDC(); 
   tex->SetTextAlign(13); 
   tex->SetTextFont(52); 
   tex->SetTextSize(0.05135); 
   tex->SetLineWidth(2); 
   tex->Draw(); 
 
   totopT->Modified(); 
   totopT->Update(); 
   totopT->SetSelected(totopT); 
   totopT->SaveAs("EleID_SFvspT_passingHEEPV71_2023preBPIX_newfit_v1.pdf"); 
 
    using namespace std; 
//    cout << setw(15) << "pt bin (GeV)" << setw(15) << "eta" << setw(8)<<"dataEff" << setw(8)<< "dataErr" <<setw(8) << "mcEff" << setw(8)<< "mcErr" << setw(8) << "SF" << setw(8) << "SFErr" << endl;
//    cout << std::fixed << std::setprecision(3);
//    cout <<setw(15)<< "35 -- 40"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 5] <<"$\\pm$"<< Graph1_fey1004[ 5]<<" & "<<setw(10)<<Graph3_fy1006[ 5]<<"$\\pm$"<<Graph3_fey1006[ 5]<<" & "<<setw(10)<<Graph1_fy1002[ 5]  <<"$\\pm$"<<Graph1_fey1002[ 5]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "40 -- 45"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 2] <<"$\\pm$"<< Graph1_fey1004[ 2]<<" & "<<setw(10)<<Graph3_fy1006[ 2]<<"$\\pm$"<<Graph3_fey1006[ 2]<<" & "<<setw(10)<<Graph1_fy1002[ 2]  <<"$\\pm$"<<Graph1_fey1002[ 2]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "45 -- 50"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 8] <<"$\\pm$"<< Graph1_fey1004[ 8]<<" & "<<setw(10)<<Graph3_fy1006[ 8]<<"$\\pm$"<<Graph3_fey1006[ 8]<<" & "<<setw(10)<<Graph1_fy1002[ 8]  <<"$\\pm$"<<Graph1_fey1002[ 8]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "50 -- 60"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 9] <<"$\\pm$"<< Graph1_fey1004[ 9]<<" & "<<setw(10)<<Graph3_fy1006[ 9]<<"$\\pm$"<<Graph3_fey1006[ 9]<<" & "<<setw(10)<<Graph1_fy1002[ 9]  <<"$\\pm$"<<Graph1_fey1002[ 9]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "60 -- 70"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 4] <<"$\\pm$"<< Graph1_fey1004[ 4]<<" & "<<setw(10)<<Graph3_fy1006[ 4]<<"$\\pm$"<<Graph3_fey1006[ 4]<<" & "<<setw(10)<<Graph1_fy1002[ 4]  <<"$\\pm$"<<Graph1_fey1002[ 4]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "70 -- 80"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 12] <<"$\\pm$"<< Graph1_fey1004[ 12]<<" & "<<setw(10)<<Graph3_fy1006[ 12]<<"$\\pm$"<<Graph3_fey1006[ 12]<<" & "<<setw(10)<<Graph1_fy1002[ 12]  <<"$\\pm$"<<Graph1_fey1002[ 12]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "80 -- 90"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[13] <<"$\\pm$"<< Graph1_fey1004[13]<<" & "<<setw(10)<<Graph3_fy1006[13]<<"$\\pm$"<<Graph3_fey1006[13]<<" & "<<setw(10)<<Graph1_fy1002[13]  <<"$\\pm$"<<Graph1_fey1002[13]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "90 -- 100" <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 6] <<"$\\pm$"<< Graph1_fey1004[ 6]<<" & "<<setw(10)<<Graph3_fy1006[ 6]<<"$\\pm$"<<Graph3_fey1006[ 6]<<" & "<<setw(10)<<Graph1_fy1002[ 6]  <<"$\\pm$"<<Graph1_fey1002[ 6]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "100 -- 110"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 3] <<"$\\pm$"<< Graph1_fey1004[ 3]<<" & "<<setw(10)<<Graph3_fy1006[ 3]<<"$\\pm$"<<Graph3_fey1006[ 3]<<" & "<<setw(10)<<Graph1_fy1002[ 3]  <<"$\\pm$"<<Graph1_fey1002[ 3]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "110 -- 130"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 11] <<"$\\pm$"<< Graph1_fey1004[ 11]<<" & "<<setw(10)<<Graph3_fy1006[ 11]<<"$\\pm$"<<Graph3_fey1006[ 11]<<" & "<<setw(10)<<Graph1_fy1002[ 11]  <<"$\\pm$"<<Graph1_fey1002[ 11]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "130 -- 150"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 7] <<"$\\pm$"<< Graph1_fey1004[ 7]<<" & "<<setw(10)<<Graph3_fy1006[ 7]<<"$\\pm$"<<Graph3_fey1006[ 7]<<" & "<<setw(10)<<Graph1_fy1002[ 7]  <<"$\\pm$"<<Graph1_fey1002[ 7]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "150 -- 200"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 0] <<"$\\pm$"<< Graph1_fey1004[ 0]<<" & "<<setw(10)<<Graph3_fy1006[ 0]<<"$\\pm$"<<Graph3_fey1006[ 0]<<" & "<<setw(10)<<Graph1_fy1002[ 0]  <<"$\\pm$"<<Graph1_fey1002[ 0]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "200 -- 250"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 1] <<"$\\pm$"<< Graph1_fey1004[ 1]<<" & "<<setw(10)<<Graph3_fy1006[ 1]<<"$\\pm$"<<Graph3_fey1006[ 1]<<" & "<<setw(10)<<Graph1_fy1002[ 1]  <<"$\\pm$"<<Graph1_fey1002[ 1]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "250 -- 450"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 10] <<"$\\pm$"<< Graph1_fey1004[ 10]<<" & "<<setw(10)<<Graph3_fy1006[ 10]<<"$\\pm$"<<Graph3_fey1006[ 10]<<" & "<<setw(10)<<Graph1_fy1002[ 10]  <<"$\\pm$"<<Graph1_fey1002[ 10]<< "  \\\\"<<endl;
//    cout << " \\hline" << endl;
//
//
//    cout << setw(15) << "pt bin (GeV)" << setw(15) << "eta" << setw(8)<<"dataEff" << setw(8)<< "dataErr" <<setw(8) << "mcEff" << setw(8)<< "mcErr" << setw(8) << "SF" << setw(8) << "SFErr" << endl;
//    cout << std::fixed << std::setprecision(3);
//    cout <<setw(15)<< "35 -- 40"  <<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[ 5] <<"$\\pm$"<< Graph0_fey1003[ 5]<<" & "<<setw(10)<<Graph2_fy1005[ 5]<<"$\\pm$"<<Graph2_fey1005[ 5]<<" & "<<setw(10)<<Graph0_fy1001[ 5]  <<"$\\pm$"<<Graph0_fey1001[ 5]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "40 -- 45"  <<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[ 2] <<"$\\pm$"<< Graph0_fey1003[ 2]<<" & "<<setw(10)<<Graph2_fy1005[ 2]<<"$\\pm$"<<Graph2_fey1005[ 2]<<" & "<<setw(10)<<Graph0_fy1001[ 2]  <<"$\\pm$"<<Graph0_fey1001[ 2]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "45 -- 50"  <<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[ 8] <<"$\\pm$"<< Graph0_fey1003[ 8]<<" & "<<setw(10)<<Graph2_fy1005[ 8]<<"$\\pm$"<<Graph2_fey1005[ 8]<<" & "<<setw(10)<<Graph0_fy1001[ 8]  <<"$\\pm$"<<Graph0_fey1001[ 8]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "50 -- 60"  <<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[ 9] <<"$\\pm$"<< Graph0_fey1003[ 9]<<" & "<<setw(10)<<Graph2_fy1005[ 9]<<"$\\pm$"<<Graph2_fey1005[ 9]<<" & "<<setw(10)<<Graph0_fy1001[ 9]  <<"$\\pm$"<<Graph0_fey1001[ 9]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "60 -- 70"  <<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[ 4] <<"$\\pm$"<< Graph0_fey1003[ 4]<<" & "<<setw(10)<<Graph2_fy1005[ 4]<<"$\\pm$"<<Graph2_fey1005[ 4]<<" & "<<setw(10)<<Graph0_fy1001[ 4]  <<"$\\pm$"<<Graph0_fey1001[ 4]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "70 -- 80"  <<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[ 12] <<"$\\pm$"<< Graph0_fey1003[ 12]<<" & "<<setw(10)<<Graph2_fy1005[ 12]<<"$\\pm$"<<Graph2_fey1005[ 12]<<" & "<<setw(10)<<Graph0_fy1001[ 12]  <<"$\\pm$"<<Graph0_fey1001[ 12]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "80 -- 90"  <<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[13] <<"$\\pm$"<< Graph0_fey1003[13]<<" & "<<setw(10)<<Graph2_fy1005[13]<<"$\\pm$"<<Graph2_fey1005[13]<<" & "<<setw(10)<<Graph0_fy1001[13]  <<"$\\pm$"<<Graph0_fey1001[13]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "90 -- 100" <<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[ 6] <<"$\\pm$"<< Graph0_fey1003[ 6]<<" & "<<setw(10)<<Graph2_fy1005[ 6]<<"$\\pm$"<<Graph2_fey1005[ 6]<<" & "<<setw(10)<<Graph0_fy1001[ 6]  <<"$\\pm$"<<Graph0_fey1001[ 6]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "100 -- 110"<<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[ 3] <<"$\\pm$"<< Graph0_fey1003[ 3]<<" & "<<setw(10)<<Graph2_fy1005[ 3]<<"$\\pm$"<<Graph2_fey1005[ 3]<<" & "<<setw(10)<<Graph0_fy1001[ 3]  <<"$\\pm$"<<Graph0_fey1001[ 3]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "110 -- 130"<<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[ 11] <<"$\\pm$"<< Graph0_fey1003[ 11]<<" & "<<setw(10)<<Graph2_fy1005[ 11]<<"$\\pm$"<<Graph2_fey1005[ 11]<<" & "<<setw(10)<<Graph0_fy1001[ 11]  <<"$\\pm$"<<Graph0_fey1001[ 11]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "130 -- 150"<<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[ 7] <<"$\\pm$"<< Graph0_fey1003[ 7]<<" & "<<setw(10)<<Graph2_fy1005[ 7]<<"$\\pm$"<<Graph2_fey1005[ 7]<<" & "<<setw(10)<<Graph0_fy1001[ 7]  <<"$\\pm$"<<Graph0_fey1001[ 7]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "150 -- 200"<<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[ 0] <<"$\\pm$"<< Graph0_fey1003[ 0]<<" & "<<setw(10)<<Graph2_fy1005[ 0]<<"$\\pm$"<<Graph2_fey1005[ 0]<<" & "<<setw(10)<<Graph0_fy1001[ 0]  <<"$\\pm$"<<Graph0_fey1001[ 0]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "200 -- 250"<<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[ 1] <<"$\\pm$"<< Graph0_fey1003[ 1]<<" & "<<setw(10)<<Graph2_fy1005[ 1]<<"$\\pm$"<<Graph2_fey1005[ 1]<<" & "<<setw(10)<<Graph0_fy1001[ 1]  <<"$\\pm$"<<Graph0_fey1001[ 1]<< "  \\\\"<<endl;
//    cout <<setw(15)<< "250 -- 450"<<setw(15)<< " & EE & " <<setw(10)<<Graph0_fy1003[ 10] <<"$\\pm$"<< Graph0_fey1003[ 10]<<" & "<<setw(10)<<Graph2_fy1005[ 10]<<"$\\pm$"<<Graph2_fey1005[ 10]<<" & "<<setw(10)<<Graph0_fy1001[ 10]  <<"$\\pm$"<<Graph0_fey1001[ 10]<< "  \\\\"<<endl;
//    cout << " \\hline" << endl;


}
