/***************************************************************
 * Name:      CardFlipApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2021-11-23
 * Copyright:  ()
 * License:
 **************************************************************/

#include "CardFlipApp.h"

//(*AppHeaders
#include "CardFlipMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(CardFlipApp);

bool CardFlipApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	CardFlipFrame* Frame = new CardFlipFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
