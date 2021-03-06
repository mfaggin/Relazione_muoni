void single()
{
//=========Macro generated from canvas: METODO2/Simulazione MC (1000 simulazioni) - Likelihood
//=========  (Fri Dec 30 16:48:29 2016) by ROOT version6.09/01
   TCanvas *METODO2 = new TCanvas("METODO2", "Simulazione MC (1000 simulazioni) - Likelihood",97,58,1202,813);
   gStyle->SetOptStat(0);
   METODO2->SetHighLightColor(2);
   METODO2->Range(0,0,1,1);
   METODO2->SetFillColor(0);
   METODO2->SetBorderMode(0);
   METODO2->SetBorderSize(2);
   METODO2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: METODO2_1
   TPad *METODO2_1 = new TPad("METODO2_1", "METODO2_1",0.01,0.51,0.24,0.99);
   METODO2_1->Draw();
   METODO2_1->cd();
   METODO2_1->Range(2.073257,-7.875001,2.385795,70.875);
   METODO2_1->SetFillColor(0);
   METODO2_1->SetBorderMode(0);
   METODO2_1->SetBorderSize(2);
   METODO2_1->SetFrameBorderMode(0);
   METODO2_1->SetFrameBorderMode(0);
   
   TH1D *hFitTauL2__9__1 = new TH1D("hFitTauL2__9__1","#tau_{+}",40,2.104511,2.354541);
   hFitTauL2__9__1->SetBinContent(1,3);
   hFitTauL2__9__1->SetBinContent(2,5);
   hFitTauL2__9__1->SetBinContent(3,8);
   hFitTauL2__9__1->SetBinContent(4,12);
   hFitTauL2__9__1->SetBinContent(5,11);
   hFitTauL2__9__1->SetBinContent(6,33);
   hFitTauL2__9__1->SetBinContent(7,38);
   hFitTauL2__9__1->SetBinContent(8,31);
   hFitTauL2__9__1->SetBinContent(9,41);
   hFitTauL2__9__1->SetBinContent(10,46);
   hFitTauL2__9__1->SetBinContent(11,55);
   hFitTauL2__9__1->SetBinContent(12,49);
   hFitTauL2__9__1->SetBinContent(13,48);
   hFitTauL2__9__1->SetBinContent(14,60);
   hFitTauL2__9__1->SetBinContent(15,58);
   hFitTauL2__9__1->SetBinContent(16,59);
   hFitTauL2__9__1->SetBinContent(17,45);
   hFitTauL2__9__1->SetBinContent(18,48);
   hFitTauL2__9__1->SetBinContent(19,38);
   hFitTauL2__9__1->SetBinContent(20,34);
   hFitTauL2__9__1->SetBinContent(21,37);
   hFitTauL2__9__1->SetBinContent(22,40);
   hFitTauL2__9__1->SetBinContent(23,34);
   hFitTauL2__9__1->SetBinContent(24,26);
   hFitTauL2__9__1->SetBinContent(25,26);
   hFitTauL2__9__1->SetBinContent(26,17);
   hFitTauL2__9__1->SetBinContent(27,25);
   hFitTauL2__9__1->SetBinContent(28,13);
   hFitTauL2__9__1->SetBinContent(29,12);
   hFitTauL2__9__1->SetBinContent(30,6);
   hFitTauL2__9__1->SetBinContent(31,5);
   hFitTauL2__9__1->SetBinContent(32,2);
   hFitTauL2__9__1->SetBinContent(33,2);
   hFitTauL2__9__1->SetBinContent(34,1);
   hFitTauL2__9__1->SetBinContent(37,1);
   hFitTauL2__9__1->SetEntries(969);
   hFitTauL2__9__1->SetStats(0);
   
   TF1 *gaus1 = new TF1("gaus","gaus",2.107636,2.351416);
   gaus1->SetFillColor(19);
   gaus1->SetFillStyle(0);
   gaus1->SetLineColor(2);
   gaus1->SetLineWidth(2);
   gaus1->SetChisquare(40.40096);
   gaus1->SetNDF(32);
   gaus1->GetXaxis()->SetLabelFont(42);
   gaus1->GetXaxis()->SetLabelSize(0.035);
   gaus1->GetXaxis()->SetTitleSize(0.035);
   gaus1->GetXaxis()->SetTitleFont(42);
   gaus1->GetYaxis()->SetLabelFont(42);
   gaus1->GetYaxis()->SetLabelSize(0.035);
   gaus1->GetYaxis()->SetTitleSize(0.035);
   gaus1->GetYaxis()->SetTitleFont(42);
   gaus1->SetParameter(0,55.14361);
   gaus1->SetParError(0,2.225785);
   gaus1->SetParLimits(0,0,0);
   gaus1->SetParameter(1,2.19903);
   gaus1->SetParError(1,0.001480435);
   gaus1->SetParLimits(1,0,0);
   gaus1->SetParameter(2,0.04266168);
   gaus1->SetParError(2,0.001105597);
   gaus1->SetParLimits(2,0,0.4145804);
   hFitTauL2__9__1->GetListOfFunctions()->Add(gaus1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hFitTauL2__9__1->SetLineColor(ci);
   hFitTauL2__9__1->GetXaxis()->SetTitle("mus");
   hFitTauL2__9__1->GetXaxis()->CenterTitle(true);
   hFitTauL2__9__1->GetXaxis()->SetNdivisions(505);
   hFitTauL2__9__1->GetXaxis()->SetLabelFont(42);
   hFitTauL2__9__1->GetXaxis()->SetLabelOffset(-0.005);
   hFitTauL2__9__1->GetXaxis()->SetLabelSize(0.07);
   hFitTauL2__9__1->GetXaxis()->SetTitleSize(0.07);
   hFitTauL2__9__1->GetXaxis()->SetTitleOffset(0.7);
   hFitTauL2__9__1->GetXaxis()->SetTitleFont(42);
   hFitTauL2__9__1->GetYaxis()->SetNdivisions(506);
   hFitTauL2__9__1->GetYaxis()->SetLabelFont(42);
   hFitTauL2__9__1->GetYaxis()->SetLabelSize(0.07);
   hFitTauL2__9__1->GetYaxis()->SetTitleSize(0.035);
   hFitTauL2__9__1->GetYaxis()->SetTitleFont(42);
   hFitTauL2__9__1->GetZaxis()->SetLabelFont(42);
   hFitTauL2__9__1->GetZaxis()->SetLabelSize(0.035);
   hFitTauL2__9__1->GetZaxis()->SetTitleSize(0.035);
   hFitTauL2__9__1->GetZaxis()->SetTitleFont(42);
   hFitTauL2__9__1->Draw("");
   TLine *line = new TLine(2.197175,0,2.197175,60);

   ci = TColor::GetColor("#006600");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   
   TPaveText *pt = new TPaveText(0.4700392,0.94,0.5299608,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.1009779);
   TText *AText = pt->AddText("#tau_{+}");
   pt->Draw();
   METODO2_1->Modified();
   METODO2->cd();
  
// ------------>Primitives in pad: METODO2_2
   TPad *METODO2_2 = new TPad("METODO2_2", "METODO2_2",0.26,0.51,0.49,0.99);
   METODO2_2->Draw();
   METODO2_2->cd();
   METODO2_2->Range(0.7088825,-8.793751,1.086034,79.14375);
   METODO2_2->SetFillColor(0);
   METODO2_2->SetBorderMode(0);
   METODO2_2->SetBorderSize(2);
   METODO2_2->SetFrameBorderMode(0);
   METODO2_2->SetFrameBorderMode(0);
   
   TH1D *hFitTauShortL2__10__2 = new TH1D("hFitTauShortL2__10__2","#tau_{-}",40,0.7465977,1.048319);
   hFitTauShortL2__10__2->SetBinContent(1,2);
   hFitTauShortL2__10__2->SetBinContent(2,6);
   hFitTauShortL2__10__2->SetBinContent(3,8);
   hFitTauShortL2__10__2->SetBinContent(4,11);
   hFitTauShortL2__10__2->SetBinContent(5,12);
   hFitTauShortL2__10__2->SetBinContent(6,15);
   hFitTauShortL2__10__2->SetBinContent(7,20);
   hFitTauShortL2__10__2->SetBinContent(8,28);
   hFitTauShortL2__10__2->SetBinContent(9,21);
   hFitTauShortL2__10__2->SetBinContent(10,32);
   hFitTauShortL2__10__2->SetBinContent(11,30);
   hFitTauShortL2__10__2->SetBinContent(12,35);
   hFitTauShortL2__10__2->SetBinContent(13,32);
   hFitTauShortL2__10__2->SetBinContent(14,46);
   hFitTauShortL2__10__2->SetBinContent(15,49);
   hFitTauShortL2__10__2->SetBinContent(16,41);
   hFitTauShortL2__10__2->SetBinContent(17,50);
   hFitTauShortL2__10__2->SetBinContent(18,67);
   hFitTauShortL2__10__2->SetBinContent(19,50);
   hFitTauShortL2__10__2->SetBinContent(20,40);
   hFitTauShortL2__10__2->SetBinContent(21,42);
   hFitTauShortL2__10__2->SetBinContent(22,51);
   hFitTauShortL2__10__2->SetBinContent(23,36);
   hFitTauShortL2__10__2->SetBinContent(24,48);
   hFitTauShortL2__10__2->SetBinContent(25,37);
   hFitTauShortL2__10__2->SetBinContent(26,26);
   hFitTauShortL2__10__2->SetBinContent(27,26);
   hFitTauShortL2__10__2->SetBinContent(28,26);
   hFitTauShortL2__10__2->SetBinContent(29,23);
   hFitTauShortL2__10__2->SetBinContent(30,13);
   hFitTauShortL2__10__2->SetBinContent(31,6);
   hFitTauShortL2__10__2->SetBinContent(32,9);
   hFitTauShortL2__10__2->SetBinContent(33,9);
   hFitTauShortL2__10__2->SetBinContent(34,12);
   hFitTauShortL2__10__2->SetBinContent(35,2);
   hFitTauShortL2__10__2->SetBinContent(36,3);
   hFitTauShortL2__10__2->SetBinContent(37,1);
   hFitTauShortL2__10__2->SetBinContent(38,3);
   hFitTauShortL2__10__2->SetBinContent(39,1);
   hFitTauShortL2__10__2->SetEntries(969);
   hFitTauShortL2__10__2->SetStats(0);
   
   TF1 *gaus2 = new TF1("gaus","gaus",0.7503692,1.044548);
   gaus2->SetFillColor(19);
   gaus2->SetFillStyle(0);
   gaus2->SetLineColor(2);
   gaus2->SetLineWidth(2);
   gaus2->SetChisquare(36.70305);
   gaus2->SetNDF(36);
   gaus2->GetXaxis()->SetLabelFont(42);
   gaus2->GetXaxis()->SetLabelSize(0.035);
   gaus2->GetXaxis()->SetTitleSize(0.035);
   gaus2->GetXaxis()->SetTitleFont(42);
   gaus2->GetYaxis()->SetLabelFont(42);
   gaus2->GetYaxis()->SetLabelSize(0.035);
   gaus2->GetYaxis()->SetTitleSize(0.035);
   gaus2->GetYaxis()->SetTitleFont(42);
   gaus2->SetParameter(0,50.39287);
   gaus2->SetParError(0,2.049464);
   gaus2->SetParLimits(0,0,0);
   gaus2->SetParameter(1,0.8784985);
   gaus2->SetParError(1,0.001946827);
   gaus2->SetParLimits(1,0,0);
   gaus2->SetParameter(2,0.05632111);
   gaus2->SetParError(2,0.001480131);
   gaus2->SetParLimits(2,0,0.554472);
   hFitTauShortL2__10__2->GetListOfFunctions()->Add(gaus2);

   ci = TColor::GetColor("#000099");
   hFitTauShortL2__10__2->SetLineColor(ci);
   hFitTauShortL2__10__2->GetXaxis()->SetTitle("mus");
   hFitTauShortL2__10__2->GetXaxis()->CenterTitle(true);
   hFitTauShortL2__10__2->GetXaxis()->SetNdivisions(506);
   hFitTauShortL2__10__2->GetXaxis()->SetLabelFont(42);
   hFitTauShortL2__10__2->GetXaxis()->SetLabelOffset(-0.005);
   hFitTauShortL2__10__2->GetXaxis()->SetLabelSize(0.07);
   hFitTauShortL2__10__2->GetXaxis()->SetTitleSize(0.07);
   hFitTauShortL2__10__2->GetXaxis()->SetTitleOffset(0.7);
   hFitTauShortL2__10__2->GetXaxis()->SetTitleFont(42);
   hFitTauShortL2__10__2->GetYaxis()->SetNdivisions(507);
   hFitTauShortL2__10__2->GetYaxis()->SetLabelFont(42);
   hFitTauShortL2__10__2->GetYaxis()->SetLabelSize(0.07);
   hFitTauShortL2__10__2->GetYaxis()->SetTitleSize(0.035);
   hFitTauShortL2__10__2->GetYaxis()->SetTitleFont(42);
   hFitTauShortL2__10__2->GetZaxis()->SetLabelFont(42);
   hFitTauShortL2__10__2->GetZaxis()->SetLabelSize(0.035);
   hFitTauShortL2__10__2->GetZaxis()->SetTitleSize(0.035);
   hFitTauShortL2__10__2->GetZaxis()->SetTitleFont(42);
   hFitTauShortL2__10__2->Draw("");
   line = new TLine(0.8809186,0,0.8809186,67);

   ci = TColor::GetColor("#006600");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   
   pt = new TPaveText(0.4754831,0.94,0.5245169,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.1009779);
   AText = pt->AddText("#tau_{-}");
   pt->Draw();
   METODO2_2->Modified();
   METODO2->cd();
  
// ------------>Primitives in pad: METODO2_3
   TPad *METODO2_3 = new TPad("METODO2_3", "METODO2_3",0.51,0.51,0.74,0.99);
   METODO2_3->Draw();
   METODO2_3->cd();
   METODO2_3->Range(0.8959783,-9.318751,1.111001,83.86875);
   METODO2_3->SetFillColor(0);
   METODO2_3->SetBorderMode(0);
   METODO2_3->SetBorderSize(2);
   METODO2_3->SetFrameBorderMode(0);
   METODO2_3->SetFrameBorderMode(0);
   
   TH1D *hFitBL2__11__3 = new TH1D("hFitBL2__11__3","b",40,0.9174806,1.089499);
   hFitBL2__11__3->SetBinContent(1,2);
   hFitBL2__11__3->SetBinContent(2,1);
   hFitBL2__11__3->SetBinContent(3,2);
   hFitBL2__11__3->SetBinContent(4,4);
   hFitBL2__11__3->SetBinContent(5,2);
   hFitBL2__11__3->SetBinContent(6,3);
   hFitBL2__11__3->SetBinContent(7,6);
   hFitBL2__11__3->SetBinContent(8,9);
   hFitBL2__11__3->SetBinContent(9,15);
   hFitBL2__11__3->SetBinContent(10,13);
   hFitBL2__11__3->SetBinContent(11,27);
   hFitBL2__11__3->SetBinContent(12,25);
   hFitBL2__11__3->SetBinContent(13,33);
   hFitBL2__11__3->SetBinContent(14,51);
   hFitBL2__11__3->SetBinContent(15,40);
   hFitBL2__11__3->SetBinContent(16,68);
   hFitBL2__11__3->SetBinContent(17,48);
   hFitBL2__11__3->SetBinContent(18,59);
   hFitBL2__11__3->SetBinContent(19,56);
   hFitBL2__11__3->SetBinContent(20,56);
   hFitBL2__11__3->SetBinContent(21,71);
   hFitBL2__11__3->SetBinContent(22,63);
   hFitBL2__11__3->SetBinContent(23,51);
   hFitBL2__11__3->SetBinContent(24,38);
   hFitBL2__11__3->SetBinContent(25,47);
   hFitBL2__11__3->SetBinContent(26,39);
   hFitBL2__11__3->SetBinContent(27,37);
   hFitBL2__11__3->SetBinContent(28,29);
   hFitBL2__11__3->SetBinContent(29,18);
   hFitBL2__11__3->SetBinContent(30,14);
   hFitBL2__11__3->SetBinContent(31,16);
   hFitBL2__11__3->SetBinContent(32,10);
   hFitBL2__11__3->SetBinContent(33,8);
   hFitBL2__11__3->SetBinContent(34,3);
   hFitBL2__11__3->SetBinContent(35,2);
   hFitBL2__11__3->SetBinContent(36,2);
   hFitBL2__11__3->SetBinContent(38,1);
   hFitBL2__11__3->SetEntries(969);
   hFitBL2__11__3->SetStats(0);
   
   TF1 *gaus3 = new TF1("gaus","gaus",0.9196308,1.087349);
   gaus3->SetFillColor(19);
   gaus3->SetFillStyle(0);
   gaus3->SetLineColor(2);
   gaus3->SetLineWidth(2);
   gaus3->SetChisquare(26.97344);
   gaus3->SetNDF(34);
   gaus3->GetXaxis()->SetLabelFont(42);
   gaus3->GetXaxis()->SetLabelSize(0.035);
   gaus3->GetXaxis()->SetTitleSize(0.035);
   gaus3->GetXaxis()->SetTitleFont(42);
   gaus3->GetYaxis()->SetLabelFont(42);
   gaus3->GetYaxis()->SetLabelSize(0.035);
   gaus3->GetYaxis()->SetTitleSize(0.035);
   gaus3->GetYaxis()->SetTitleFont(42);
   gaus3->SetParameter(0,61.73503);
   gaus3->SetParError(0,2.484555);
   gaus3->SetParLimits(0,0,0);
   gaus3->SetParameter(1,1.000895);
   gaus3->SetParError(1,0.0008693081);
   gaus3->SetParLimits(1,0,0);
   gaus3->SetParameter(2,0.02626284);
   gaus3->SetParError(2,0.0006388533);
   gaus3->SetParLimits(2,0,0.262935);
   hFitBL2__11__3->GetListOfFunctions()->Add(gaus3);

   ci = TColor::GetColor("#000099");
   hFitBL2__11__3->SetLineColor(ci);
   hFitBL2__11__3->GetXaxis()->SetTitle("conteggi");
   hFitBL2__11__3->GetXaxis()->CenterTitle(true);
   hFitBL2__11__3->GetXaxis()->SetNdivisions(506);
   hFitBL2__11__3->GetXaxis()->SetLabelFont(42);
   hFitBL2__11__3->GetXaxis()->SetLabelOffset(-0.005);
   hFitBL2__11__3->GetXaxis()->SetLabelSize(0.07);
   hFitBL2__11__3->GetXaxis()->SetTitleSize(0.07);
   hFitBL2__11__3->GetXaxis()->SetTitleOffset(0.7);
   hFitBL2__11__3->GetXaxis()->SetTitleFont(42);
   hFitBL2__11__3->GetYaxis()->SetNdivisions(507);
   hFitBL2__11__3->GetYaxis()->SetLabelFont(42);
   hFitBL2__11__3->GetYaxis()->SetLabelSize(0.07);
   hFitBL2__11__3->GetYaxis()->SetTitleSize(0.035);
   hFitBL2__11__3->GetYaxis()->SetTitleFont(42);
   hFitBL2__11__3->GetZaxis()->SetLabelFont(42);
   hFitBL2__11__3->GetZaxis()->SetLabelSize(0.035);
   hFitBL2__11__3->GetZaxis()->SetTitleSize(0.035);
   hFitBL2__11__3->GetZaxis()->SetTitleFont(42);
   hFitBL2__11__3->Draw("");
   line = new TLine(1,0,1,71);

   ci = TColor::GetColor("#006600");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   
   pt = new TPaveText(0.4718538,0.94,0.5208393,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.1009779);
   AText = pt->AddText("b");
   pt->Draw();
   METODO2_3->Modified();
   METODO2->cd();
  
// ------------>Primitives in pad: METODO2_4
   TPad *METODO2_4 = new TPad("METODO2_4", "METODO2_4",0.76,0.51,0.99,0.99);
   METODO2_4->Draw();
   METODO2_4->cd();
   METODO2_4->Range(0.8398416,-8.006251,1.78409,72.05625);
   METODO2_4->SetFillColor(0);
   METODO2_4->SetBorderMode(0);
   METODO2_4->SetBorderSize(2);
   METODO2_4->SetFrameBorderMode(0);
   METODO2_4->SetFrameBorderMode(0);
   
   TH1D *hFitRL2__12__4 = new TH1D("hFitRL2__12__4","R",40,0.9342664,1.689665);
   hFitRL2__12__4->SetBinContent(1,4);
   hFitRL2__12__4->SetBinContent(2,6);
   hFitRL2__12__4->SetBinContent(3,9);
   hFitRL2__12__4->SetBinContent(4,12);
   hFitRL2__12__4->SetBinContent(5,13);
   hFitRL2__12__4->SetBinContent(6,16);
   hFitRL2__12__4->SetBinContent(7,21);
   hFitRL2__12__4->SetBinContent(8,35);
   hFitRL2__12__4->SetBinContent(9,44);
   hFitRL2__12__4->SetBinContent(10,31);
   hFitRL2__12__4->SetBinContent(11,28);
   hFitRL2__12__4->SetBinContent(12,44);
   hFitRL2__12__4->SetBinContent(13,36);
   hFitRL2__12__4->SetBinContent(14,39);
   hFitRL2__12__4->SetBinContent(15,44);
   hFitRL2__12__4->SetBinContent(16,45);
   hFitRL2__12__4->SetBinContent(17,44);
   hFitRL2__12__4->SetBinContent(18,46);
   hFitRL2__12__4->SetBinContent(19,61);
   hFitRL2__12__4->SetBinContent(20,37);
   hFitRL2__12__4->SetBinContent(21,46);
   hFitRL2__12__4->SetBinContent(22,41);
   hFitRL2__12__4->SetBinContent(23,46);
   hFitRL2__12__4->SetBinContent(24,35);
   hFitRL2__12__4->SetBinContent(25,31);
   hFitRL2__12__4->SetBinContent(26,22);
   hFitRL2__12__4->SetBinContent(27,33);
   hFitRL2__12__4->SetBinContent(28,25);
   hFitRL2__12__4->SetBinContent(29,15);
   hFitRL2__12__4->SetBinContent(30,19);
   hFitRL2__12__4->SetBinContent(31,11);
   hFitRL2__12__4->SetBinContent(32,8);
   hFitRL2__12__4->SetBinContent(33,6);
   hFitRL2__12__4->SetBinContent(34,5);
   hFitRL2__12__4->SetBinContent(35,3);
   hFitRL2__12__4->SetBinContent(36,4);
   hFitRL2__12__4->SetBinContent(37,1);
   hFitRL2__12__4->SetBinContent(38,2);
   hFitRL2__12__4->SetBinContent(40,1);
   hFitRL2__12__4->SetEntries(969);
   hFitRL2__12__4->SetStats(0);
   
   TF1 *gaus4 = new TF1("gaus","gaus",0.9437089,1.680222);
   gaus4->SetFillColor(19);
   gaus4->SetFillStyle(0);
   gaus4->SetLineColor(2);
   gaus4->SetLineWidth(2);
   gaus4->SetChisquare(31.56924);
   gaus4->SetNDF(36);
   gaus4->GetXaxis()->SetLabelFont(42);
   gaus4->GetXaxis()->SetLabelSize(0.035);
   gaus4->GetXaxis()->SetTitleSize(0.035);
   gaus4->GetXaxis()->SetTitleFont(42);
   gaus4->GetYaxis()->SetLabelFont(42);
   gaus4->GetYaxis()->SetLabelSize(0.035);
   gaus4->GetYaxis()->SetTitleSize(0.035);
   gaus4->GetYaxis()->SetTitleFont(42);
   gaus4->SetParameter(0,48.42124);
   gaus4->SetParError(0,1.953846);
   gaus4->SetParLimits(0,0,0);
   gaus4->SetParameter(1,1.254783);
   gaus4->SetParError(1,0.005227531);
   gaus4->SetParLimits(1,0,0);
   gaus4->SetParameter(2,0.148583);
   gaus4->SetParError(2,0.003981527);
   gaus4->SetParLimits(2,0,1.414801);
   hFitRL2__12__4->GetListOfFunctions()->Add(gaus4);

   ci = TColor::GetColor("#000099");
   hFitRL2__12__4->SetLineColor(ci);
   hFitRL2__12__4->GetXaxis()->SetNdivisions(507);
   hFitRL2__12__4->GetXaxis()->SetLabelFont(42);
   hFitRL2__12__4->GetXaxis()->SetLabelOffset(-0.005);
   hFitRL2__12__4->GetXaxis()->SetLabelSize(0.07);
   hFitRL2__12__4->GetXaxis()->SetTitleSize(0.035);
   hFitRL2__12__4->GetXaxis()->SetTitleFont(42);
   hFitRL2__12__4->GetYaxis()->SetNdivisions(506);
   hFitRL2__12__4->GetYaxis()->SetLabelFont(42);
   hFitRL2__12__4->GetYaxis()->SetLabelSize(0.07);
   hFitRL2__12__4->GetYaxis()->SetTitleSize(0.035);
   hFitRL2__12__4->GetYaxis()->SetTitleFont(42);
   hFitRL2__12__4->GetZaxis()->SetLabelFont(42);
   hFitRL2__12__4->GetZaxis()->SetLabelSize(0.035);
   hFitRL2__12__4->GetZaxis()->SetTitleSize(0.035);
   hFitRL2__12__4->GetZaxis()->SetTitleFont(42);
   hFitRL2__12__4->Draw("");
   line = new TLine(1.261,0,1.261,61);

   ci = TColor::GetColor("#006600");
   line->SetLineColor(ci);
   line->SetLineWidth(3);
   line->Draw();
   
   pt = new TPaveText(0.4718538,0.94,0.5281462,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.1009779);
   AText = pt->AddText("R");
   pt->Draw();
   METODO2_4->Modified();
   METODO2->cd();
  
// ------------>Primitives in pad: METODO2_5
   TPad *METODO2_5 = new TPad("METODO2_5", "METODO2_5",0.01,0.01,0.24,0.49);
   METODO2_5->Draw();
   METODO2_5->cd();
   METODO2_5->Range(0.0276943,-8.531251,0.07885156,76.78125);
   METODO2_5->SetFillColor(0);
   METODO2_5->SetBorderMode(0);
   METODO2_5->SetBorderSize(2);
   METODO2_5->SetFrameBorderMode(0);
   METODO2_5->SetFrameBorderMode(0);
   
   TH1D *hFitErrTauL2__13__5 = new TH1D("hFitErrTauL2__13__5","#tau_{+} - errori",40,0.03281003,0.07373583);
   hFitErrTauL2__13__5->SetBinContent(1,4);
   hFitErrTauL2__13__5->SetBinContent(2,14);
   hFitErrTauL2__13__5->SetBinContent(3,17);
   hFitErrTauL2__13__5->SetBinContent(4,26);
   hFitErrTauL2__13__5->SetBinContent(5,37);
   hFitErrTauL2__13__5->SetBinContent(6,46);
   hFitErrTauL2__13__5->SetBinContent(7,45);
   hFitErrTauL2__13__5->SetBinContent(8,49);
   hFitErrTauL2__13__5->SetBinContent(9,60);
   hFitErrTauL2__13__5->SetBinContent(10,60);
   hFitErrTauL2__13__5->SetBinContent(11,65);
   hFitErrTauL2__13__5->SetBinContent(12,56);
   hFitErrTauL2__13__5->SetBinContent(13,63);
   hFitErrTauL2__13__5->SetBinContent(14,54);
   hFitErrTauL2__13__5->SetBinContent(15,51);
   hFitErrTauL2__13__5->SetBinContent(16,50);
   hFitErrTauL2__13__5->SetBinContent(17,49);
   hFitErrTauL2__13__5->SetBinContent(18,37);
   hFitErrTauL2__13__5->SetBinContent(19,32);
   hFitErrTauL2__13__5->SetBinContent(20,34);
   hFitErrTauL2__13__5->SetBinContent(21,27);
   hFitErrTauL2__13__5->SetBinContent(22,22);
   hFitErrTauL2__13__5->SetBinContent(23,19);
   hFitErrTauL2__13__5->SetBinContent(24,8);
   hFitErrTauL2__13__5->SetBinContent(25,10);
   hFitErrTauL2__13__5->SetBinContent(26,7);
   hFitErrTauL2__13__5->SetBinContent(27,6);
   hFitErrTauL2__13__5->SetBinContent(28,4);
   hFitErrTauL2__13__5->SetBinContent(29,3);
   hFitErrTauL2__13__5->SetBinContent(30,3);
   hFitErrTauL2__13__5->SetBinContent(31,4);
   hFitErrTauL2__13__5->SetBinContent(32,1);
   hFitErrTauL2__13__5->SetBinContent(33,2);
   hFitErrTauL2__13__5->SetBinContent(34,2);
   hFitErrTauL2__13__5->SetBinContent(35,1);
   hFitErrTauL2__13__5->SetBinContent(40,1);
   hFitErrTauL2__13__5->SetEntries(969);
   hFitErrTauL2__13__5->SetStats(0);
   
   TF1 *gaus5 = new TF1("gaus","gaus",0.03332161,0.07322426);
   gaus5->SetFillColor(19);
   gaus5->SetFillStyle(0);
   gaus5->SetLineColor(2);
   gaus5->SetLineWidth(2);
   gaus5->SetChisquare(35.18343);
   gaus5->SetNDF(33);
   gaus5->GetXaxis()->SetLabelFont(42);
   gaus5->GetXaxis()->SetLabelSize(0.035);
   gaus5->GetXaxis()->SetTitleSize(0.035);
   gaus5->GetXaxis()->SetTitleFont(42);
   gaus5->GetYaxis()->SetLabelFont(42);
   gaus5->GetYaxis()->SetLabelSize(0.035);
   gaus5->GetYaxis()->SetTitleSize(0.035);
   gaus5->GetYaxis()->SetTitleFont(42);
   gaus5->SetParameter(0,61.35917);
   gaus5->SetParError(0,2.59323);
   gaus5->SetParLimits(0,0,0);
   gaus5->SetParameter(1,0.0453134);
   gaus5->SetParError(1,0.0002230925);
   gaus5->SetParLimits(1,0,0);
   gaus5->SetParameter(2,0.006370057);
   gaus5->SetParError(2,0.0001915713);
   gaus5->SetParLimits(2,0,0.0639349);
   hFitErrTauL2__13__5->GetListOfFunctions()->Add(gaus5);

   ci = TColor::GetColor("#000099");
   hFitErrTauL2__13__5->SetLineColor(ci);
   hFitErrTauL2__13__5->GetXaxis()->SetTitle("mus");
   hFitErrTauL2__13__5->GetXaxis()->CenterTitle(true);
   hFitErrTauL2__13__5->GetXaxis()->SetNdivisions(507);
   hFitErrTauL2__13__5->GetXaxis()->SetLabelFont(42);
   hFitErrTauL2__13__5->GetXaxis()->SetLabelOffset(-0.005);
   hFitErrTauL2__13__5->GetXaxis()->SetLabelSize(0.07);
   hFitErrTauL2__13__5->GetXaxis()->SetTitleSize(0.07);
   hFitErrTauL2__13__5->GetXaxis()->SetTitleOffset(0.7);
   hFitErrTauL2__13__5->GetXaxis()->SetTitleFont(42);
   hFitErrTauL2__13__5->GetYaxis()->SetNdivisions(506);
   hFitErrTauL2__13__5->GetYaxis()->SetLabelFont(42);
   hFitErrTauL2__13__5->GetYaxis()->SetLabelSize(0.07);
   hFitErrTauL2__13__5->GetYaxis()->SetTitleSize(0.035);
   hFitErrTauL2__13__5->GetYaxis()->SetTitleFont(42);
   hFitErrTauL2__13__5->GetZaxis()->SetLabelFont(42);
   hFitErrTauL2__13__5->GetZaxis()->SetLabelSize(0.035);
   hFitErrTauL2__13__5->GetZaxis()->SetTitleSize(0.035);
   hFitErrTauL2__13__5->GetZaxis()->SetTitleFont(42);
   hFitErrTauL2__13__5->Draw("");
   
   pt = new TPaveText(0.3811229,0.94,0.6188771,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.1009779);
   AText = pt->AddText("#tau_{+} - errori");
   pt->Draw();
   METODO2_5->Modified();
   METODO2->cd();
  
// ------------>Primitives in pad: METODO2_6
   TPad *METODO2_6 = new TPad("METODO2_6", "METODO2_6",0.26,0.01,0.49,0.49);
   METODO2_6->Draw();
   METODO2_6->cd();
   METODO2_6->Range(0.04390291,-10.5,0.08244582,94.5);
   METODO2_6->SetFillColor(0);
   METODO2_6->SetBorderMode(0);
   METODO2_6->SetBorderSize(2);
   METODO2_6->SetFrameBorderMode(0);
   METODO2_6->SetFrameBorderMode(0);
   
   TH1D *hFitErrTauShortL2__14__6 = new TH1D("hFitErrTauShortL2__14__6","#tau_{-} - errori",40,0.0477572,0.07859153);
   hFitErrTauShortL2__14__6->SetBinContent(1,1);
   hFitErrTauShortL2__14__6->SetBinContent(3,2);
   hFitErrTauShortL2__14__6->SetBinContent(4,2);
   hFitErrTauShortL2__14__6->SetBinContent(5,7);
   hFitErrTauShortL2__14__6->SetBinContent(6,12);
   hFitErrTauShortL2__14__6->SetBinContent(7,16);
   hFitErrTauShortL2__14__6->SetBinContent(8,12);
   hFitErrTauShortL2__14__6->SetBinContent(9,27);
   hFitErrTauShortL2__14__6->SetBinContent(10,35);
   hFitErrTauShortL2__14__6->SetBinContent(11,46);
   hFitErrTauShortL2__14__6->SetBinContent(12,52);
   hFitErrTauShortL2__14__6->SetBinContent(13,56);
   hFitErrTauShortL2__14__6->SetBinContent(14,61);
   hFitErrTauShortL2__14__6->SetBinContent(15,80);
   hFitErrTauShortL2__14__6->SetBinContent(16,59);
   hFitErrTauShortL2__14__6->SetBinContent(17,66);
   hFitErrTauShortL2__14__6->SetBinContent(18,57);
   hFitErrTauShortL2__14__6->SetBinContent(19,63);
   hFitErrTauShortL2__14__6->SetBinContent(20,61);
   hFitErrTauShortL2__14__6->SetBinContent(21,55);
   hFitErrTauShortL2__14__6->SetBinContent(22,48);
   hFitErrTauShortL2__14__6->SetBinContent(23,30);
   hFitErrTauShortL2__14__6->SetBinContent(24,28);
   hFitErrTauShortL2__14__6->SetBinContent(25,16);
   hFitErrTauShortL2__14__6->SetBinContent(26,16);
   hFitErrTauShortL2__14__6->SetBinContent(27,19);
   hFitErrTauShortL2__14__6->SetBinContent(28,8);
   hFitErrTauShortL2__14__6->SetBinContent(29,5);
   hFitErrTauShortL2__14__6->SetBinContent(30,6);
   hFitErrTauShortL2__14__6->SetBinContent(31,4);
   hFitErrTauShortL2__14__6->SetBinContent(32,4);
   hFitErrTauShortL2__14__6->SetBinContent(33,5);
   hFitErrTauShortL2__14__6->SetBinContent(34,4);
   hFitErrTauShortL2__14__6->SetBinContent(35,2);
   hFitErrTauShortL2__14__6->SetBinContent(36,1);
   hFitErrTauShortL2__14__6->SetBinContent(37,1);
   hFitErrTauShortL2__14__6->SetBinContent(39,2);
   hFitErrTauShortL2__14__6->SetEntries(969);
   hFitErrTauShortL2__14__6->SetStats(0);
   
   TF1 *gaus6 = new TF1("gaus","gaus",0.04814263,0.0782061);
   gaus6->SetFillColor(19);
   gaus6->SetFillStyle(0);
   gaus6->SetLineColor(2);
   gaus6->SetLineWidth(2);
   gaus6->SetChisquare(38.01385);
   gaus6->SetNDF(34);
   gaus6->GetXaxis()->SetLabelFont(42);
   gaus6->GetXaxis()->SetLabelSize(0.035);
   gaus6->GetXaxis()->SetTitleSize(0.035);
   gaus6->GetXaxis()->SetTitleFont(42);
   gaus6->GetYaxis()->SetLabelFont(42);
   gaus6->GetYaxis()->SetLabelSize(0.035);
   gaus6->GetYaxis()->SetTitleSize(0.035);
   gaus6->GetYaxis()->SetTitleFont(42);
   gaus6->SetParameter(0,68.18906);
   gaus6->SetParError(0,2.855854);
   gaus6->SetParLimits(0,0,0);
   gaus6->SetParameter(1,0.06034312);
   gaus6->SetParError(1,0.000142911);
   gaus6->SetParLimits(1,0,0);
   gaus6->SetParameter(2,0.004212504);
   gaus6->SetParError(2,0.0001124842);
   gaus6->SetParLimits(2,0,0.04501277);
   hFitErrTauShortL2__14__6->GetListOfFunctions()->Add(gaus6);

   ci = TColor::GetColor("#000099");
   hFitErrTauShortL2__14__6->SetLineColor(ci);
   hFitErrTauShortL2__14__6->GetXaxis()->SetTitle("mus");
   hFitErrTauShortL2__14__6->GetXaxis()->CenterTitle(true);
   hFitErrTauShortL2__14__6->GetXaxis()->SetNdivisions(506);
   hFitErrTauShortL2__14__6->GetXaxis()->SetLabelFont(42);
   hFitErrTauShortL2__14__6->GetXaxis()->SetLabelOffset(-0.005);
   hFitErrTauShortL2__14__6->GetXaxis()->SetLabelSize(0.07);
   hFitErrTauShortL2__14__6->GetXaxis()->SetTitleSize(0.07);
   hFitErrTauShortL2__14__6->GetXaxis()->SetTitleOffset(0.7);
   hFitErrTauShortL2__14__6->GetXaxis()->SetTitleFont(42);
   hFitErrTauShortL2__14__6->GetYaxis()->SetNdivisions(507);
   hFitErrTauShortL2__14__6->GetYaxis()->SetLabelFont(42);
   hFitErrTauShortL2__14__6->GetYaxis()->SetLabelSize(0.07);
   hFitErrTauShortL2__14__6->GetYaxis()->SetTitleSize(0.035);
   hFitErrTauShortL2__14__6->GetYaxis()->SetTitleFont(42);
   hFitErrTauShortL2__14__6->GetZaxis()->SetLabelFont(42);
   hFitErrTauShortL2__14__6->GetZaxis()->SetLabelSize(0.035);
   hFitErrTauShortL2__14__6->GetZaxis()->SetTitleSize(0.035);
   hFitErrTauShortL2__14__6->GetZaxis()->SetTitleFont(42);
   hFitErrTauShortL2__14__6->Draw("");
   
   pt = new TPaveText(0.3865667,0.94,0.6134333,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.1009779);
   AText = pt->AddText("#tau_{-} - errori");
   pt->Draw();
   METODO2_6->Modified();
   METODO2->cd();
  
// ------------>Primitives in pad: METODO2_7
   TPad *METODO2_7 = new TPad("METODO2_7", "METODO2_7",0.51,0.01,0.74,0.49);
   METODO2_7->Draw();
   METODO2_7->cd();
   METODO2_7->Range(0.02895023,-10.2375,0.03645069,92.1375);
   METODO2_7->SetFillColor(0);
   METODO2_7->SetBorderMode(0);
   METODO2_7->SetBorderSize(2);
   METODO2_7->SetFrameBorderMode(0);
   METODO2_7->SetFrameBorderMode(0);
   
   TH1D *hFitErrBL2__15__7 = new TH1D("hFitErrBL2__15__7","B - errori",40,0.02970028,0.03570064);
   hFitErrBL2__15__7->SetBinContent(1,6);
   hFitErrBL2__15__7->SetBinContent(2,5);
   hFitErrBL2__15__7->SetBinContent(3,10);
   hFitErrBL2__15__7->SetBinContent(4,15);
   hFitErrBL2__15__7->SetBinContent(5,22);
   hFitErrBL2__15__7->SetBinContent(6,36);
   hFitErrBL2__15__7->SetBinContent(7,43);
   hFitErrBL2__15__7->SetBinContent(8,50);
   hFitErrBL2__15__7->SetBinContent(9,65);
   hFitErrBL2__15__7->SetBinContent(10,60);
   hFitErrBL2__15__7->SetBinContent(11,78);
   hFitErrBL2__15__7->SetBinContent(12,68);
   hFitErrBL2__15__7->SetBinContent(13,61);
   hFitErrBL2__15__7->SetBinContent(14,52);
   hFitErrBL2__15__7->SetBinContent(15,73);
   hFitErrBL2__15__7->SetBinContent(16,50);
   hFitErrBL2__15__7->SetBinContent(17,56);
   hFitErrBL2__15__7->SetBinContent(18,48);
   hFitErrBL2__15__7->SetBinContent(19,31);
   hFitErrBL2__15__7->SetBinContent(20,29);
   hFitErrBL2__15__7->SetBinContent(21,22);
   hFitErrBL2__15__7->SetBinContent(22,24);
   hFitErrBL2__15__7->SetBinContent(23,18);
   hFitErrBL2__15__7->SetBinContent(24,13);
   hFitErrBL2__15__7->SetBinContent(25,13);
   hFitErrBL2__15__7->SetBinContent(26,3);
   hFitErrBL2__15__7->SetBinContent(27,6);
   hFitErrBL2__15__7->SetBinContent(28,1);
   hFitErrBL2__15__7->SetBinContent(29,4);
   hFitErrBL2__15__7->SetBinContent(30,2);
   hFitErrBL2__15__7->SetBinContent(32,1);
   hFitErrBL2__15__7->SetBinContent(35,1);
   hFitErrBL2__15__7->SetBinContent(38,3);
   hFitErrBL2__15__7->SetEntries(969);
   hFitErrBL2__15__7->SetStats(0);
   
   TF1 *gaus7 = new TF1("gaus","gaus",0.02977528,0.03562564);
   gaus7->SetFillColor(19);
   gaus7->SetFillStyle(0);
   gaus7->SetLineColor(2);
   gaus7->SetLineWidth(2);
   gaus7->SetChisquare(39.93834);
   gaus7->SetNDF(30);
   gaus7->GetXaxis()->SetLabelFont(42);
   gaus7->GetXaxis()->SetLabelSize(0.035);
   gaus7->GetXaxis()->SetTitleSize(0.035);
   gaus7->GetXaxis()->SetTitleFont(42);
   gaus7->GetYaxis()->SetLabelFont(42);
   gaus7->GetYaxis()->SetLabelSize(0.035);
   gaus7->GetYaxis()->SetTitleSize(0.035);
   gaus7->GetYaxis()->SetTitleFont(42);
   gaus7->SetParameter(0,67.73498);
   gaus7->SetParError(0,2.8055);
   gaus7->SetParLimits(0,0,0);
   gaus7->SetParameter(1,0.03159294);
   gaus7->SetParError(1,2.852494e-05);
   gaus7->SetParLimits(1,0,0);
   gaus7->SetParameter(2,0.0008306818);
   gaus7->SetParError(2,2.25768e-05);
   gaus7->SetParLimits(2,0,0.008572887);
   hFitErrBL2__15__7->GetListOfFunctions()->Add(gaus7);

   ci = TColor::GetColor("#000099");
   hFitErrBL2__15__7->SetLineColor(ci);
   hFitErrBL2__15__7->GetXaxis()->SetTitle("conteggi");
   hFitErrBL2__15__7->GetXaxis()->CenterTitle(true);
   hFitErrBL2__15__7->GetXaxis()->SetNdivisions(506);
   hFitErrBL2__15__7->GetXaxis()->SetLabelFont(42);
   hFitErrBL2__15__7->GetXaxis()->SetLabelOffset(-0.005);
   hFitErrBL2__15__7->GetXaxis()->SetLabelSize(0.07);
   hFitErrBL2__15__7->GetXaxis()->SetTitleSize(0.07);
   hFitErrBL2__15__7->GetXaxis()->SetTitleOffset(0.7);
   hFitErrBL2__15__7->GetXaxis()->SetTitleFont(42);
   hFitErrBL2__15__7->GetYaxis()->SetNdivisions(507);
   hFitErrBL2__15__7->GetYaxis()->SetLabelFont(42);
   hFitErrBL2__15__7->GetYaxis()->SetLabelSize(0.07);
   hFitErrBL2__15__7->GetYaxis()->SetTitleSize(0.035);
   hFitErrBL2__15__7->GetYaxis()->SetTitleFont(42);
   hFitErrBL2__15__7->GetZaxis()->SetLabelFont(42);
   hFitErrBL2__15__7->GetZaxis()->SetLabelSize(0.035);
   hFitErrBL2__15__7->GetZaxis()->SetTitleSize(0.035);
   hFitErrBL2__15__7->GetZaxis()->SetTitleFont(42);
   hFitErrBL2__15__7->Draw("");
   
   pt = new TPaveText(0.3829375,0.94,0.6170625,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.1009779);
   AText = pt->AddText("B - errori");
   pt->Draw();
   METODO2_7->Modified();
   METODO2->cd();
  
// ------------>Primitives in pad: METODO2_8
   TPad *METODO2_8 = new TPad("METODO2_8", "METODO2_8",0.76,0.01,0.99,0.49);
   METODO2_8->Draw();
   METODO2_8->cd();
   METODO2_8->Range(0.07309322,-10.89375,0.1870743,98.04375);
   METODO2_8->SetFillColor(0);
   METODO2_8->SetBorderMode(0);
   METODO2_8->SetBorderSize(2);
   METODO2_8->SetFrameBorderMode(0);
   METODO2_8->SetFrameBorderMode(0);
   
   TH1D *hFitErrRL2__16__8 = new TH1D("hFitErrRL2__16__8","R - errori",40,0.08449133,0.1756762);
   hFitErrRL2__16__8->SetBinContent(1,4);
   hFitErrRL2__16__8->SetBinContent(2,3);
   hFitErrRL2__16__8->SetBinContent(3,9);
   hFitErrRL2__16__8->SetBinContent(4,14);
   hFitErrRL2__16__8->SetBinContent(5,22);
   hFitErrRL2__16__8->SetBinContent(6,38);
   hFitErrRL2__16__8->SetBinContent(7,43);
   hFitErrRL2__16__8->SetBinContent(8,55);
   hFitErrRL2__16__8->SetBinContent(9,83);
   hFitErrRL2__16__8->SetBinContent(10,65);
   hFitErrRL2__16__8->SetBinContent(11,75);
   hFitErrRL2__16__8->SetBinContent(12,66);
   hFitErrRL2__16__8->SetBinContent(13,76);
   hFitErrRL2__16__8->SetBinContent(14,56);
   hFitErrRL2__16__8->SetBinContent(15,73);
   hFitErrRL2__16__8->SetBinContent(16,47);
   hFitErrRL2__16__8->SetBinContent(17,49);
   hFitErrRL2__16__8->SetBinContent(18,41);
   hFitErrRL2__16__8->SetBinContent(19,30);
   hFitErrRL2__16__8->SetBinContent(20,28);
   hFitErrRL2__16__8->SetBinContent(21,17);
   hFitErrRL2__16__8->SetBinContent(22,24);
   hFitErrRL2__16__8->SetBinContent(23,13);
   hFitErrRL2__16__8->SetBinContent(24,8);
   hFitErrRL2__16__8->SetBinContent(25,7);
   hFitErrRL2__16__8->SetBinContent(26,7);
   hFitErrRL2__16__8->SetBinContent(27,4);
   hFitErrRL2__16__8->SetBinContent(28,5);
   hFitErrRL2__16__8->SetBinContent(30,1);
   hFitErrRL2__16__8->SetBinContent(31,3);
   hFitErrRL2__16__8->SetBinContent(32,1);
   hFitErrRL2__16__8->SetBinContent(33,1);
   hFitErrRL2__16__8->SetBinContent(40,1);
   hFitErrRL2__16__8->SetEntries(969);
   hFitErrRL2__16__8->SetStats(0);
   
   TF1 *gaus8 = new TF1("gaus","gaus",0.08563114,0.1745364);
   gaus8->SetFillColor(19);
   gaus8->SetFillStyle(0);
   gaus8->SetLineColor(2);
   gaus8->SetLineWidth(2);
   gaus8->SetChisquare(52.49831);
   gaus8->SetNDF(30);
   gaus8->GetXaxis()->SetLabelFont(42);
   gaus8->GetXaxis()->SetLabelSize(0.035);
   gaus8->GetXaxis()->SetTitleSize(0.035);
   gaus8->GetXaxis()->SetTitleFont(42);
   gaus8->GetYaxis()->SetLabelFont(42);
   gaus8->GetYaxis()->SetLabelSize(0.035);
   gaus8->GetYaxis()->SetTitleSize(0.035);
   gaus8->GetYaxis()->SetTitleFont(42);
   gaus8->SetParameter(0,71.73788);
   gaus8->SetParError(0,3.119069);
   gaus8->SetParLimits(0,0,0);
   gaus8->SetParameter(1,0.112697);
   gaus8->SetParError(1,0.0004287075);
   gaus8->SetParLimits(1,0,0);
   gaus8->SetParameter(2,0.01171897);
   gaus8->SetParError(2,0.0003484249);
   gaus8->SetParLimits(2,0,0.1238761);
   hFitErrRL2__16__8->GetListOfFunctions()->Add(gaus8);

   ci = TColor::GetColor("#000099");
   hFitErrRL2__16__8->SetLineColor(ci);
   hFitErrRL2__16__8->GetXaxis()->SetNdivisions(508);
   hFitErrRL2__16__8->GetXaxis()->SetLabelFont(42);
   hFitErrRL2__16__8->GetXaxis()->SetLabelOffset(-0.005);
   hFitErrRL2__16__8->GetXaxis()->SetLabelSize(0.07);
   hFitErrRL2__16__8->GetXaxis()->SetTitleSize(0.035);
   hFitErrRL2__16__8->GetXaxis()->SetTitleFont(42);
   hFitErrRL2__16__8->GetYaxis()->SetNdivisions(508);
   hFitErrRL2__16__8->GetYaxis()->SetLabelFont(42);
   hFitErrRL2__16__8->GetYaxis()->SetLabelSize(0.07);
   hFitErrRL2__16__8->GetYaxis()->SetTitleSize(0.035);
   hFitErrRL2__16__8->GetYaxis()->SetTitleFont(42);
   hFitErrRL2__16__8->GetZaxis()->SetLabelFont(42);
   hFitErrRL2__16__8->GetZaxis()->SetLabelSize(0.035);
   hFitErrRL2__16__8->GetZaxis()->SetTitleSize(0.035);
   hFitErrRL2__16__8->GetZaxis()->SetTitleFont(42);
   hFitErrRL2__16__8->Draw("");
   
   pt = new TPaveText(0.3829375,0.94,0.6170625,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->SetTextSize(0.1009779);
   AText = pt->AddText("R - errori");
   pt->Draw();
   METODO2_8->Modified();
   METODO2->cd();
   METODO2->Modified();
   METODO2->cd();
   METODO2->SetSelected(METODO2);
}
