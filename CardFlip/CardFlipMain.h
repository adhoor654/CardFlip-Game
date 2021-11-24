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
#include <wx/frame.h>
#include <wx/menu.h>
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
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(CardFlipFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CARDFLIPMAIN_H
