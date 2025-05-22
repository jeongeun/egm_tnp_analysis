void EleID_SFvspT_passingHEEPV71_22postEE_rebin()
{
//=========Macro generated from canvas: totopT/totopT
//=========  (Thu Oct  3 19:57:56 2024) by ROOT version 6.22/06
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
   
   Double_t Graph1_fx1001[14] = {
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
   Double_t Graph1_fy1001[14] = {
   1.017452,
   0.9876597,
   0.9988802,
   0.9993486,
   0.9867257,
   1.004794,
   0.9793697,
   0.9947829,
   0.9928296,
   0.9912088,
   0.9790079,
   1.002711,
   0.9961369,
   1.021499};
   Double_t Graph1_fex1001[14] = {
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
   Double_t Graph1_fey1001[14] = {
   0.03657168,
   0.03392405,
   0.0093691,
   0.0109084,
   0.02582438,
   0.01990192,
   0.01699964,
   0.02643287,
   0.01595751,
   0.01528619,
   0.03858914,
   0.02467909,
   0.03047837,
   0.01091455};
   TGraphErrors *gre = new TGraphErrors(14,Graph1_fx1001,Graph1_fy1001,Graph1_fex1001,Graph1_fey1001);
   gre->SetName("Graph1");
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
   
   //TH1F *Graph_Graph11001 = new TH1F("Graph_Graph11001","Graph",100,10,1000);
   TH1F *Graph_Graph11001 = new TH1F("Graph_Graph11001","Graph",100,10,450);
   Graph_Graph11001->SetMinimum(0.5);
   Graph_Graph11001->SetMaximum(1.5);
   Graph_Graph11001->SetDirectory(0);
   Graph_Graph11001->SetStats(0);
   Graph_Graph11001->SetLineWidth(2);
   Graph_Graph11001->SetMarkerStyle(20);
   Graph_Graph11001->SetMarkerSize(0.9);
   Graph_Graph11001->GetXaxis()->SetTitle("Offline electron #it{p}_{T} (GeV)");
   Graph_Graph11001->GetXaxis()->SetMoreLogLabels();
   Graph_Graph11001->GetXaxis()->SetNoExponent();
   Graph_Graph11001->GetXaxis()->SetLabelFont(42);
   Graph_Graph11001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph11001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11001->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph11001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11001->GetXaxis()->SetTitleFont(42);
   Graph_Graph11001->GetYaxis()->SetTitle("Data / MC ");
   Graph_Graph11001->GetYaxis()->SetLabelFont(42);
   Graph_Graph11001->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph11001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11001->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph11001->GetYaxis()->SetTickLength(0.02);
   Graph_Graph11001->GetYaxis()->SetTitleOffset(1);
   Graph_Graph11001->GetYaxis()->SetTitleFont(42);
   Graph_Graph11001->GetZaxis()->SetLabelFont(42);
   Graph_Graph11001->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph11001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11001->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph11001->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph11001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11001);
   
   gre->Draw("ap");

//   //  Fitting EE SF
//   //fitFuncConst->SetLineColor(kGray+2);
//   TF1 *fitFuncConst = new TF1("fitFuncConst", "[0]", 35, 1000);
//   gre->Fit(fitFuncConst, "R");
//   fitFuncConst->SetLineColor(kBlue-9);
//   fitFuncConst->SetLineStyle(1);
//   fitFuncConst->Draw("same");
//
//   Double_t parConst = fitFuncConst->GetParameter(0);
//   Double_t errConst = fitFuncConst->GetParError(0);
//
//   Double_t ci95 = 1.96 * errConst;
//
//   TLatex *latex = new TLatex();
//   latex->SetNDC();
//   latex->SetTextSize(0.04);
//   latex->SetTextAlign(13);
//
//   TString textConst  = Form("EE Const Fit (pT 35-1000): SF = %.3f #pm (95%% CI: %.3f)", parConst,  ci95);
//   latex->SetTextColor(kBlue-9);
//   latex->DrawLatex(0.15, 0.90, textConst);
//
//   TF1 *fitFuncConst_80 = new TF1("fitFuncConst_80", "[0]", 80, 1000);
//   gre->Fit(fitFuncConst_80, "R");
//   fitFuncConst_80->SetLineColor(kBlue-4);
//   fitFuncConst_80->SetLineStyle(1);
//   fitFuncConst_80->Draw("same");
//
//   Double_t parConst_80 = fitFuncConst_80->GetParameter(0);
//   Double_t errConst_80 = fitFuncConst_80->GetParError(0);
//
//   ci95 = 1.96 * errConst_80;
//
//   TString textConst_80  = Form("EE Const Fit (pT 80-1000): SF = %.3f #pm (95%% CI: %.3f)", parConst_80,  ci95);
//   latex->SetTextColor(kBlue-4);
//   latex->DrawLatex(0.15, 0.80, textConst_80);
   
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
   1.000548,
   0.9997453,
   0.9620253,
   0.9989059,
   0.9380188,
   0.9559775,
   1.004921,
   1.001089,
   0.9624837,
   0.9619358,
   0.9977852,
   0.9891008,
   0.9715492,
   1.007692};
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
   0.01386527,
   0.06537628,
   0.006003704,
   0.009877178,
   0.05616704,
   0.07855391,
   0.01678077,
   0.01909165,
   0.00825577,
   0.01082097,
   0.02776843,
   0.006516772,
   0.06226348,
   0.008512058};
   gre = new TGraphErrors(14,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   //TH1F *Graph_Graph11002 = new TH1F("Graph_Graph11002","Graph",100,10,1000);
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

//   // Fitting EB SF
//   //fitFuncConst_EB->SetLineColor(kBlack);
//   TF1 *fitFuncConst_EB = new TF1("fitFuncConst_EB", "[0]", 35, 1000);
//   gre->Fit(fitFuncConst_EB, "R");
//   fitFuncConst_EB->SetLineColor(kRed-9);
//   fitFuncConst_EB->SetLineStyle(1);
//   fitFuncConst_EB->Draw("same");
//
//   Double_t parConst_EB = fitFuncConst_EB->GetParameter(0);
//   Double_t errConst_EB = fitFuncConst_EB->GetParError(0);
//
//   Double_t ci95_EB = 1.96 * errConst_EB;
//
//   latex->SetNDC();
//   latex->SetTextSize(0.04);
//   latex->SetTextAlign(13);
//
//   TString textConst_EB    = Form("EB Const Fit (pT 35-1000): SF = %.3f #pm (95%% CI: %.3f)", parConst_EB,  ci95_EB);
//
//   latex->SetTextColor(kRed-9);
//   latex->DrawLatex(0.15, 0.50, textConst_EB);
//
//
//   TF1 *fitFuncConst_EB_80 = new TF1("fitFuncConst_EB_80", "[0]", 80, 1000);
//   gre->Fit(fitFuncConst_EB_80, "R");
//   fitFuncConst_EB_80->SetLineColor(kRed-4);
//   fitFuncConst_EB_80->SetLineStyle(1);
//   fitFuncConst_EB_80->Draw("same");
//
//   Double_t parConst_EB_80 = fitFuncConst_EB_80->GetParameter(0);
//   Double_t errConst_EB_80 = fitFuncConst_EB_80->GetParError(0);
//
//   ci95 = 1.96 * errConst_EB_80;
//
//   TString textConst_EB_80  = Form("EB Const Fit (pT 80-1000): SF = %.3f #pm (95%% CI: %.3f)", parConst_EB_80,  ci95);
//   latex->SetTextColor(kRed-4);
//   latex->DrawLatex(0.15, 0.40, textConst_EB_80);

   //TLine *line = new TLine(10,1,1000,1);
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
   
   Double_t Graph1_fx1003[14] = {
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
   Double_t Graph1_fy1003[14] = {
   0.9268069,
   0.914607,
   0.892,
   0.914303,
   0.892,
   0.8721125,
   0.9019759,
   0.9180177,
   0.9,
   0.902,
   0.8927431,
   0.9245,
   0.9025,
   0.9265};
   Double_t Graph1_fex1003[14] = {
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
   Double_t Graph1_fey1003[14] = {
   0.0333135,
   0.03141485,
   0.008366606,
   0.00998008,
   0.02334524,
   0.0172739,
   0.01565626,
   0.0243931,
   0.01446548,
   0.01391043,
   0.03518888,
   0.02275412,
   0.0276134,
   0.0098995};
   gre = new TGraphErrors(14,Graph1_fx1003,Graph1_fy1003,Graph1_fex1003,Graph1_fey1003);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#999999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   //TH1F *Graph_Graph11003 = new TH1F("Graph_Graph11003","Graph",100,10,1000);
   TH1F *Graph_Graph11003 = new TH1F("Graph_Graph11003","Graph",100,10,450);
   Graph_Graph11003->SetMinimum(0);
   Graph_Graph11003->SetMaximum(1.2);
   Graph_Graph11003->SetDirectory(0);
   Graph_Graph11003->SetStats(0);
   Graph_Graph11003->SetLineWidth(2);
   Graph_Graph11003->SetMarkerStyle(20);
   Graph_Graph11003->SetMarkerSize(0.9);
   Graph_Graph11003->GetXaxis()->SetTitle("Offline electron #it{p}_{T} (GeV)");
   Graph_Graph11003->GetXaxis()->SetMoreLogLabels();
   Graph_Graph11003->GetXaxis()->SetNoExponent();
   Graph_Graph11003->GetXaxis()->SetLabelFont(42);
   Graph_Graph11003->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph11003->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph11003->GetXaxis()->SetTitleSize(0.045);
   Graph_Graph11003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph11003->GetXaxis()->SetTitleFont(42);
   Graph_Graph11003->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph11003->GetYaxis()->SetLabelFont(42);
   Graph_Graph11003->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph11003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11003->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph11003->GetYaxis()->SetTickLength(0.02);
   Graph_Graph11003->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph11003->GetYaxis()->SetTitleFont(42);
   Graph_Graph11003->GetZaxis()->SetLabelFont(42);
   Graph_Graph11003->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph11003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph11003->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph11003->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph11003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11003);
   
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
   0.9135,
   0.9102925,
   0.874,
   0.913,
   0.8475,
   0.8433094,
   0.919,
   0.9195,
   0.88664,
   0.8845,
   0.901,
   0.9075,
   0.8729934,
   0.917};
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
   0.01265899,
   0.0595267,
   0.005454365,
   0.009027741,
   0.05074692,
   0.06929583,
   0.01534601,
   0.01753568,
   0.007605215,
   0.009949879,
   0.02507489,
   0.005979139,
   0.05594736,
   0.007745973};
   gre = new TGraphErrors(14,Graph1_fx1004,Graph1_fy1004,Graph1_fex1004,Graph1_fey1004);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   //TH1F *Graph_Graph11004 = new TH1F("Graph_Graph11004","Graph",100,10,1000);
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

   ///// MC efficiency EE
   Double_t Graph2_fx1005[14] = {
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
   Double_t Graph2_fy1005[14] = {
   0.9109097781633413,
   0.9260346036635317,
   0.893,
   0.91489900020404,
   0.904,
   0.8679513788098694,
   0.9209759071117563,
   0.9228322416658521,
   0.9065000000000001,
   0.91,
   0.9118854910211136,
   0.922,
   0.906,
   0.907,
   };

   Double_t Graph2_fex1005[14] = {
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
   5
  };
   Double_t Graph2_fey1005[14] = {
   0.03274208379132818,
   0.031807361154033424,
   0.008375985844891461,
   0.009986585668280895,
   0.023659298688639512,
   0.01719147868376202,
   0.015986056417515698,
   0.0245210323272709,
   0.014569952506202414,
   0.014033805451528512,
   0.03594340697461725,
   0.02269259181450161,
   0.027720492348406348,
   0.00969114569729877,
  };


   gre = new TGraphErrors(14,Graph2_fx1005,Graph2_fy1005,Graph2_fex1005,Graph2_fey1005); //EE
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

   ///// MC efficiency EB
   Double_t Graph3_fx1006[14] = {
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
   Double_t Graph3_fy1006[14] = {
 0.913,
 0.9105243757431631,
 0.9085000000000001,
 0.914,
 0.9035,
 0.882143543678419,
 0.9145000000000001,
 0.9185000000000001,
 0.9212,
 0.9195,
 0.903,
 0.9175,
 0.8985581144942274,
 0.91,
   };

   Double_t Graph3_fex1006[14] = {
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
   5
  };
   Double_t Graph3_fey1006[14] = {
 0.01265206400974572,
 0.05954186284266052,
 0.005669669114727943,
 0.009037628577375268,
 0.05410011102536388,
 0.072486878696624,
 0.015270868815749754,
 0.017516609880892996,
 0.00790165608243976,
 0.010343599892431391,
 0.02513054996307512,
 0.006045024560234434,
 0.057585719101583624,
 0.007686843581373869,
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
   //totopT->cd();

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
   entry=leg->AddEntry("Graph1","1.566 #leq |#eta| #leq  2.500 (Data)","PL");
   entry=leg->AddEntry("Graph3","0.000 #leq |#eta| #leq  1.444 (MC)","PF");
   entry=leg->AddEntry("Graph2","1.566 #leq |#eta| #leq  2.500 (MC)","PF");
   leg->Draw();

   TLatex *   tex = new TLatex(0.95,0.92,"26.7 fb^{-1} (13.6 TeV) 2022");
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
   //totopT->SaveAs("EleID_SFvspT_passingHEEPV71_2022postEE_rebin_fit.pdf");
   totopT->SaveAs("EleID_SFvspT_passingHEEPV71_2022postEE_rebin_nofit.pdf");

using namespace std;

cout << setw(15) << "pt bin (GeV)" << setw(15) << "eta" << setw(8)<<"dataEff" << setw(8)<< "dataErr" <<setw(8) << "mcEff" << setw(8)<< "mcErr" << setw(8) << "SF" << setw(8) << "SFErr" << endl;
cout << std::fixed << std::setprecision(3);
cout <<setw(15)<< "35 -- 40"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 5] <<"$\\pm$"<< Graph1_fey1004[ 5]<<" & "<<setw(10)<<Graph3_fy1006[ 5]<<"$\\pm$"<<Graph3_fey1006[ 5]<<" & "<<setw(10)<<Graph1_fy1002[ 5]  <<"$\\pm$"<<Graph1_fey1002[ 5]<< "  \\\\"<<endl;
cout <<setw(15)<< "40 -- 45"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 2] <<"$\\pm$"<< Graph1_fey1004[ 2]<<" & "<<setw(10)<<Graph3_fy1006[ 2]<<"$\\pm$"<<Graph3_fey1006[ 2]<<" & "<<setw(10)<<Graph1_fy1002[ 2]  <<"$\\pm$"<<Graph1_fey1002[ 2]<< "  \\\\"<<endl;
cout <<setw(15)<< "45 -- 50"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 8] <<"$\\pm$"<< Graph1_fey1004[ 8]<<" & "<<setw(10)<<Graph3_fy1006[ 8]<<"$\\pm$"<<Graph3_fey1006[ 8]<<" & "<<setw(10)<<Graph1_fy1002[ 8]  <<"$\\pm$"<<Graph1_fey1002[ 8]<< "  \\\\"<<endl;
cout <<setw(15)<< "50 -- 60"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 9] <<"$\\pm$"<< Graph1_fey1004[ 9]<<" & "<<setw(10)<<Graph3_fy1006[ 9]<<"$\\pm$"<<Graph3_fey1006[ 9]<<" & "<<setw(10)<<Graph1_fy1002[ 9]  <<"$\\pm$"<<Graph1_fey1002[ 9]<< "  \\\\"<<endl;
cout <<setw(15)<< "60 -- 70"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 4] <<"$\\pm$"<< Graph1_fey1004[ 4]<<" & "<<setw(10)<<Graph3_fy1006[ 4]<<"$\\pm$"<<Graph3_fey1006[ 4]<<" & "<<setw(10)<<Graph1_fy1002[ 4]  <<"$\\pm$"<<Graph1_fey1002[ 4]<< "  \\\\"<<endl;
cout <<setw(15)<< "70 -- 80"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 12] <<"$\\pm$"<< Graph1_fey1004[ 12]<<" & "<<setw(10)<<Graph3_fy1006[ 12]<<"$\\pm$"<<Graph3_fey1006[ 12]<<" & "<<setw(10)<<Graph1_fy1002[ 12]  <<"$\\pm$"<<Graph1_fey1002[ 12]<< "  \\\\"<<endl;
cout <<setw(15)<< "80 -- 90"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[13] <<"$\\pm$"<< Graph1_fey1004[13]<<" & "<<setw(10)<<Graph3_fy1006[13]<<"$\\pm$"<<Graph3_fey1006[13]<<" & "<<setw(10)<<Graph1_fy1002[13]  <<"$\\pm$"<<Graph1_fey1002[13]<< "  \\\\"<<endl;
cout <<setw(15)<< "90 -- 100" <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 6] <<"$\\pm$"<< Graph1_fey1004[ 6]<<" & "<<setw(10)<<Graph3_fy1006[ 6]<<"$\\pm$"<<Graph3_fey1006[ 6]<<" & "<<setw(10)<<Graph1_fy1002[ 6]  <<"$\\pm$"<<Graph1_fey1002[ 6]<< "  \\\\"<<endl;
cout <<setw(15)<< "100 -- 110"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 3] <<"$\\pm$"<< Graph1_fey1004[ 3]<<" & "<<setw(10)<<Graph3_fy1006[ 3]<<"$\\pm$"<<Graph3_fey1006[ 3]<<" & "<<setw(10)<<Graph1_fy1002[ 3]  <<"$\\pm$"<<Graph1_fey1002[ 3]<< "  \\\\"<<endl;
cout <<setw(15)<< "110 -- 130"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 11] <<"$\\pm$"<< Graph1_fey1004[ 11]<<" & "<<setw(10)<<Graph3_fy1006[ 11]<<"$\\pm$"<<Graph3_fey1006[ 11]<<" & "<<setw(10)<<Graph1_fy1002[ 11]  <<"$\\pm$"<<Graph1_fey1002[ 11]<< "  \\\\"<<endl;
cout <<setw(15)<< "130 -- 150"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 7] <<"$\\pm$"<< Graph1_fey1004[ 7]<<" & "<<setw(10)<<Graph3_fy1006[ 7]<<"$\\pm$"<<Graph3_fey1006[ 7]<<" & "<<setw(10)<<Graph1_fy1002[ 7]  <<"$\\pm$"<<Graph1_fey1002[ 7]<< "  \\\\"<<endl;
cout <<setw(15)<< "150 -- 200"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 0] <<"$\\pm$"<< Graph1_fey1004[ 0]<<" & "<<setw(10)<<Graph3_fy1006[ 0]<<"$\\pm$"<<Graph3_fey1006[ 0]<<" & "<<setw(10)<<Graph1_fy1002[ 0]  <<"$\\pm$"<<Graph1_fey1002[ 0]<< "  \\\\"<<endl;
cout <<setw(15)<< "200 -- 250"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 1] <<"$\\pm$"<< Graph1_fey1004[ 1]<<" & "<<setw(10)<<Graph3_fy1006[ 1]<<"$\\pm$"<<Graph3_fey1006[ 1]<<" & "<<setw(10)<<Graph1_fy1002[ 1]  <<"$\\pm$"<<Graph1_fey1002[ 1]<< "  \\\\"<<endl;
cout <<setw(15)<< "250 -- 450"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1004[ 10] <<"$\\pm$"<< Graph1_fey1004[ 10]<<" & "<<setw(10)<<Graph3_fy1006[ 10]<<"$\\pm$"<<Graph3_fey1006[ 10]<<" & "<<setw(10)<<Graph1_fy1002[ 10]  <<"$\\pm$"<<Graph1_fey1002[ 10]<< "  \\\\"<<endl;
cout << " \\hline" << endl;


cout << setw(15) << "pt bin (GeV)" << setw(15) << "eta" << setw(8)<<"dataEff" << setw(8)<< "dataErr" <<setw(8) << "mcEff" << setw(8)<< "mcErr" << setw(8) << "SF" << setw(8) << "SFErr" << endl;
cout << std::fixed << std::setprecision(3);
cout <<setw(15)<< "35 -- 40"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[ 5] <<"$\\pm$"<< Graph1_fey1003[ 5]<<" & "<<setw(10)<<Graph2_fy1005[ 5]<<"$\\pm$"<<Graph2_fey1005[ 5]<<" & "<<setw(10)<<Graph1_fy1001[ 5]  <<"$\\pm$"<<Graph1_fey1001[ 5]<< "  \\\\"<<endl;
cout <<setw(15)<< "40 -- 45"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[ 2] <<"$\\pm$"<< Graph1_fey1003[ 2]<<" & "<<setw(10)<<Graph2_fy1005[ 2]<<"$\\pm$"<<Graph2_fey1005[ 2]<<" & "<<setw(10)<<Graph1_fy1001[ 2]  <<"$\\pm$"<<Graph1_fey1001[ 2]<< "  \\\\"<<endl;
cout <<setw(15)<< "45 -- 50"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[ 8] <<"$\\pm$"<< Graph1_fey1003[ 8]<<" & "<<setw(10)<<Graph2_fy1005[ 8]<<"$\\pm$"<<Graph2_fey1005[ 8]<<" & "<<setw(10)<<Graph1_fy1001[ 8]  <<"$\\pm$"<<Graph1_fey1001[ 8]<< "  \\\\"<<endl;
cout <<setw(15)<< "50 -- 60"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[ 9] <<"$\\pm$"<< Graph1_fey1003[ 9]<<" & "<<setw(10)<<Graph2_fy1005[ 9]<<"$\\pm$"<<Graph2_fey1005[ 9]<<" & "<<setw(10)<<Graph1_fy1001[ 9]  <<"$\\pm$"<<Graph1_fey1001[ 9]<< "  \\\\"<<endl;
cout <<setw(15)<< "60 -- 70"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[ 4] <<"$\\pm$"<< Graph1_fey1003[ 4]<<" & "<<setw(10)<<Graph2_fy1005[ 4]<<"$\\pm$"<<Graph2_fey1005[ 4]<<" & "<<setw(10)<<Graph1_fy1001[ 4]  <<"$\\pm$"<<Graph1_fey1001[ 4]<< "  \\\\"<<endl;
cout <<setw(15)<< "70 -- 80"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[ 12] <<"$\\pm$"<< Graph1_fey1003[ 12]<<" & "<<setw(10)<<Graph2_fy1005[ 12]<<"$\\pm$"<<Graph2_fey1005[ 12]<<" & "<<setw(10)<<Graph1_fy1001[ 12]  <<"$\\pm$"<<Graph1_fey1001[ 12]<< "  \\\\"<<endl;
cout <<setw(15)<< "80 -- 90"  <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[13] <<"$\\pm$"<< Graph1_fey1003[13]<<" & "<<setw(10)<<Graph2_fy1005[13]<<"$\\pm$"<<Graph2_fey1005[13]<<" & "<<setw(10)<<Graph1_fy1001[13]  <<"$\\pm$"<<Graph1_fey1001[13]<< "  \\\\"<<endl;
cout <<setw(15)<< "90 -- 100" <<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[ 6] <<"$\\pm$"<< Graph1_fey1003[ 6]<<" & "<<setw(10)<<Graph2_fy1005[ 6]<<"$\\pm$"<<Graph2_fey1005[ 6]<<" & "<<setw(10)<<Graph1_fy1001[ 6]  <<"$\\pm$"<<Graph1_fey1001[ 6]<< "  \\\\"<<endl;
cout <<setw(15)<< "100 -- 110"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[ 3] <<"$\\pm$"<< Graph1_fey1003[ 3]<<" & "<<setw(10)<<Graph2_fy1005[ 3]<<"$\\pm$"<<Graph2_fey1005[ 3]<<" & "<<setw(10)<<Graph1_fy1001[ 3]  <<"$\\pm$"<<Graph1_fey1001[ 3]<< "  \\\\"<<endl;
cout <<setw(15)<< "110 -- 130"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[ 11] <<"$\\pm$"<< Graph1_fey1003[ 11]<<" & "<<setw(10)<<Graph2_fy1005[ 11]<<"$\\pm$"<<Graph2_fey1005[ 11]<<" & "<<setw(10)<<Graph1_fy1001[ 11]  <<"$\\pm$"<<Graph1_fey1001[ 11]<< "  \\\\"<<endl;
cout <<setw(15)<< "130 -- 150"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[ 7] <<"$\\pm$"<< Graph1_fey1003[ 7]<<" & "<<setw(10)<<Graph2_fy1005[ 7]<<"$\\pm$"<<Graph2_fey1005[ 7]<<" & "<<setw(10)<<Graph1_fy1001[ 7]  <<"$\\pm$"<<Graph1_fey1001[ 7]<< "  \\\\"<<endl;
cout <<setw(15)<< "150 -- 200"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[ 0] <<"$\\pm$"<< Graph1_fey1003[ 0]<<" & "<<setw(10)<<Graph2_fy1005[ 0]<<"$\\pm$"<<Graph2_fey1005[ 0]<<" & "<<setw(10)<<Graph1_fy1001[ 0]  <<"$\\pm$"<<Graph1_fey1001[ 0]<< "  \\\\"<<endl;
cout <<setw(15)<< "200 -- 250"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[ 1] <<"$\\pm$"<< Graph1_fey1003[ 1]<<" & "<<setw(10)<<Graph2_fy1005[ 1]<<"$\\pm$"<<Graph2_fey1005[ 1]<<" & "<<setw(10)<<Graph1_fy1001[ 1]  <<"$\\pm$"<<Graph1_fey1001[ 1]<< "  \\\\"<<endl;
cout <<setw(15)<< "250 -- 450"<<setw(15)<< " & EB & " <<setw(10)<<Graph1_fy1003[ 10] <<"$\\pm$"<< Graph1_fey1003[ 10]<<" & "<<setw(10)<<Graph2_fy1005[ 10]<<"$\\pm$"<<Graph2_fey1005[ 10]<<" & "<<setw(10)<<Graph1_fy1001[ 10]  <<"$\\pm$"<<Graph1_fey1001[ 10]<< "  \\\\"<<endl;
cout << " \\hline" << endl;
}
