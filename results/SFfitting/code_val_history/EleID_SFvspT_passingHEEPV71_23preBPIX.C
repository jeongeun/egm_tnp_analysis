#include <iostream>
#include <iomanip>

void EleID_SFvspT_passingHEEPV71_23preBPIX()
{
//=========Macro generated from canvas: totopT/totopT
//=========  (Wed Sep  4 06:39:09 2024) by ROOT version 6.22/06
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
   
   Double_t Graph0_fx1001[11] = {
   42.5,
   150,
   250,
   65,
   37.5,
   95,
   47.5,
   55,
   650,
   75,
   85};
   Double_t Graph0_fy1001[11] = {
   0.9893078,
   0.9923497,
   1.012992,
   0.9895259,
   0.9861352,
   0.9989059,
   0.9879672,
   0.985025,
   1.041435,
   1.000548,
   0.9972807};
   Double_t Graph0_fex1001[11] = {
   2.5,
   50,
   50,
   5,
   2.5,
   5,
   2.5,
   5,
   350,
   5,
   5};
   Double_t Graph0_fey1001[11] = {
   0.005513776,
   0.01895317,
   0.03240966,
   0.03225742,
   0.004125625,
   0.02804378,
   0.006161421,
   0.008874106,
   0.1076641,
   0.03059674,
   0.02800625};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
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
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Graph",100,10,1000);
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

/////////////// Fit SF EE
//   TF1 *fitFuncConst = new TF1("fitFuncConst", "[0]", 35, 1000);
//   gre->Fit(fitFuncConst, "R");
//   fitFuncConst->SetLineColor(kGray+2);
//   fitFuncConst->SetLineStyle(1);
//   fitFuncConst->Draw("same");
//
//   Double_t parConst = fitFuncConst->GetParameter(0);
//   Double_t errConst = fitFuncConst->GetParError(0);
//
//   Double_t ci95 = 1.96 * errConst;
//
//   TF1 *fitFuncLin = new TF1("fitFuncLin", "[0] + [1]*x", 35, 1000);
//   gre->Fit(fitFuncLin, "R");
//   fitFuncLin->SetLineColor(kBlue-9);
//   fitFuncLin->SetLineStyle(1);
//   fitFuncLin->Draw("same");
//
//   Double_t parLin[2], errLin[2];
//   parLin[0] = fitFuncLin->GetParameter(0);  // constant term
//   parLin[1] = fitFuncLin->GetParameter(1);  // slope term
//   errLin[0] = fitFuncLin->GetParError(0);
//   errLin[1] = fitFuncLin->GetParError(1);
//
//   Double_t discrepancy = sqrt(pow(parConst - parLin[0], 2) + pow(ci95, 2));
//   Double_t systematicUncertainty = sqrt(pow(errConst, 2) + pow(discrepancy,2));
//   TLatex *latex = new TLatex();
//   latex->SetNDC();
//   latex->SetTextSize(0.03);
//   latex->SetTextAlign(13);
//
//   TString textConst  = Form("EE Const Fit (pT 35-1000): SF = %.3f #pm (95%% CI: %.3f)", parConst,  ci95);
//   TString textLin    = Form("EE Lin Fit: const = %.3f #pm %.3f, slope = %.2e #pm %.5f", parLin[0], errLin[0], parLin[1], errLin[1]);
//   TString textDisc   = Form("EE Discrepancy: %.3f", discrepancy);
//   TString textSysUnc = Form("EE SF with Systematic Uncertainty: %.3f #pm %.3f", parConst, systematicUncertainty);
//   latex->SetTextColor(kGray+2);
//   latex->DrawLatex(0.15, 0.90, textConst);
//   latex->SetTextColor(kBlue-9);
//   latex->DrawLatex(0.15, 0.85, textLin);
//   latex->SetTextColor(kGray+2);
//   latex->DrawLatex(0.15, 0.80, textDisc);
//   latex->DrawLatex(0.15, 0.75, textSysUnc);
////////////////

   Double_t Graph1_fx1002[11] = {
   42.5,
   150,
   250,
   65,
   37.5,
   95,
   47.5,
   55,
   650,
   75,
   85};
   Double_t Graph1_fy1002[11] = {
   1.007378,
   0.9972693,
   1.024411,
   0.9922737,
   1.011786,
   1.003288,
   1.003352,
   0.9977778,
   1.015251,
   0.9950577,
   1.00809};
   Double_t Graph1_fex1002[11] = {
   2.5,
   50,
   50,
   5,
   2.5,
   5,
   2.5,
   5,
   350,
   5,
   5};
   Double_t Graph1_fey1002[11] = {
   0.003544285,
   0.007762253,
   0.08807086,
   0.02002787,
   0.005103286,
   0.04525444,
   0.003705743,
   0.01051161,
   0.06189811,
   0.01106505,
   0.007068868};
   gre = new TGraphErrors(11,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11002 = new TH1F("Graph_Graph11002","Graph",100,10,1000);
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
/////////////// Fit SF EB
//   TF1 *fitFuncConst_EB = new TF1("fitFuncConst_EB", "[0]", 35, 1000);
//   gre->Fit(fitFuncConst_EB, "R");
//   fitFuncConst_EB->SetLineColor(kBlack);
//   fitFuncConst_EB->SetLineStyle(1);
//   fitFuncConst_EB->Draw("same");
//
//   Double_t parConst_EB = fitFuncConst_EB->GetParameter(0);
//   Double_t errConst_EB = fitFuncConst_EB->GetParError(0);
//
//   Double_t ci95_EB = 1.96 * errConst_EB;
//
//   TF1 *fitFuncLin_EB = new TF1("fitFuncLin_EB", "[0] + [1]*x", 35, 1000);
//   gre->Fit(fitFuncLin_EB, "R");
//   fitFuncLin_EB->SetLineColor(kRed-9);
//   fitFuncLin_EB->SetLineStyle(1);
//   fitFuncLin_EB->Draw("same");
//
//   Double_t parLin_EB[2], errLin_EB[2];
//   parLin_EB[0] = fitFuncLin_EB->GetParameter(0);  // constant term
//   parLin_EB[1] = fitFuncLin_EB->GetParameter(1);  // slope term
//   errLin_EB[0] = fitFuncLin_EB->GetParError(0);
//   errLin_EB[1] = fitFuncLin_EB->GetParError(1);
//
//   Double_t discrepancy_EB = sqrt(pow(parConst_EB - parLin_EB[0], 2) + pow(ci95_EB, 2));
//   Double_t systematicUncertainty_EB = sqrt(pow(errConst_EB, 2) + pow(discrepancy_EB,2));
//   latex->SetNDC();
//   latex->SetTextSize(0.03);
//   latex->SetTextAlign(13);
//
//   TString textConst_EB    = Form("EB Const Fit (pT 35-1000): SF = %.3f #pm (95%% CI: %.3f)", parConst_EB,  ci95_EB);
//   TString textLin_EB      = Form("EB Lin Fit: const = %.3f #pm %.3f, slope = %.2e #pm %.5f", parLin_EB[0], errLin_EB[0], parLin_EB[1], errLin_EB[1]);
//   TString textDisc_EB     = Form("EB Discrepancy: %.3f", discrepancy_EB);
//   TString textSysUnc_EB   = Form("EB SF with Systematic Uncertainty: %.3f #pm %.3f",parConst_EB, systematicUncertainty_EB);
//   latex->SetTextColor(kBlack);
//   latex->DrawLatex(0.15, 0.50, textConst_EB);
//   latex->SetTextColor(kRed-9);
//   latex->DrawLatex(0.15, 0.45, textLin_EB);
//   latex->SetTextColor(kBlack);
//   latex->DrawLatex(0.15, 0.40, textDisc_EB);
//   latex->DrawLatex(0.15, 0.35, textSysUnc_EB);
//
//
//////////////////
   TLine *line = new TLine(10,1,1000,1);
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
   
   Double_t Graph0_fx1003[11] = {
   42.5,
   150,
   250,
   65,
   37.5,
   95,
   47.5,
   55,
   650,
   75,
   85};
   Double_t Graph0_fy1003[11] = {
   0.879,
   0.908,
   0.9208099,
   0.8975,
   0.8535,
   0.913,
   0.8883607,
   0.888,
   0.939808,
   0.913,
   0.9117569};
   Double_t Graph0_fex1003[11] = {
   2.5,
   50,
   50,
   5,
   2.5,
   5,
   2.5,
   5,
   350,
   5,
   5};
   Double_t Graph0_fey1003[11] = {
   0.00489899,
   0.01734215,
   0.02946038,
   0.02925748,
   0.003570728,
   0.02563201,
   0.005540229,
   0.008000006,
   0.09715783,
   0.02791953,
   0.02560452};
   gre = new TGraphErrors(11,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#999999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01003 = new TH1F("Graph_Graph01003","Graph",100,10,1000);
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
   
   Double_t Graph1_fx1004[11] = {
   42.5,
   150,
   250,
   65,
   37.5,
   95,
   47.5,
   55,
   650,
   75,
   85};
   Double_t Graph1_fy1004[11] = {
   0.8875,
   0.913,
   0.9311412,
   0.899,
   0.8585,
   0.9155,
   0.898,
   0.898,
   0.9205856,
   0.906,
   0.9207041};
   Double_t Graph1_fex1004[11] = {
   2.5,
   50,
   50,
   5,
   2.5,
   5,
   2.5,
   5,
   350,
   5,
   5};
   Double_t Graph1_fey1004[11] = {
   0.003122515,
   0.007106342,
   0.08005227,
   0.01814525,
   0.004330139,
   0.04129467,
   0.00331664,
   0.009460449,
   0.05612654,
   0.01007473,
   0.006456104};
   gre = new TGraphErrors(11,Graph1_fx1004,Graph1_fy1004,Graph1_fex1004,Graph1_fey1004);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11004 = new TH1F("Graph_Graph11004","Graph",100,10,1000);
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

  // MC efficiency -jeongeun added EE, EB using calculate_mcerr.py

   Double_t Graph2_fx1005[11] = { 42.5, 150, 250, 65, 37.5, 95, 47.5, 55, 650, 75, 85}; //EE
   Double_t Graph2_fex1005[11] = { 2.5, 50, 50, 5, 2.5, 5, 2.5, 5, 350, 5, 5};
   Double_t Graph2_fy1005[11] ={
   0.8885000000000001,
   0.915,
   0.909,
   0.907,
   0.8654999999999999,
   0.914,
   0.8991803278688525,
   0.9015,
   0.9024159360183057,
   0.9125000000000001,
    0.9142430668841762
   };

   Double_t Graph2_fey1005[11]  ={
   0.004951936679330373,
   0.017475843053352716,
   0.029082534445338648,
   0.029567168582459842,
   0.003620931777214056,
   0.025660087680818615,
   0.005607705172026296,
   0.008121627966635991,
   0.09329222611637199,
   0.027904239013508653,
   0.02567434109259662
   };

   gre = new TGraphErrors(11,Graph2_fx1005,Graph2_fy1005,Graph2_fex1005,Graph2_fey1005); //EE
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


   Double_t Graph3_fx1006[11] = { 42.5, 150, 250, 65, 37.5, 95, 47.5, 55, 650, 75, 85}; //EB
   Double_t Graph3_fex1006[11] = { 2.5, 50, 50, 5, 2.5, 5, 2.5, 5, 350, 5, 5};
   Double_t Graph3_fy1006[11] ={
   0.881,
   0.9155,
   0.9089529476889012,
   0.906,
   0.8485,
   0.9125000000000001,
   0.895,
   0.9,
   0.9067569331158238,
   0.9105000000000001,
   0.9133150684931506
   };

   Double_t Graph3_fey1006[11]  ={
    0.00309964588794216,
    0.007125801006197376,
    0.07814469745729448,
    0.018286536775142064,
    0.004279700143478736,
    0.0411593555614787,
    0.0033055597772494935,
    0.009481519292246669,
    0.05528342618041806,
    0.010124765831541798,
    0.006404290563023068
   };

   gre = new TGraphErrors(11,Graph3_fx1006,Graph3_fy1006,Graph3_fex1006,Graph3_fey1006); //EB
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
   totopT->SaveAs("EleID_SFvspT_passingHEEPV71_2023preBPIX_v1.pdf");
   //totopT->SaveAs("EleID_SFvspT_passingHEEPV71_2023preBPIX_v1_wfit.pdf");

using namespace std;
cout << setw(15) << "pt bin (GeV)" << setw(15) << "eta" << setw(8)<<"dataEff" << setw(8)<< "dataErr" <<setw(8) << "mcEff" << setw(8)<< "mcErr" << setw(8) << "SF" << setw(8) << "SFErr" << endl;
cout << std::fixed << std::setprecision(3);
cout <<setw(15)<< "35 -- 40"  <<setw(15)<< " & 0.0 -- 1.44 & " <<setw(10)<<Graph1_fy1004[ 4] <<"$\\pm$"<< Graph1_fey1004[ 4]<<" & "<<setw(10)<<Graph3_fy1006[ 4]<<"$\\pm$"<<Graph3_fey1006[ 4]<<" & "<<setw(10)<<Graph1_fy1002[ 4]  <<"$\\pm$"<<Graph1_fey1002[ 4]<< "  \\\\"<<endl;
cout <<setw(15)<< "40 -- 45"  <<setw(15)<< " & 0.0 -- 1.44 & " <<setw(10)<<Graph1_fy1004[ 0] <<"$\\pm$"<< Graph1_fey1004[ 0]<<" & "<<setw(10)<<Graph3_fy1006[ 0]<<"$\\pm$"<<Graph3_fey1006[ 0]<<" & "<<setw(10)<<Graph1_fy1002[ 0]  <<"$\\pm$"<<Graph1_fey1002[ 0]<< "  \\\\"<<endl;
cout <<setw(15)<< "45 -- 50"  <<setw(15)<< " & 0.0 -- 1.44 & " <<setw(10)<<Graph1_fy1004[ 6] <<"$\\pm$"<< Graph1_fey1004[ 6]<<" & "<<setw(10)<<Graph3_fy1006[ 6]<<"$\\pm$"<<Graph3_fey1006[ 6]<<" & "<<setw(10)<<Graph1_fy1002[ 6]  <<"$\\pm$"<<Graph1_fey1002[ 6]<< "  \\\\"<<endl;
cout <<setw(15)<< "50 -- 60"  <<setw(15)<< " & 0.0 -- 1.44 & " <<setw(10)<<Graph1_fy1004[ 7] <<"$\\pm$"<< Graph1_fey1004[ 7]<<" & "<<setw(10)<<Graph3_fy1006[ 7]<<"$\\pm$"<<Graph3_fey1006[ 7]<<" & "<<setw(10)<<Graph1_fy1002[ 7]  <<"$\\pm$"<<Graph1_fey1002[ 7]<< "  \\\\"<<endl;
cout <<setw(15)<< "60 -- 70"  <<setw(15)<< " & 0.0 -- 1.44 & " <<setw(10)<<Graph1_fy1004[ 3] <<"$\\pm$"<< Graph1_fey1004[ 3]<<" & "<<setw(10)<<Graph3_fy1006[ 3]<<"$\\pm$"<<Graph3_fey1006[ 3]<<" & "<<setw(10)<<Graph1_fy1002[ 3]  <<"$\\pm$"<<Graph1_fey1002[ 3]<< "  \\\\"<<endl;
cout <<setw(15)<< "70 -- 80"  <<setw(15)<< " & 0.0 -- 1.44 & " <<setw(10)<<Graph1_fy1004[ 9] <<"$\\pm$"<< Graph1_fey1004[ 9]<<" & "<<setw(10)<<Graph3_fy1006[ 9]<<"$\\pm$"<<Graph3_fey1006[ 9]<<" & "<<setw(10)<<Graph1_fy1002[ 9]  <<"$\\pm$"<<Graph1_fey1002[ 9]<< "  \\\\"<<endl;
cout <<setw(15)<< "80 -- 90"  <<setw(15)<< " & 0.0 -- 1.44 & " <<setw(10)<<Graph1_fy1004[10] <<"$\\pm$"<< Graph1_fey1004[10]<<" & "<<setw(10)<<Graph3_fy1006[10]<<"$\\pm$"<<Graph3_fey1006[10]<<" & "<<setw(10)<<Graph1_fy1002[10]  <<"$\\pm$"<<Graph1_fey1002[10]<< "  \\\\"<<endl;
cout <<setw(15)<< "90 -- 100" <<setw(15)<< " & 0.0 -- 1.44 & " <<setw(10)<<Graph1_fy1004[ 5] <<"$\\pm$"<< Graph1_fey1004[ 5]<<" & "<<setw(10)<<Graph3_fy1006[ 5]<<"$\\pm$"<<Graph3_fey1006[ 5]<<" & "<<setw(10)<<Graph1_fy1002[ 5]  <<"$\\pm$"<<Graph1_fey1002[ 5]<< "  \\\\"<<endl;
cout <<setw(15)<< "100 -- 200"<<setw(15)<< " & 0.0 -- 1.44 & " <<setw(10)<<Graph1_fy1004[ 1] <<"$\\pm$"<< Graph1_fey1004[ 1]<<" & "<<setw(10)<<Graph3_fy1006[ 1]<<"$\\pm$"<<Graph3_fey1006[ 1]<<" & "<<setw(10)<<Graph1_fy1002[ 1]  <<"$\\pm$"<<Graph1_fey1002[ 1]<< "  \\\\"<<endl;
cout <<setw(15)<< "200 -- 300"<<setw(15)<< " & 0.0 -- 1.44 & " <<setw(10)<<Graph1_fy1004[ 2] <<"$\\pm$"<< Graph1_fey1004[ 2]<<" & "<<setw(10)<<Graph3_fy1006[ 2]<<"$\\pm$"<<Graph3_fey1006[ 2]<<" & "<<setw(10)<<Graph1_fy1002[ 2]  <<"$\\pm$"<<Graph1_fey1002[ 2]<< "  \\\\"<<endl;
cout <<setw(15)<< "300 -- inf"<<setw(15)<< " & 0.0 -- 1.44 & " <<setw(10)<<Graph1_fy1004[ 8] <<"$\\pm$"<< Graph1_fey1004[ 8]<<" & "<<setw(10)<<Graph3_fy1006[ 8]<<"$\\pm$"<<Graph3_fey1006[ 8]<<" & "<<setw(10)<<Graph1_fy1002[ 8]  <<"$\\pm$"<<Graph1_fey1002[ 8]<< "  \\\\"<<endl;
cout << " \\hline" << endl;
cout <<setw(15)<< "35 -- 40"  <<setw(15)<< " & 1.44 -- 2.5 & " <<setw(10)<<Graph0_fy1003[ 4] <<"$\\pm$"<< Graph0_fey1003[ 4]<<" & "<<setw(10)<<Graph2_fy1005[ 4]<<"$\\pm$"<<Graph2_fey1005[ 4]<<" & "<<setw(10)<<Graph0_fy1001[ 4]  <<"$\\pm$"<<Graph0_fey1001[ 4]<< "  \\\\"<<endl;
cout <<setw(15)<< "40 -- 45"  <<setw(15)<< " & 1.44 -- 2.5 & " <<setw(10)<<Graph0_fy1003[ 0] <<"$\\pm$"<< Graph0_fey1003[ 0]<<" & "<<setw(10)<<Graph2_fy1005[ 0]<<"$\\pm$"<<Graph2_fey1005[ 0]<<" & "<<setw(10)<<Graph0_fy1001[ 0]  <<"$\\pm$"<<Graph0_fey1001[ 0]<< "  \\\\"<<endl;
cout <<setw(15)<< "45 -- 50"  <<setw(15)<< " & 1.44 -- 2.5 & " <<setw(10)<<Graph0_fy1003[ 6] <<"$\\pm$"<< Graph0_fey1003[ 6]<<" & "<<setw(10)<<Graph2_fy1005[ 6]<<"$\\pm$"<<Graph2_fey1005[ 6]<<" & "<<setw(10)<<Graph0_fy1001[ 6]  <<"$\\pm$"<<Graph0_fey1001[ 6]<< "  \\\\"<<endl;
cout <<setw(15)<< "50 -- 60"  <<setw(15)<< " & 1.44 -- 2.5 & " <<setw(10)<<Graph0_fy1003[ 7] <<"$\\pm$"<< Graph0_fey1003[ 7]<<" & "<<setw(10)<<Graph2_fy1005[ 7]<<"$\\pm$"<<Graph2_fey1005[ 7]<<" & "<<setw(10)<<Graph0_fy1001[ 7]  <<"$\\pm$"<<Graph0_fey1001[ 7]<< "  \\\\"<<endl;
cout <<setw(15)<< "60 -- 70"  <<setw(15)<< " & 1.44 -- 2.5 & " <<setw(10)<<Graph0_fy1003[ 3] <<"$\\pm$"<< Graph0_fey1003[ 3]<<" & "<<setw(10)<<Graph2_fy1005[ 3]<<"$\\pm$"<<Graph2_fey1005[ 3]<<" & "<<setw(10)<<Graph0_fy1001[ 3]  <<"$\\pm$"<<Graph0_fey1001[ 3]<< "  \\\\"<<endl;
cout <<setw(15)<< "70 -- 80"  <<setw(15)<< " & 1.44 -- 2.5 & " <<setw(10)<<Graph0_fy1003[ 9] <<"$\\pm$"<< Graph0_fey1003[ 9]<<" & "<<setw(10)<<Graph2_fy1005[ 9]<<"$\\pm$"<<Graph2_fey1005[ 9]<<" & "<<setw(10)<<Graph0_fy1001[ 9]  <<"$\\pm$"<<Graph0_fey1001[ 9]<< "  \\\\"<<endl;
cout <<setw(15)<< "80 -- 90"  <<setw(15)<< " & 1.44 -- 2.5 & " <<setw(10)<<Graph0_fy1003[10] <<"$\\pm$"<< Graph0_fey1003[10]<<" & "<<setw(10)<<Graph2_fy1005[10]<<"$\\pm$"<<Graph2_fey1005[10]<<" & "<<setw(10)<<Graph0_fy1001[10]  <<"$\\pm$"<<Graph0_fey1001[10]<< "  \\\\"<<endl;
cout <<setw(15)<< "90 -- 100" <<setw(15)<< " & 1.44 -- 2.5 & " <<setw(10)<<Graph0_fy1003[ 5] <<"$\\pm$"<< Graph0_fey1003[ 5]<<" & "<<setw(10)<<Graph2_fy1005[ 5]<<"$\\pm$"<<Graph2_fey1005[ 5]<<" & "<<setw(10)<<Graph0_fy1001[ 5]  <<"$\\pm$"<<Graph0_fey1001[ 5]<< "  \\\\"<<endl;
cout <<setw(15)<< "100 -- 200"<<setw(15)<< " & 1.44 -- 2.5 & " <<setw(10)<<Graph0_fy1003[ 1] <<"$\\pm$"<< Graph0_fey1003[ 1]<<" & "<<setw(10)<<Graph2_fy1005[ 1]<<"$\\pm$"<<Graph2_fey1005[ 1]<<" & "<<setw(10)<<Graph0_fy1001[ 1]  <<"$\\pm$"<<Graph0_fey1001[ 1]<< "  \\\\"<<endl;
cout <<setw(15)<< "200 -- 300"<<setw(15)<< " & 1.44 -- 2.5 & " <<setw(10)<<Graph0_fy1003[ 2] <<"$\\pm$"<< Graph0_fey1003[ 2]<<" & "<<setw(10)<<Graph2_fy1005[ 2]<<"$\\pm$"<<Graph2_fey1005[ 2]<<" & "<<setw(10)<<Graph0_fy1001[ 2]  <<"$\\pm$"<<Graph0_fey1001[ 2]<< "  \\\\"<<endl;
cout <<setw(15)<< "300 -- inf"<<setw(15)<< " & 1.44 -- 2.5 & " <<setw(10)<<Graph0_fy1003[ 8] <<"$\\pm$"<< Graph0_fey1003[ 8]<<" & "<<setw(10)<<Graph2_fy1005[ 8]<<"$\\pm$"<<Graph2_fey1005[ 8]<<" & "<<setw(10)<<Graph0_fy1001[ 8]  <<"$\\pm$"<<Graph0_fey1001[ 8]<< "  \\\\"<<endl;



}
