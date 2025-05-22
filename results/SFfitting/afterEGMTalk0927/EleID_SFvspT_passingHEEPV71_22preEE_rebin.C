void EleID_SFvspT_passingHEEPV71_22preEE_rebin()
{
//=========Macro generated from canvas: totopT/totopT
//=========  (Thu Oct  3 20:59:39 2024) by ROOT version 6.22/06
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
   
   Double_t Graph0_fx1001[14] = {
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
   Double_t Graph0_fy1001[14] = {
   0.9943403,
   0.9802815,
   0.9906181,
   0.9857209,
   0.9904192,
   0.9909451,
   1.021399,
   0.9705344,
   0.9905065,
   0.990793,
   0.953804,
   0.9877832,
   1.001934,
   1.042036};
   Double_t Graph0_fex1001[14] = {
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
   Double_t Graph0_fey1001[14] = {
   0.05847593,
   0.04553238,
   0.008054378,
   0.03178949,
   0.01834916,
   0.006861558,
   0.02049348,
   0.05909837,
   0.02410205,
   0.01359928,
   0.07504594,
   0.03490275,
   0.01929516,
   0.01918643};

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
   
   //TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Graph",100,10,1000);
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
   0.9985,
   1.021025,
   0.9765923,
   1.012207,
   0.9625963,
   0.978139,
   1.008027,
   1.007929,
   0.9779333,
   0.9768935,
   0.9961369,
   1.001621,
   0.9731618,
   1.016523};
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
   0.02386596,
   0.06579485,
   0.0068642,
   0.008651469,
   0.02795557,
   0.005605392,
   0.01528461,
   0.01124296,
   0.006089196,
   0.03095059,
   0.06095924,
   0.01292392,
   0.05588943,
   0.02075378};
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
   
   Double_t Graph0_fx1003[14] = {
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
   Double_t Graph0_fy1003[14] = {
   0.9003818,
   0.911074,
   0.8975,
   0.8990351,
   0.9008711,
   0.8755,
   0.9488974,
   0.8825365,
   0.9090729,
   0.911,
   0.8966909,
   0.9140779,
   0.9080964,
   0.9484202};
   Double_t Graph0_fex1003[14] = {
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
   Double_t Graph0_fey1003[14] = {
   0.05295034,
   0.04231781,
   0.007297267,
   0.02899387,
   0.01669014,
   0.006062186,
   0.01903879,
   0.05373995,
   0.02212053,
   0.01250406,
   0.07055225,
   0.03229842,
   0.01748804,
   0.01746274};
   gre = new TGraphErrors(14,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#999999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   //TH1F *Graph_Graph01003 = new TH1F("Graph_Graph01003","Graph",100,10,1000);
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
   0.9207207,
   0.9270601,
   0.897,
   0.9261356,
   0.875,
   0.8725,
   0.9205566,
   0.9237,
   0.9085,
   0.9052054,
   0.9025,
   0.9166475,
   0.8777156,
   0.928311};
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
   0.0220069,
   0.05973974,
   0.006304768,
   0.007915801,
   0.02541161,
   0.00500001,
   0.01395831,
   0.01030343,
   0.005656863,
   0.02867932,
   0.05522907,
   0.0118275,
   0.05040788,
   0.01895281};
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
 0.9055066434605425,
 0.9294003747657713,
 0.906,
 0.9120584775323166,
 0.9095856443719412,
 0.8835,
 0.929017092768444,
 0.9093305267011395,
 0.9177858786685331,
 0.9194655581947744,
 0.9401207804878049,
 0.9253831365935918,
 0.9063433962264151,
 0.9101609930411887
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
 0.05325173127148059,
 0.04316904262654065,
 0.007366377214553461,
 0.029413876596129745,
 0.016851586657504025,
 0.006117580121856136,
 0.018639912840235837,
 0.055371504496379446,
 0.02233253894518002,
 0.01262026025262276,
 0.07396933747821209,
 0.0326978787357032,
 0.017454282555723847,
 0.016758292091856104,
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
 0.9221038785834739,
 0.9079699265121538,
 0.9185000000000001,
 0.9149661114302124,
 0.909,
 0.892,
 0.913226334519573,
 0.9164333451830787,
 0.929,
 0.9266162976489387,
 0.906,
 0.9151638903815154,
 0.9019215987701767,
 0.9132221125370188,
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
 0.022039956961086897,
 0.05850957136302523,
 0.0064558856655040145,
 0.007820334647485671,
 0.026399036182235693,
 0.005111758074488404,
 0.013847161606074179,
 0.01022237045952369,
 0.005784508320362724,
 0.029357677726243533,
 0.05544325409496613,
 0.01180835813080102,
 0.05179804845861081,
 0.018644748937967626,
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

   TLatex *   tex = new TLatex(0.95,0.92,"8.0 fb^{-1} (13.6 TeV) 2022");
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
   //totopT->SaveAs("EleID_SFvspT_passingHEEPV71_2022preEE_rebin_fit.pdf");
   totopT->SaveAs("EleID_SFvspT_passingHEEPV71_2022preEE_rebin_nofit.pdf");

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
cout <<setw(15)<< "35 -- 40"  <<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[ 5] <<"$\\pm$"<< Graph0_fey1003[ 5]<<" & "<<setw(10)<<Graph2_fy1005[ 5]<<"$\\pm$"<<Graph2_fey1005[ 5]<<" & "<<setw(10)<<Graph0_fy1001[ 5]  <<"$\\pm$"<<Graph0_fey1001[ 5]<< "  \\\\"<<endl;
cout <<setw(15)<< "40 -- 45"  <<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[ 2] <<"$\\pm$"<< Graph0_fey1003[ 2]<<" & "<<setw(10)<<Graph2_fy1005[ 2]<<"$\\pm$"<<Graph2_fey1005[ 2]<<" & "<<setw(10)<<Graph0_fy1001[ 2]  <<"$\\pm$"<<Graph0_fey1001[ 2]<< "  \\\\"<<endl;
cout <<setw(15)<< "45 -- 50"  <<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[ 8] <<"$\\pm$"<< Graph0_fey1003[ 8]<<" & "<<setw(10)<<Graph2_fy1005[ 8]<<"$\\pm$"<<Graph2_fey1005[ 8]<<" & "<<setw(10)<<Graph0_fy1001[ 8]  <<"$\\pm$"<<Graph0_fey1001[ 8]<< "  \\\\"<<endl;
cout <<setw(15)<< "50 -- 60"  <<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[ 9] <<"$\\pm$"<< Graph0_fey1003[ 9]<<" & "<<setw(10)<<Graph2_fy1005[ 9]<<"$\\pm$"<<Graph2_fey1005[ 9]<<" & "<<setw(10)<<Graph0_fy1001[ 9]  <<"$\\pm$"<<Graph0_fey1001[ 9]<< "  \\\\"<<endl;
cout <<setw(15)<< "60 -- 70"  <<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[ 4] <<"$\\pm$"<< Graph0_fey1003[ 4]<<" & "<<setw(10)<<Graph2_fy1005[ 4]<<"$\\pm$"<<Graph2_fey1005[ 4]<<" & "<<setw(10)<<Graph0_fy1001[ 4]  <<"$\\pm$"<<Graph0_fey1001[ 4]<< "  \\\\"<<endl;
cout <<setw(15)<< "70 -- 80"  <<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[ 12] <<"$\\pm$"<< Graph0_fey1003[ 12]<<" & "<<setw(10)<<Graph2_fy1005[ 12]<<"$\\pm$"<<Graph2_fey1005[ 12]<<" & "<<setw(10)<<Graph0_fy1001[ 12]  <<"$\\pm$"<<Graph0_fey1001[ 12]<< "  \\\\"<<endl;
cout <<setw(15)<< "80 -- 90"  <<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[13] <<"$\\pm$"<< Graph0_fey1003[13]<<" & "<<setw(10)<<Graph2_fy1005[13]<<"$\\pm$"<<Graph2_fey1005[13]<<" & "<<setw(10)<<Graph0_fy1001[13]  <<"$\\pm$"<<Graph0_fey1001[13]<< "  \\\\"<<endl;
cout <<setw(15)<< "90 -- 100" <<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[ 6] <<"$\\pm$"<< Graph0_fey1003[ 6]<<" & "<<setw(10)<<Graph2_fy1005[ 6]<<"$\\pm$"<<Graph2_fey1005[ 6]<<" & "<<setw(10)<<Graph0_fy1001[ 6]  <<"$\\pm$"<<Graph0_fey1001[ 6]<< "  \\\\"<<endl;
cout <<setw(15)<< "100 -- 110"<<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[ 3] <<"$\\pm$"<< Graph0_fey1003[ 3]<<" & "<<setw(10)<<Graph2_fy1005[ 3]<<"$\\pm$"<<Graph2_fey1005[ 3]<<" & "<<setw(10)<<Graph0_fy1001[ 3]  <<"$\\pm$"<<Graph0_fey1001[ 3]<< "  \\\\"<<endl;
cout <<setw(15)<< "110 -- 130"<<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[ 11] <<"$\\pm$"<< Graph0_fey1003[ 11]<<" & "<<setw(10)<<Graph2_fy1005[ 11]<<"$\\pm$"<<Graph2_fey1005[ 11]<<" & "<<setw(10)<<Graph0_fy1001[ 11]  <<"$\\pm$"<<Graph0_fey1001[ 11]<< "  \\\\"<<endl;
cout <<setw(15)<< "130 -- 150"<<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[ 7] <<"$\\pm$"<< Graph0_fey1003[ 7]<<" & "<<setw(10)<<Graph2_fy1005[ 7]<<"$\\pm$"<<Graph2_fey1005[ 7]<<" & "<<setw(10)<<Graph0_fy1001[ 7]  <<"$\\pm$"<<Graph0_fey1001[ 7]<< "  \\\\"<<endl;
cout <<setw(15)<< "150 -- 200"<<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[ 0] <<"$\\pm$"<< Graph0_fey1003[ 0]<<" & "<<setw(10)<<Graph2_fy1005[ 0]<<"$\\pm$"<<Graph2_fey1005[ 0]<<" & "<<setw(10)<<Graph0_fy1001[ 0]  <<"$\\pm$"<<Graph0_fey1001[ 0]<< "  \\\\"<<endl;
cout <<setw(15)<< "200 -- 250"<<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[ 1] <<"$\\pm$"<< Graph0_fey1003[ 1]<<" & "<<setw(10)<<Graph2_fy1005[ 1]<<"$\\pm$"<<Graph2_fey1005[ 1]<<" & "<<setw(10)<<Graph0_fy1001[ 1]  <<"$\\pm$"<<Graph0_fey1001[ 1]<< "  \\\\"<<endl;
cout <<setw(15)<< "250 -- 450"<<setw(15)<< " & EB & " <<setw(10)<<Graph0_fy1003[ 10] <<"$\\pm$"<< Graph0_fey1003[ 10]<<" & "<<setw(10)<<Graph2_fy1005[ 10]<<"$\\pm$"<<Graph2_fey1005[ 10]<<" & "<<setw(10)<<Graph0_fy1001[ 10]  <<"$\\pm$"<<Graph0_fey1001[ 10]<< "  \\\\"<<endl;
cout << " \\hline" << endl;
}
