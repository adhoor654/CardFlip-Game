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

//(*Headers(CardFlipFrame)
#include <wx/bmpbuttn.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/statusbr.h>
//*)

class CardFlipFrame: public wxFrame
{
    public:

        CardFlipFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~CardFlipFrame();

    private:

        //(*Handlers(CardFlipFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void Oncard_5_buttonClick(wxCommandEvent& event);
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
        static const long ID_BITMAPBUTTON18;
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
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(CardFlipFrame)
        wxBitmapButton* BitmapButton10;
        wxBitmapButton* BitmapButton11;
        wxBitmapButton* BitmapButton12;
        wxBitmapButton* BitmapButton13;
        wxBitmapButton* BitmapButton14;
        wxBitmapButton* BitmapButton15;
        wxBitmapButton* BitmapButton16;
        wxBitmapButton* BitmapButton17;
        wxBitmapButton* BitmapButton1;
        wxBitmapButton* BitmapButton2;
        wxBitmapButton* BitmapButton3;
        wxBitmapButton* BitmapButton4;
        wxBitmapButton* BitmapButton5;
        wxBitmapButton* BitmapButton6;
        wxBitmapButton* BitmapButton7;
        wxBitmapButton* BitmapButton8;
        wxBitmapButton* BitmapButton9;
        wxBitmapButton* card_1_button;
        wxBitmapButton* card_5_button;
        wxBitmapButton* col_12_button;
        wxBitmapButton* col_1_button;
        wxBitmapButton* col_2_button;
        wxBitmapButton* col_34_button;
        wxBitmapButton* col_3_button;
        wxBitmapButton* col_4_button;
        wxBitmapButton* row_12_button;
        wxBitmapButton* row_1_button;
        wxBitmapButton* row_2_button;
        wxStaticBitmap* payoutImage;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CARDFLIPMAIN_H
