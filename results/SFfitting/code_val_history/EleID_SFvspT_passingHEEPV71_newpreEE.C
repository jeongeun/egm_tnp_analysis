#include <iostream>
#include <iomanip>
void EleID_SFvspT_passingHEEPV71_newpreEE()
{
//=========Macro generated from canvas: totopT/totopT
//=========  (Tue Sep  3 19:05:33 2024) by ROOT version 6.22/06
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
  
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ lower pad SF  
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
  
   //Graph0_fx1001 = lower pad SF data EE gray point 
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
   0.9906181,
   0.981543,
   0.9574253,
   0.9904192,
   0.9909451,
   1.021399,
   0.9905065,
   0.990793,
   0.9836241,
   1.001934,
   1.042036};
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
   0.008054378,
   0.02149676,
   0.05018797,
   0.01834916,
   0.006861558,
   0.02049348,
   0.02410205,
   0.01359928,
   0.0856974,
   0.01929516,
   0.01918643};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
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
//////////////////////// Fitting EE
   // TF1 *fitFuncExp = new TF1("fitFuncExp", "[0]*exp(-[1]*x)+[2]", 35, 1000);
   // fitFuncExp->SetParameters(1, 0.01, 1);
   // gre->Fit(fitFuncExp, "R");
   // fitFuncExp->SetLineColor(kBlue-9);
   // fitFuncExp->SetLineStyle(1);
   // fitFuncExp->Draw("same");

   // Double_t parExp[3], errExp[3];
   // for (int i = 0; i < 3; i++) {
   //     parExp[i] = fitFuncExp->GetParameter(i);
   //     errExp[i] = fitFuncExp->GetParError(i);
   // }
   TF1 *fitFuncConst = new TF1("fitFuncConst", "[0]", 35, 80);
   gre->Fit(fitFuncConst, "R");
   fitFuncConst->SetLineColor(kGray+2);
   fitFuncConst->SetLineStyle(1);
   fitFuncConst->Draw("same");
   
   Double_t parConst = fitFuncConst->GetParameter(0);
   Double_t errConst = fitFuncConst->GetParError(0);
   
   Double_t ci95 = 1.96 * errConst;
   
   TF1 *fitFuncLin = new TF1("fitFuncLin", "[0] + [1]*x", 35, 80);
   //fitFuncLin->SetParameters(1, -0.00001);
   gre->Fit(fitFuncLin, "R");
   fitFuncLin->SetLineColor(kBlue-9);
   fitFuncLin->SetLineStyle(1);
   fitFuncLin->Draw("same");
   
   Double_t parLin[2], errLin[2];
   parLin[0] = fitFuncLin->GetParameter(0);  // constant term
   parLin[1] = fitFuncLin->GetParameter(1);  // slope term
   errLin[0] = fitFuncLin->GetParError(0);
   errLin[1] = fitFuncLin->GetParError(1);
   
   // Calculate Discrepancy and Systematic Uncertainty
   Double_t discrepancy = sqrt(pow(parConst - parLin[0], 2) + pow(ci95, 2));
   Double_t systematicUncertainty = sqrt(pow(errConst, 2) + pow(discrepancy,2));

   //Double_t discrepancy = sqrt(pow(parConst - parExp[2], 2) + pow(ci95, 2));
   //Double_t systematicUncertainty = sqrt(pow(errConst, 2) + pow(discrepancy, 2));
   
   TLatex *latex = new TLatex();
   latex->SetNDC();
   latex->SetTextSize(0.03);
   latex->SetTextAlign(13);
   
   TString textConst  = Form("EE Const Fit (pT 35-80): SF = %.3f #pm (95%% CI: %.3f)", parConst,  ci95);
   TString textLin    = Form("EE Lin Fit: const = %.3f #pm %.3f, slope = %.2e #pm %.5f", parLin[0], errLin[0], parLin[1], errLin[1]);
   TString textDisc   = Form("EE Discrepancy: %.3f", discrepancy);
   TString textSysUnc = Form("EE SF with Systematic Uncertainty: %.3f #pm %.3f", parConst, systematicUncertainty);
   latex->SetTextColor(kGray+2);
   latex->DrawLatex(0.15, 0.90, textConst);
   latex->SetTextColor(kBlue-9);
   latex->DrawLatex(0.15, 0.85, textLin);
   latex->SetTextColor(kGray+2);
   latex->DrawLatex(0.15, 0.80, textDisc);
   latex->DrawLatex(0.15, 0.75, textSysUnc);

//////////////
   TF1 *fitFuncConst1 = new TF1("fitFuncConst1", "[0]", 80, 1000);
   gre->Fit(fitFuncConst1, "R");
   fitFuncConst1->SetLineColor(kGray+2);
   fitFuncConst1->SetLineStyle(1);
   fitFuncConst1->Draw("same");

   Double_t parConst1 = fitFuncConst1->GetParameter(0);
   Double_t errConst1 = fitFuncConst1->GetParError(0);

   Double_t ci95_1 = 1.96 * errConst1;

   TF1 *fitFuncLin1 = new TF1("fitFuncLin1", "[0] + [1]*x", 80, 1000);
   fitFuncLin1->SetParameters(1, -0.00001);
   gre->Fit(fitFuncLin1, "R");
   fitFuncLin1->SetLineColor(kBlue-9);
   fitFuncLin1->SetLineStyle(1);
   fitFuncLin1->Draw("same");

   Double_t parLin1[2], errLin1[2];
   parLin1[0] = fitFuncLin1->GetParameter(0);  // constant term
   parLin1[1] = fitFuncLin1->GetParameter(1);  // slope term
   errLin1[0] = fitFuncLin1->GetParError(0);
   errLin1[1] = fitFuncLin1->GetParError(1);
   Double_t discrepancy1 = sqrt(pow(parConst1 - parLin1[0], 2) + pow(ci95_1, 2));
   Double_t systematicUncertainty1 = sqrt(pow(errConst1, 2) + pow(discrepancy1,2));

   latex->SetNDC();
   latex->SetTextSize(0.03);
   latex->SetTextAlign(13);
   TString textConst1  = Form("EE Const Fit (pT 80-1000): SF = %.3f #pm (95%% CI: %.3f)", parConst1,  ci95_1);
   TString textLin1    = Form("EE Lin Fit: const = %.3f #pm %.3f, slope = %.2e #pm %.5f", parLin1[0], errLin1[0], parLin1[1], errLin1[1]);
   TString textDisc1   = Form("EE Discrepancy: %.3f", discrepancy1);
   TString textSysUnc1 = Form("EE SF with Systematic Uncertainty: %.3f #pm %.3f", parConst1, systematicUncertainty1);
   latex->SetTextColor(kGray+2);
   latex->DrawLatex(0.55, 0.90, textConst1);
   latex->SetTextColor(kBlue-9);
   latex->DrawLatex(0.55, 0.85, textLin1);
   latex->SetTextColor(kGray+2);
   latex->DrawLatex(0.55, 0.80, textDisc1);
   latex->DrawLatex(0.55, 0.75, textSysUnc1);

   //TString textExp0     = Form("EE Exp Fit: %.3f+%.3f*exp(-%.3f*x)", parExp[2],parExp[1],parExp[0]);
   //TString textExp1     = Form("EE Exp: const = %.3f #pm %.3f, slope = %.3f #pm %.3f", parExp[2], errExp[2], parExp[1], errExp[1]);
   //TString textDisc     = Form("EE SF = %.3f #pm %.3f", parConst, discrepancy);
   //TString textSysUnc   = Form("Exp Systematic Uncertainty: %.3f", systematicUncertainty);
   //latex->SetTextColor(kGray+2);
   //latex->DrawLatex(0.15, 0.90, textConst);
   //latex->SetTextColor(kBlue-9);
   //latex->DrawLatex(0.15, 0.85, textExp0);
   //latex->DrawLatex(0.15, 0.80, textExp1);
   //latex->SetTextColor(kGray+2);
   //latex->DrawLatex(0.15, 0.70, textDisc);
   //latex->DrawLatex(0.15, 0.75, textSysUnc);


//////////////////////////////////
//    TF1 *fitFuncExp = new TF1("fitFuncExp", "[0]*exp(-[1]*x)+[2]", 35, 1000);
//    fitFuncExp->SetParameters(1, 0.01, 1);
//    gre->Fit(fitFuncExp, "R");
//    fitFuncExp->SetLineColor(kGray+2);
//    fitFuncExp->SetLineStyle(1);
//    fitFuncExp->Draw("same");
//
//    Double_t parExp[3], errExp[3];
//    for (int i = 0; i < 3; i++) {
//        parExp[i] = fitFuncExp->GetParameter(i);
//        errExp[i] = fitFuncExp->GetParError(i);
//    }
//
//    TF1 *fitFuncLin = new TF1("fitFuncLin", "[0] + [1]*x", 35, 1000);
//    gre->Fit(fitFuncLin, "R");
//    fitFuncLin->SetLineColor(kBlue-9);
//    fitFuncLin->SetLineStyle(1);
//    fitFuncLin->Draw("same");
//
//    Double_t parLin[2], errLin[2];
//    for (int i = 0; i < 2; i++) {
//        parLin[i] = fitFuncLin->GetParameter(i);
//        errLin[i] = fitFuncLin->GetParError(i);
//    }
//
//    Double_t discrepancy0 = sqrt(pow(parExp[2] - parLin[0], 2) + pow(errExp[2], 2) + pow(errLin[0], 2));
//    Double_t systematicUncertainty = sqrt(pow(errExp[2], 2) + discrepancy0);
//
//    TLatex *latex = new TLatex();
//    latex->SetNDC();
//    latex->SetTextSize(0.03);
//    latex->SetTextAlign(13);
//    TString textExp   = Form("ExpFit: a*exp(-b*x)+c");
//    TString textExp0  = Form("EE Exp: c = %.3f #pm %.3f", parExp[2], errExp[2]);
//    TString textExp1  = Form("EE Exp: b = %.3f #pm %.3f", parExp[1], errExp[1]);
//    TString textLin   = Form("LinFit: const + slope*x");
//    TString textLin0  = Form("EE Lin: const = %.3f #pm %.3f", parLin[0], errLin[0]);
//    TString textLin1  = Form("EE Lin: slope = %.3f #pm %.3f", parLin[1], errLin[1]);
//    TString textDisc0 = Form("EE Discrepancy (c): %.3f", discrepancy0);
//    TString textDisc1 = Form("EE Systematic Uncertainty: %.3f", systematicUncertainty);
//
//    latex->SetTextColor(kGray+2); 
//    latex->DrawLatex(0.15, 0.80, textExp);
//    latex->DrawLatex(0.15, 0.75, textExp0);
//    latex->DrawLatex(0.15, 0.70, textExp1);
//    //latex->SetTextColor(kBlue-9); 
//    //latex->DrawLatex(0.15, 0.65, textLin);
//    //latex->DrawLatex(0.15, 0.60, textLin0);
//    //latex->DrawLatex(0.15, 0.55, textLin1);
//    latex->SetTextColor(kGray+2); 
//    latex->DrawLatex(0.15, 0.65, textDisc0);
//    latex->DrawLatex(0.15, 0.60, textDisc1);


////////////////////////

   //Graph1 fx1002 : SF DATA SF EB black  
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
   0.9765923,
   1.003268,
   1.01284,
   0.9625963,
   0.978139,
   1.008027,
   0.9779333,
   0.9768935,
   1.016658,
   0.9731618,
   1.016523};
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
   0.0068642,
   0.008296056,
   0.09110989,
   0.02795557,
   0.005605392,
   0.01528461,
   0.006089196,
   0.03095059,
   0.09618203,
   0.05588943,
   0.02075378};

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

//////////////////////// Fitting EB SF
   // TF1 *fitFuncExp_EB = new TF1("fitFuncExp_EB", "[0]*exp(-[1]*x)+[2]", 35, 1000);
   // fitFuncExp_EB->SetParameters(1, 0.01, 1);
   // gre->Fit(fitFuncExp_EB, "R");
   // fitFuncExp_EB->SetLineColor(kRed-9);
   // fitFuncExp_EB->SetLineStyle(1);
   // fitFuncExp_EB->Draw("same");

   // Double_t parExp_EB[3], errExp_EB[3];
   // for (int i = 0; i < 3; i++) {
   //     parExp_EB[i] = fitFuncExp_EB->GetParameter(i);
   //     errExp_EB[i] = fitFuncExp_EB->GetParError(i);
   // }
   TF1 *fitFuncConst_EB = new TF1("fitFuncConst_EB", "[0]", 35, 80);
   gre->Fit(fitFuncConst_EB, "R");
   fitFuncConst_EB->SetLineColor(kBlack);
   fitFuncConst_EB->SetLineStyle(1);
   fitFuncConst_EB->Draw("same");
   
   Double_t parConst_EB = fitFuncConst_EB->GetParameter(0);
   Double_t errConst_EB = fitFuncConst_EB->GetParError(0);
   
   Double_t ci95_EB = 1.96 * errConst_EB;
   
   TF1 *fitFuncLin_EB = new TF1("fitFuncLin_EB", "[0] + [1]*x", 35, 80);
   gre->Fit(fitFuncLin_EB, "R");
   fitFuncLin_EB->SetLineColor(kRed-9);
   fitFuncLin_EB->SetLineStyle(1);
   fitFuncLin_EB->Draw("same");
   
   Double_t parLin_EB[2], errLin_EB[2];
   parLin_EB[0] = fitFuncLin_EB->GetParameter(0);  // constant term
   parLin_EB[1] = fitFuncLin_EB->GetParameter(1);  // slope term
   errLin_EB[0] = fitFuncLin_EB->GetParError(0);
   errLin_EB[1] = fitFuncLin_EB->GetParError(1);
   
   // Calculate Discrepancy and Systematic Uncertainty
   Double_t discrepancy_EB = sqrt(pow(parConst_EB - parLin_EB[0], 2) + pow(ci95_EB, 2));
   Double_t systematicUncertainty_EB = sqrt(pow(errConst_EB, 2) + pow(discrepancy_EB,2));

   //Double_t discrepancy_Exp = sqrt(pow(parConst_EB - parExp_EB[2], 2) + pow(ci95_EB, 2));
   //Double_t systematicUncertainty_Exp = sqrt(pow(errConst_EB, 2) + discrepancy_Exp);
   
   latex->SetNDC();
   latex->SetTextSize(0.03);
   latex->SetTextAlign(13);
   
   TString textConst_EB    = Form("EB Const Fit (pT 35-80): SF = %.3f #pm (95%% CI: %.3f)", parConst_EB,  ci95_EB);
   TString textLin_EB      = Form("EB Lin Fit: const = %.3f #pm %.3f, slope = %.2e #pm %.5f", parLin_EB[0], errLin_EB[0], parLin_EB[1], errLin_EB[1]);
   TString textDisc_EB     = Form("EB Discrepancy: %.3f", discrepancy_EB);
   TString textSysUnc_EB   = Form("EB SF with Systematic Uncertainty: %.3f #pm %.3f",parConst_EB, systematicUncertainty_EB);
   //TString textDisc_Exp     = Form("Exp Discrepancy: %.3f", discrepancy_Exp);
   //TString textSysUnc_Exp   = Form("Exp Systematic Uncertainty: %.3f", systematicUncertainty_Exp);
   //TString textExp0_EB     = Form("EB Exp Fit: %.3f+%.3f*exp(-%.3f*x)", parExp_EB[2],parExp_EB[1],parExp_EB[0]);
   //TString textExp1_EB     = Form("EB Exp: const = %.3f #pm %.3f, slope = %.3f #pm %.3f", parExp_EB[2], errExp_EB[2], parExp_EB[1], errExp_EB[1]);
   //latex->DrawLatex(0.15, 0.45, textExp0_EB);
   //latex->DrawLatex(0.15, 0.40, textExp1_EB);
   //latex->DrawLatex(0.15, 0.35, textDisc_Exp);
   //latex->DrawLatex(0.15, 0.30, textSysUnc_Exp);
   
   latex->SetTextColor(kBlack);
   latex->DrawLatex(0.15, 0.50, textConst_EB);
   latex->SetTextColor(kRed-9);
   latex->DrawLatex(0.15, 0.45, textLin_EB);
   latex->SetTextColor(kBlack);
   latex->DrawLatex(0.15, 0.40, textDisc_EB);
   latex->DrawLatex(0.15, 0.35, textSysUnc_EB);
///////////////
   TF1 *fitFuncConst_EB1 = new TF1("fitFuncConst_EB1", "[0]", 80, 1000);
   gre->Fit(fitFuncConst_EB1, "R");
   fitFuncConst_EB1->SetLineColor(kBlack);
   fitFuncConst_EB1->SetLineStyle(1);
   fitFuncConst_EB1->Draw("same");

   Double_t parConst_EB1 = fitFuncConst_EB1->GetParameter(0);
   Double_t errConst_EB1 = fitFuncConst_EB1->GetParError(0);

   Double_t ci95_EB1 = 1.96 * errConst_EB1;

   TF1 *fitFuncLin_EB1 = new TF1("fitFuncLin_EB1", "[0] + [1]*x", 80, 1000);
   gre->Fit(fitFuncLin_EB1, "R");
   fitFuncLin_EB1->SetLineColor(kRed-9);
   fitFuncLin_EB1->SetLineStyle(1);
   fitFuncLin_EB1->Draw("same");

   Double_t parLin_EB1[2], errLin_EB1[2];
   parLin_EB1[0] = fitFuncLin_EB1->GetParameter(0);  // constant term
   parLin_EB1[1] = fitFuncLin_EB1->GetParameter(1);  // slope term
   errLin_EB1[0] = fitFuncLin_EB1->GetParError(0);
   errLin_EB1[1] = fitFuncLin_EB1->GetParError(1);

   Double_t discrepancy_EB1 = sqrt(pow(parConst_EB1 - parLin_EB1[0], 2) + pow(ci95_EB1, 2));
   Double_t systematicUncertainty_EB1 = sqrt(pow(errConst_EB1, 2) + pow(discrepancy_EB1,2));

   latex->SetNDC();
   latex->SetTextSize(0.03);
   latex->SetTextAlign(13);

   TString textConst_EB1    = Form("EB Const Fit (pT 80-1000): SF = %.3f #pm (95%% CI: %.3f)", parConst_EB1,  ci95_EB1);
   TString textLin_EB1      = Form("EB Lin Fit: const = %.3f #pm %.3f, slope = %.2e #pm %.5f", parLin_EB1[0], errLin_EB1[0], parLin_EB1[1], errLin_EB1[1]);
   TString textDisc_EB1     = Form("EB Discrepancy: %.3f", discrepancy_EB1);
   TString textSysUnc_EB1   = Form("EB SF with Systematic Uncertainty: %.3f #pm %.3f",parConst_EB1, systematicUncertainty_EB1);

   latex->SetTextColor(kBlack);
   latex->DrawLatex(0.55, 0.50, textConst_EB1);
   latex->SetTextColor(kRed-9);
   latex->DrawLatex(0.55, 0.45, textLin_EB1);
   latex->SetTextColor(kBlack);
   latex->DrawLatex(0.55, 0.40, textDisc_EB1);
   latex->DrawLatex(0.55, 0.35, textSysUnc_EB1);

//////////////////////////////////////////

   TLine *line = new TLine(10,1,1000,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   totopT_do->Modified();
   totopT->cd();

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ upper pad  Efficiency
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
   

   TH1F *Graph_Graph21005 = new TH1F("Graph_Graph21005","Graph",100,10,1000);
   Graph_Graph21005->SetMinimum(0);
   Graph_Graph21005->SetMaximum(1.2);
   Graph_Graph21005->SetDirectory(0);
   Graph_Graph21005->SetStats(0);
   Graph_Graph21005->SetLineWidth(2);
   Graph_Graph21005->SetMarkerStyle(20);
   Graph_Graph21005->SetMarkerSize(0.9);
   Graph_Graph21005->GetXaxis()->SetTitle("Offline electron #it{p}_{T} (GeV)");
   Graph_Graph21005->GetXaxis()->SetMoreLogLabels();
   Graph_Graph21005->GetXaxis()->SetNoExponent();
   Graph_Graph21005->GetXaxis()->SetLabelFont(42);
   Graph_Graph21005->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph21005->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph21005->GetXaxis()->SetTitleSize(0.045);
   Graph_Graph21005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph21005->GetXaxis()->SetTitleFont(42);
   Graph_Graph21005->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph21005->GetYaxis()->SetLabelFont(42);
   Graph_Graph21005->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph21005->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21005->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph21005->GetYaxis()->SetTickLength(0.02);
   Graph_Graph21005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph21005->GetYaxis()->SetTitleFont(42);
   Graph_Graph21005->GetZaxis()->SetLabelFont(42);
   Graph_Graph21005->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph21005->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph21005->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph21005->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph21005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21005);

   //Graph0_fx1003 Data efficiency EE
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
   0.8975,
   0.9031836,
   0.8984051,
   0.9008711,
   0.8755,
   0.9488974,
   0.9090729,
   0.911,
   0.9221814,
   0.9080964,
   0.9484202};
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
   0.007297267,
   0.01978061,
   0.04709415,
   0.01669014,
   0.006062186,
   0.01903879,
   0.02212053,
   0.01250406,
   0.08034426,
   0.01748804,
   0.01746274};
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


   //Graph1_fx1004 Data eff EB
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
   0.897,
   0.921,
   0.9186111,
   0.875,
   0.8725,
   0.9205566,
   0.9085,
   0.9052054,
   0.9249604,
   0.8777156,
   0.928311};
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
   0.006304768,
   0.00761578,
   0.08263356,
   0.02541161,
   0.00500001,
   0.01395831,
   0.005656863,
   0.02867932,
   0.08750686,
   0.05040788,
   0.01895281};

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

   //MC efficiency -jeongeun added EE, EB using calculate_mcerr.py

   Double_t Graph2_fx1005[11] = { 42.5, 150, 250, 65, 37.5, 95, 47.5, 55, 650, 75, 85};
   Double_t Graph2_fex1005[11] = { 2.5, 50, 50, 5, 2.5, 5, 2.5, 5, 350, 5, 5};
   Double_t Graph2_fy1005[11] ={
   0.906,
   0.9201671232876713,
   0.9383553189289775,
   0.9095856443719412,
   0.8835,
   0.929017092768444,
   0.9177858786685331,
   0.9194655581947744,
   0.9375343049199782,
   0.9063433962264151,
   0.9101609930411887
   };
   Double_t Graph2_fey1005[11] ={
   0.007366377214553461,
   0.020152570166858244,
   0.04918832829276176,
   0.016851586657504025,
   0.006117580121856136,
   0.018639912840235837,
   0.02233253894518002,
   0.01262026025262276,
   0.08168186876552341,
   0.017454282555723847,
   0.016758292091856104
   };

   gre = new TGraphErrors(11,Graph2_fx1005,Graph2_fy1005,Graph2_fex1005,Graph2_fey1005);
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


   Double_t Graph3_fx1006[11] = { 42.5, 150, 250, 65, 37.5, 95, 47.5, 55, 650, 75, 85};
   Double_t Graph3_fex1006[11] = { 2.5, 50, 50, 5, 2.5, 5, 2.5, 5, 350, 5, 5};
   Double_t Graph3_fy1006[11] ={
   0.9185000000000001,
   0.918,
   0.9069658144631116,
   0.909,
   0.892,
   0.913226334519573,
   0.929,
   0.9266162976489387,
   0.9098046891897738,
   0.9019215987701767,
    0.9132221125370188
   };
   
   Double_t Graph3_fey1006[11]  ={
   0.0064558856655040145,
   0.007590972571276593,
   0.08158600483496324,
   0.026399036182235693,
   0.005111758074488404,
   0.013847161606074179,
   0.005784508320362724,
   0.029357677726243533,
   0.0860730391507696,
   0.05179804845861081,
   0.018644748937967626
   };

   gre = new TGraphErrors(11,Graph3_fx1006,Graph3_fy1006,Graph3_fex1006,Graph3_fey1006);
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
   //totopT->cd();
   totopT->SetSelected(totopT);

   totopT->SaveAs("EleID_SFvspT_passingHEEPV71_2022preEE_v1_wfit_divideTwo.pdf");

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
