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
        //*)

        //(*Identifiers(CardFlipFrame)
        static const long ID_STATICBITMAP1;
        static const long ID_BITMAPBUTTON1;
        static const long ID_BITMAPBUTTON3;
        static const long ID_BITMAPBUTTON4;
        static const long ID_BITMAPBUTTON2;
        static const long ID_BITMAPBUTTON5;
        static const long ID_BITMAPBUTTON6;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(CardFlipFrame)
        wxBitmapButton* col_12_button;
        wxBitmapButton* col_1_button;
        wxBitmapButton* col_2_button;
        wxBitmapButton* col_34_button;
        wxBitmapButton* col_3_button;
        wxBitmapButton* col_4_button;
        wxStaticBitmap* payoutImage;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CARDFLIPMAIN_H
