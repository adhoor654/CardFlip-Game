/***************************************************************
 * Name:      CardFlipMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2021-11-23
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef CARDFLIPMAIN_H
#define CARDFLIPMAIN_H

#include "include/CardFlip.h"
#include "images/ImageHeader.h"
//(*Headers(CardFlipFrame)
#include <wx/bmpbuttn.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
//*)

class CardFlipFrame: public wxFrame
{
    public:

        CardFlipFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~CardFlipFrame();


    private:
        CardFlip *game;
        int betCode;
        wxStaticText* yourBet;
        vector<wxBitmap> cardImages;
        string betNames[40] = {"Unexpected result",
            "Red club", "Red spade", "Red heart", "Red diamond",
            "Orange club", "Orange spade", "Orange heart", "Orange diamond",
            "Yellow club", "Yellow spade", "Yellow heart", "Yellow diamond",
            "Green club", "Green spade", "Green heart", "Green diamond",
            "Blue club", "Blue spade", "Blue heart", "Blue diamond",
            "Purple club", "Purple spade", "Purple heart", "Purple diamond",
            "All reds", "All oranges", "All yellows", "All greens", "All blues", "All purples",
            "All clubs", "All spades", "All hearts", "All diamonds",
            "All reds & oranges", "All yellows & greens", "All blues & purples",
            "All clubs & spades", "All hearts & diamonds"};

        //(*Handlers(CardFlipFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(CardFlipFrame)
        static const long ID_STATICBITMAP1;
        static const long ID_BITMAPBUTTON1;
        static const long ID_BITMAPBUTTON3;
        static const long ID_BITMAPBUTTON4;
        static const long ID_BITMAPBUTTON2;
        static const long ID_BITMAPBUTTON5;
        static const long ID_BITMAPBUTTON6;
        static const long ID_BITMAPBUTTON7;
        static const long ID_BITMAPBUTTON8;
        static const long ID_BITMAPBUTTON9;
        static const long ID_BITMAPBUTTON10;
        static const long ID_BITMAPBUTTON11;
        static const long ID_BITMAPBUTTON12;
        static const long ID_BITMAPBUTTON13;
        static const long ID_BITMAPBUTTON14;
        static const long ID_BITMAPBUTTON15;
        static const long ID_BITMAPBUTTON16;
        static const long ID_BITMAPBUTTON17;
        static const long ID_BITMAPBUTTON19;
        static const long ID_BITMAPBUTTON20;
        static const long ID_BITMAPBUTTON21;
        static const long ID_BITMAPBUTTON22;
        static const long ID_BITMAPBUTTON23;
        static const long ID_BITMAPBUTTON24;
        static const long ID_BITMAPBUTTON25;
        static const long ID_BITMAPBUTTON26;
        static const long ID_BITMAPBUTTON27;
        static const long ID_BITMAPBUTTON28;
        static const long ID_BITMAPBUTTON29;
        static const long ID_BITMAPBUTTON30;
        static const long ID_BITMAPBUTTON31;
        static const long ID_BITMAPBUTTON32;
        static const long ID_BITMAPBUTTON33;
        static const long ID_BITMAPBUTTON34;
        static const long ID_BITMAPBUTTON36;
        static const long ID_BITMAPBUTTON35;
        static const long ID_BITMAPBUTTON37;
        static const long ID_BITMAPBUTTON38;
        static const long ID_BITMAPBUTTON39;
        static const long ID_BITMAPBUTTON40;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_BITMAPBUTTON18;
        static const long ID_STATICBITMAP2;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(CardFlipFrame)
        wxBitmapButton* card_10_button;
        wxBitmapButton* card_11_button;
        wxBitmapButton* card_12_button;
        wxBitmapButton* card_13_button;
        wxBitmapButton* card_14_button;
        wxBitmapButton* card_15_button;
        wxBitmapButton* card_16_button;
        wxBitmapButton* card_17_button;
        wxBitmapButton* card_18_button;
        wxBitmapButton* card_19_button;
        wxBitmapButton* card_1_button;
        wxBitmapButton* card_20_button;
        wxBitmapButton* card_21_button;
        wxBitmapButton* card_22_button;
        wxBitmapButton* card_23_button;
        wxBitmapButton* card_24_button;
        wxBitmapButton* card_2_button;
        wxBitmapButton* card_3_button;
        wxBitmapButton* card_4_button;
        wxBitmapButton* card_5_button;
        wxBitmapButton* card_6_button;
        wxBitmapButton* card_7_button;
        wxBitmapButton* card_8_button;
        wxBitmapButton* card_9_button;
        wxBitmapButton* col_12_button;
        wxBitmapButton* col_1_button;
        wxBitmapButton* col_2_button;
        wxBitmapButton* col_34_button;
        wxBitmapButton* col_3_button;
        wxBitmapButton* col_4_button;
        wxBitmapButton* draw_card_button;
        wxBitmapButton* row_12_button;
        wxBitmapButton* row_1_button;
        wxBitmapButton* row_2_button;
        wxBitmapButton* row_34_button;
        wxBitmapButton* row_3_button;
        wxBitmapButton* row_4_button;
        wxBitmapButton* row_56_button;
        wxBitmapButton* row_5_button;
        wxBitmapButton* row_6_button;
        wxStaticBitmap* card_display;
        wxStaticBitmap* payoutImage;
        wxStaticText* roundLabel;
        wxStaticText* theirBetLabel;
        wxStaticText* theirPayoutLabel;
        wxStaticText* theirScoreLabel;
        wxStaticText* yourBetLabel;
        wxStaticText* yourPayoutLabel;
        wxStaticText* yourScoreLabel;
        wxStatusBar* statusBar;
        //*)

    void setRoundLabel(wxString str);

    void setBetLabel(wxString str);
    void setCPUBetLabel(wxString str);

    void setPayoutLabel(wxString str);
    void setCPUPayoutLabel(wxString str);

    void setScore(wxString str);
    void setCPUScore(wxString str);

    void updateCPUBet(pair<int,int> info);
    void updateScores();

    void updateCardDisplay(int cardID);

    void setImages();
    void bindButtons();

    void Oncol_12_buttonClick(wxCommandEvent& event);
    void Oncol_34_buttonClick(wxCommandEvent& event);
    void Oncol_1_buttonClick(wxCommandEvent& event);
    void Oncol_2_buttonClick(wxCommandEvent& event);
    void Oncol_3_buttonClick(wxCommandEvent& event);
    void Oncol_4_buttonClick(wxCommandEvent& event);
    void Oncard_1_buttonClick(wxCommandEvent& event);
    void Oncard_2_buttonClick(wxCommandEvent& event);
    void Oncard_3_buttonClick(wxCommandEvent& event);
    void Oncard_4_buttonClick(wxCommandEvent& event);
    void Oncard_5_buttonClick(wxCommandEvent& event);
    void Oncard_6_buttonClick(wxCommandEvent& event);
    void Oncard_7_buttonClick(wxCommandEvent& event);
    void Oncard_8_buttonClick(wxCommandEvent& event);
    void Oncard_9_buttonClick(wxCommandEvent& event);
    void Oncard_10_buttonClick(wxCommandEvent& event);
    void Oncard_11_buttonClick(wxCommandEvent& event);
    void Oncard_12_buttonClick(wxCommandEvent& event);
    void Oncard_13_buttonClick(wxCommandEvent& event);
    void Oncard_14_buttonClick(wxCommandEvent& event);
    void Oncard_15_buttonClick(wxCommandEvent& event);
    void Oncard_16_buttonClick(wxCommandEvent& event);
    void Oncard_17_buttonClick(wxCommandEvent& event);
    void Oncard_18_buttonClick(wxCommandEvent& event);
    void Oncard_19_buttonClick(wxCommandEvent& event);
    void Oncard_20_buttonClick(wxCommandEvent& event);
    void Oncard_21_buttonClick(wxCommandEvent& event);
    void Oncard_22_buttonClick(wxCommandEvent& event);
    void Oncard_23_buttonClick(wxCommandEvent& event);
    void Oncard_24_buttonClick(wxCommandEvent& event);

    void Ondraw_card_buttonClick(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};

#endif // CARDFLIPMAIN_H
