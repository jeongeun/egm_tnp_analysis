void EleID_SFvspT_passingHEEPV71_22preEE()
{
//=========Macro generated from canvas: totopT/totopT
//=========  (Sat Aug 31 20:14:04 2024) by ROOT version 6.22/06
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
   // Graph0_1001, gre = lower pad SF (EE Gray) 
   Double_t Graph0_fx1001[11] = { 42.5, 150, 250, 65, 37.5, 95, 47.5, 55, 650, 75, 85};
   Double_t Graph0_fy1001[11] = { 0.990136, 0.9811934, 0.9574642, 0.9907405, 0.9912889, 1.021742, 0.9911529, 0.9908023, 0.9837915, 1.001784, 1.041944};
   Double_t Graph0_fex1001[11] = { 2.5, 50, 50, 5, 2.5, 5, 2.5, 5, 350, 5, 5};
   Double_t Graph0_fey1001[11] = { 0.008439095, 0.02102536, 0.05027641, 0.01841488, 0.006815846, 0.02033625, 0.02392237, 0.01326383, 0.08563132, 0.01953569, 0.01948861};
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
 
   // gre, Graph1_fx1002 SF EB(Black)  
   Double_t Graph1_fx1002[11] = { 42.5, 150, 250, 65, 37.5, 95, 47.5, 55, 650, 75, 85};
   Double_t Graph1_fy1002[11] = { 0.9770581, 1.003336, 1.012922, 0.9632854, 0.9782076, 1.008109, 0.9785089, 0.9768588, 1.017285, 0.9733013, 1.016067};
   Double_t Graph1_fex1002[11] = { 2.5, 50, 50, 5, 2.5, 5, 2.5, 5, 350, 5, 5};
   Double_t Graph1_fey1002[11] = { 0.007176049, 0.008422221, 0.09133076, 0.02725453, 0.005540682, 0.015732, 0.005970407, 0.03078301, 0.0968941, 0.05564281, 0.02091185};
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

   // gre, Graph0_fx1003 Data eff EE Gray)  
   Double_t Graph0_fx1003[11] = { 42.5, 150, 250, 65, 37.5, 95, 47.5, 55, 650, 75, 85};
   Double_t Graph0_fy1003[11] = { 0.8972146, 0.9028583, 0.8982836, 0.9008809, 0.87566, 0.9493057, 0.9093868, 0.9108923, 0.922027, 0.9080446, 0.9479908};
   Double_t Graph0_fex1003[11] = { 2.5, 50, 50, 5, 2.5, 5, 2.5, 5, 350, 5, 5};
   Double_t Graph0_fey1003[11] = { 0.00764711, 0.01934677, 0.04716883, 0.01674466, 0.006020812, 0.01889451, 0.02194887, 0.01219408, 0.08025521, 0.01770768, 0.0177313};
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
   // gre, Graph1_fx1004 MC eff EE (kTeal dark)   
   Double_t Graph1_fx1004[11] = { 42.5, 150, 250, 65, 37.5, 95, 47.5, 55, 650, 75, 85};
   Double_t Graph1_fy1004[11] = { 0.8972146, 0.9028583, 0.8982836, 0.9008809, 0.87566, 0.9493057, 0.9093868, 0.9108923, 0.922027, 0.9080446, 0.9479908};
   Double_t Graph1_fex1004[11] = { 2.5, 50, 50, 5, 2.5, 5, 2.5, 5, 350, 5, 5};
   Double_t Graph1_fey1004[11] = { 0.00764711, 0.01934677, 0.04716883, 0.01674466, 0.006020812, 0.01889451, 0.02194887, 0.01219408, 0.08025521, 0.01770768, 0.0177313};
   gre = new TGraphErrors(11,Graph1_fx1004,Graph1_fy1004,Graph1_fex1004,Graph1_fey1004);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc66");
   gre->SetLineColor(ci);
   gre->SetLineStyle(2);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#00cc66");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(42);
   gre->Draw("ez");
   
   //gre, Graph2_fx1005 = Data eff EB
   Double_t Graph2_fx1005[11] = { 42.5, 150, 250, 65, 37.5, 95, 47.5, 55, 650, 75, 85};
   Double_t Graph2_fy1005[11] = { 0.897335, 0.9210232, 0.9187152, 0.8754167, 0.872615, 0.9204193, 0.908795, 0.9049258, 0.9251668, 0.8778777, 0.9281007};
   Double_t Graph2_fex1005[11] = { 2.5, 50, 50, 5, 2.5, 5, 2.5, 5, 350, 5, 5};
   Double_t Graph2_fey1005[11] = {
 0.00659052, 0.007731273, 0.0828365, 0.02476844, 0.004942593, 0.01436355, 0.005545045, 0.02851624, 0.08812003, 0.05018753, 0.01910141};
   gre = new TGraphErrors(11,Graph2_fx1005,Graph2_fy1005,Graph2_fex1005,Graph2_fey1005);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   
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
   
   gre->Draw("p");
   
   //gre, Graph3_fx1006 = MC eff EB
   Double_t Graph3_fx1006[11] = { 42.5, 150, 250, 65, 37.5, 95, 47.5, 55, 650, 75, 85};
   Double_t Graph3_fy1006[11] = { 0.897335, 0.9210232, 0.9187152, 0.8754167, 0.872615, 0.9204193, 0.908795, 0.9049258, 0.9251668, 0.8778777, 0.9281007};
   Double_t Graph3_fex1006[11] = { 2.5, 50, 50, 5, 2.5, 5, 2.5, 5, 350, 5, 5};
   Double_t Graph3_fey1006[11] = { 0.00659052, 0.007731273, 0.0828365, 0.02476844, 0.004942593, 0.01436355, 0.005545045, 0.02851624, 0.08812003, 0.05018753, 0.01910141};
   gre = new TGraphErrors(11,Graph3_fx1006,Graph3_fy1006,Graph3_fex1006,Graph3_fey1006);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33ff99");
   gre->SetLineColor(ci);
   gre->SetLineStyle(2);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#33ff99");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(42);
   gre->Draw("ez");
   totopT_up->Modified();
   totopT->cd();
   
   TLegend *leg = new TLegend(0.25,0.45,0.93,0.64,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.022);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph2","0.000 #leq | #eta | #leq  1.444 (Data)","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph3","0.000 #leq | #eta | #leq  1.444 (MC)","PL");

   ci = TColor::GetColor("#33ff99");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#33ff99");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(42);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","1.566 #leq | #eta | #leq  2.500 (Data)","PL");

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","1.566 #leq | #eta | #leq  2.500 (MC)","PL");

   ci = TColor::GetColor("#00cc66");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00cc66");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(42);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.95,0.956,"8.0 fb^{-1} (13.6 TeV) 2022");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.033);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15735,0.915425,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.04125);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15735,0.865925,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.03135);
   tex->SetLineWidth(2);
   tex->Draw();
   totopT->Modified();
   totopT->cd();
   totopT->SetSelected(totopT);
}
