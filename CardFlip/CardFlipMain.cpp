/***************************************************************
 * Name:      CardFlipMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2021-11-23
 * Copyright:  ()
 * License:
 **************************************************************/

#include "CardFlipMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(CardFlipFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(CardFlipFrame)
const long CardFlipFrame::ID_STATICBITMAP1 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON1 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON3 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON4 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON2 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON5 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON6 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON7 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON8 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON9 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON10 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON11 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON12 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON13 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON14 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON15 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON16 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON17 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON19 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON20 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON21 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON22 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON23 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON24 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON25 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON26 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON27 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON28 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON29 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON30 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON31 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON32 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON33 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON34 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON36 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON35 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON37 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON38 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON39 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON40 = wxNewId();
const long CardFlipFrame::ID_STATICTEXT1 = wxNewId();
const long CardFlipFrame::ID_STATICTEXT2 = wxNewId();
const long CardFlipFrame::ID_STATICTEXT3 = wxNewId();
const long CardFlipFrame::ID_BITMAPBUTTON18 = wxNewId();
const long CardFlipFrame::ID_STATICBITMAP2 = wxNewId();
const long CardFlipFrame::ID_STATICTEXT7 = wxNewId();
const long CardFlipFrame::ID_STATICTEXT4 = wxNewId();
const long CardFlipFrame::ID_STATICTEXT5 = wxNewId();
const long CardFlipFrame::ID_STATICTEXT6 = wxNewId();
const long CardFlipFrame::idMenuNewGame = wxNewId();
const long CardFlipFrame::idMenuQuit = wxNewId();
const long CardFlipFrame::idMenuAbout = wxNewId();
const long CardFlipFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(CardFlipFrame,wxFrame)
    //(*EventTable(CardFlipFrame)
    //*)
END_EVENT_TABLE()

CardFlipFrame::CardFlipFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(CardFlipFrame)
    wxBoxSizer* colSizer1;
    wxBoxSizer* colSizer2;
    wxBoxSizer* firstSizer1;
    wxBoxSizer* firstSizer2;
    wxBoxSizer* firstSizer;
    wxBoxSizer* fourthSizer1;
    wxBoxSizer* fourthSizer2;
    wxBoxSizer* fourthSizer3;
    wxBoxSizer* fourthSizer4;
    wxBoxSizer* fourthSizer5;
    wxBoxSizer* fourthSizer6;
    wxBoxSizer* fourthSizer;
    wxBoxSizer* leftSizer;
    wxBoxSizer* outerSizer;
    wxBoxSizer* rightSizer;
    wxBoxSizer* secondSizer1;
    wxBoxSizer* secondSizer2;
    wxBoxSizer* secondSizer3;
    wxBoxSizer* secondSizer4;
    wxBoxSizer* secondSizer5;
    wxBoxSizer* secondSizer6;
    wxBoxSizer* secondSizer;
    wxBoxSizer* thirdSizer1;
    wxBoxSizer* thirdSizer2;
    wxBoxSizer* thirdSizer3;
    wxBoxSizer* thirdSizer4;
    wxBoxSizer* thirdSizer5;
    wxBoxSizer* thirdSizer6;
    wxBoxSizer* thirdSizer;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem3;
    wxStaticBoxSizer* cpuBoxSizer;
    wxStaticBoxSizer* youBoxSizer;

    Create(parent, wxID_ANY, _("CardFlip"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(950,615));
    SetBackgroundColour(wxColour(226,226,233));
    outerSizer = new wxBoxSizer(wxHORIZONTAL);
    leftSizer = new wxBoxSizer(wxVERTICAL);
    firstSizer = new wxBoxSizer(wxHORIZONTAL);
    payoutImage = new wxStaticBitmap(this, ID_STATICBITMAP1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
    firstSizer->Add(payoutImage, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    firstSizer1 = new wxBoxSizer(wxVERTICAL);
    col_12_button = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    col_12_button->SetBackgroundColour(wxColour(226,226,233));
    firstSizer1->Add(col_12_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
    colSizer1 = new wxBoxSizer(wxHORIZONTAL);
    col_1_button = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
    col_1_button->SetBackgroundColour(wxColour(226,226,233));
    colSizer1->Add(col_1_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    col_2_button = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
    col_2_button->SetBackgroundColour(wxColour(226,226,233));
    colSizer1->Add(col_2_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    firstSizer1->Add(colSizer1, 1, wxALL|wxEXPAND, 5);
    firstSizer->Add(firstSizer1, 1, wxALL|wxEXPAND, 5);
    firstSizer2 = new wxBoxSizer(wxVERTICAL);
    col_34_button = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    col_34_button->SetBackgroundColour(wxColour(226,226,233));
    firstSizer2->Add(col_34_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
    colSizer2 = new wxBoxSizer(wxHORIZONTAL);
    col_3_button = new wxBitmapButton(this, ID_BITMAPBUTTON5, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
    col_3_button->SetBackgroundColour(wxColour(226,226,233));
    colSizer2->Add(col_3_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    col_4_button = new wxBitmapButton(this, ID_BITMAPBUTTON6, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
    col_4_button->SetBackgroundColour(wxColour(226,226,233));
    colSizer2->Add(col_4_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    firstSizer2->Add(colSizer2, 1, wxALL|wxEXPAND, 5);
    firstSizer->Add(firstSizer2, 1, wxALL|wxEXPAND, 5);
    leftSizer->Add(firstSizer, 1, wxALL|wxEXPAND, 5);
    secondSizer = new wxBoxSizer(wxHORIZONTAL);
    secondSizer1 = new wxBoxSizer(wxHORIZONTAL);
    row_12_button = new wxBitmapButton(this, ID_BITMAPBUTTON7, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
    row_12_button->SetBackgroundColour(wxColour(226,226,233));
    secondSizer1->Add(row_12_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer->Add(secondSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer2 = new wxBoxSizer(wxVERTICAL);
    row_1_button = new wxBitmapButton(this, ID_BITMAPBUTTON8, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
    secondSizer2->Add(row_1_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    row_2_button = new wxBitmapButton(this, ID_BITMAPBUTTON9, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON9"));
    secondSizer2->Add(row_2_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer->Add(secondSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer3 = new wxBoxSizer(wxVERTICAL);
    card_1_button = new wxBitmapButton(this, ID_BITMAPBUTTON10, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON10"));
    secondSizer3->Add(card_1_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    card_5_button = new wxBitmapButton(this, ID_BITMAPBUTTON11, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON11"));
    secondSizer3->Add(card_5_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer->Add(secondSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer4 = new wxBoxSizer(wxVERTICAL);
    card_2_button = new wxBitmapButton(this, ID_BITMAPBUTTON12, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON12"));
    secondSizer4->Add(card_2_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    card_6_button = new wxBitmapButton(this, ID_BITMAPBUTTON13, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON13"));
    secondSizer4->Add(card_6_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer->Add(secondSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer5 = new wxBoxSizer(wxVERTICAL);
    card_3_button = new wxBitmapButton(this, ID_BITMAPBUTTON14, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON14"));
    secondSizer5->Add(card_3_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    card_7_button = new wxBitmapButton(this, ID_BITMAPBUTTON15, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON15"));
    secondSizer5->Add(card_7_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer->Add(secondSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer6 = new wxBoxSizer(wxVERTICAL);
    card_4_button = new wxBitmapButton(this, ID_BITMAPBUTTON16, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON16"));
    secondSizer6->Add(card_4_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    card_8_button = new wxBitmapButton(this, ID_BITMAPBUTTON17, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON17"));
    secondSizer6->Add(card_8_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer->Add(secondSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    leftSizer->Add(secondSizer, 1, wxALL|wxEXPAND, 5);
    thirdSizer = new wxBoxSizer(wxHORIZONTAL);
    thirdSizer1 = new wxBoxSizer(wxHORIZONTAL);
    row_34_button = new wxBitmapButton(this, ID_BITMAPBUTTON19, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON19"));
    row_34_button->SetBackgroundColour(wxColour(226,226,233));
    thirdSizer1->Add(row_34_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer->Add(thirdSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer2 = new wxBoxSizer(wxVERTICAL);
    row_3_button = new wxBitmapButton(this, ID_BITMAPBUTTON20, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON20"));
    thirdSizer2->Add(row_3_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    row_4_button = new wxBitmapButton(this, ID_BITMAPBUTTON21, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON21"));
    thirdSizer2->Add(row_4_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer->Add(thirdSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer3 = new wxBoxSizer(wxVERTICAL);
    card_9_button = new wxBitmapButton(this, ID_BITMAPBUTTON22, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON22"));
    thirdSizer3->Add(card_9_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    card_13_button = new wxBitmapButton(this, ID_BITMAPBUTTON23, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON23"));
    thirdSizer3->Add(card_13_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer->Add(thirdSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer4 = new wxBoxSizer(wxVERTICAL);
    card_10_button = new wxBitmapButton(this, ID_BITMAPBUTTON24, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON24"));
    thirdSizer4->Add(card_10_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    card_14_button = new wxBitmapButton(this, ID_BITMAPBUTTON25, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON25"));
    thirdSizer4->Add(card_14_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer->Add(thirdSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer5 = new wxBoxSizer(wxVERTICAL);
    card_11_button = new wxBitmapButton(this, ID_BITMAPBUTTON26, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON26"));
    thirdSizer5->Add(card_11_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    card_15_button = new wxBitmapButton(this, ID_BITMAPBUTTON27, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON27"));
    thirdSizer5->Add(card_15_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer->Add(thirdSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer6 = new wxBoxSizer(wxVERTICAL);
    card_12_button = new wxBitmapButton(this, ID_BITMAPBUTTON28, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON28"));
    thirdSizer6->Add(card_12_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    card_16_button = new wxBitmapButton(this, ID_BITMAPBUTTON29, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON29"));
    thirdSizer6->Add(card_16_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer->Add(thirdSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    leftSizer->Add(thirdSizer, 1, wxALL|wxEXPAND, 5);
    fourthSizer = new wxBoxSizer(wxHORIZONTAL);
    fourthSizer1 = new wxBoxSizer(wxHORIZONTAL);
    row_56_button = new wxBitmapButton(this, ID_BITMAPBUTTON30, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON30"));
    row_56_button->SetBackgroundColour(wxColour(226,226,233));
    fourthSizer1->Add(row_56_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    fourthSizer->Add(fourthSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    fourthSizer2 = new wxBoxSizer(wxVERTICAL);
    row_5_button = new wxBitmapButton(this, ID_BITMAPBUTTON31, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON31"));
    fourthSizer2->Add(row_5_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    row_6_button = new wxBitmapButton(this, ID_BITMAPBUTTON32, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON32"));
    fourthSizer2->Add(row_6_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    fourthSizer->Add(fourthSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    fourthSizer3 = new wxBoxSizer(wxVERTICAL);
    card_17_button = new wxBitmapButton(this, ID_BITMAPBUTTON33, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON33"));
    fourthSizer3->Add(card_17_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    card_21_button = new wxBitmapButton(this, ID_BITMAPBUTTON34, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON34"));
    fourthSizer3->Add(card_21_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    fourthSizer->Add(fourthSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    fourthSizer4 = new wxBoxSizer(wxVERTICAL);
    card_18_button = new wxBitmapButton(this, ID_BITMAPBUTTON36, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON36"));
    fourthSizer4->Add(card_18_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    card_22_button = new wxBitmapButton(this, ID_BITMAPBUTTON35, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON35"));
    fourthSizer4->Add(card_22_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    fourthSizer->Add(fourthSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    fourthSizer5 = new wxBoxSizer(wxVERTICAL);
    card_19_button = new wxBitmapButton(this, ID_BITMAPBUTTON37, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON37"));
    fourthSizer5->Add(card_19_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    card_23_button = new wxBitmapButton(this, ID_BITMAPBUTTON38, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON38"));
    fourthSizer5->Add(card_23_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    fourthSizer->Add(fourthSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    fourthSizer6 = new wxBoxSizer(wxVERTICAL);
    card_20_button = new wxBitmapButton(this, ID_BITMAPBUTTON39, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON39"));
    fourthSizer6->Add(card_20_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    card_24_button = new wxBitmapButton(this, ID_BITMAPBUTTON40, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON40"));
    fourthSizer6->Add(card_24_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    fourthSizer->Add(fourthSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    leftSizer->Add(fourthSizer, 1, wxALL|wxEXPAND, 5);
    outerSizer->Add(leftSizer, 1, wxALL|wxEXPAND, 5);
    rightSizer = new wxBoxSizer(wxVERTICAL);
    youBoxSizer = new wxStaticBoxSizer(wxVERTICAL, this, _("YOU"));
    yourBetLabel = new wxStaticText(this, ID_STATICTEXT1, _("Your bet:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    youBoxSizer->Add(yourBetLabel, 1, wxALL|wxEXPAND, 5);
    yourPayoutLabel = new wxStaticText(this, ID_STATICTEXT2, _("Payout:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    youBoxSizer->Add(yourPayoutLabel, 1, wxALL|wxEXPAND, 5);
    yourScoreLabel = new wxStaticText(this, ID_STATICTEXT3, _("Score: 0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    youBoxSizer->Add(yourScoreLabel, 1, wxALL|wxEXPAND, 5);
    rightSizer->Add(youBoxSizer, 1, wxALL|wxEXPAND, 5);
    draw_card_button = new wxBitmapButton(this, ID_BITMAPBUTTON18, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON18"));
    draw_card_button->SetMinSize(wxSize(110,50));
    draw_card_button->SetMaxSize(wxSize(110,50));
    rightSizer->Add(draw_card_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    card_display = new wxStaticBitmap(this, ID_STATICBITMAP2, wxNullBitmap, wxDefaultPosition, wxSize(100,100), wxNO_BORDER, _T("ID_STATICBITMAP2"));
    card_display->SetMinSize(wxSize(100,100));
    card_display->SetMaxSize(wxSize(100,100));
    rightSizer->Add(card_display, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 10);
    roundLabel = new wxStaticText(this, ID_STATICTEXT7, _("Round ##"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    rightSizer->Add(roundLabel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    cpuBoxSizer = new wxStaticBoxSizer(wxVERTICAL, this, _("CPU"));
    theirBetLabel = new wxStaticText(this, ID_STATICTEXT4, _("Their bet:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    cpuBoxSizer->Add(theirBetLabel, 1, wxALL|wxEXPAND, 5);
    theirPayoutLabel = new wxStaticText(this, ID_STATICTEXT5, _("Payout:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    cpuBoxSizer->Add(theirPayoutLabel, 1, wxALL|wxEXPAND, 5);
    theirScoreLabel = new wxStaticText(this, ID_STATICTEXT6, _("Score: 0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    cpuBoxSizer->Add(theirScoreLabel, 1, wxALL|wxEXPAND, 5);
    rightSizer->Add(cpuBoxSizer, 1, wxALL|wxEXPAND, 5);
    outerSizer->Add(rightSizer, 1, wxALL|wxEXPAND, 5);
    SetSizer(outerSizer);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem3 = new wxMenuItem(Menu1, idMenuNewGame, _("New Game\tF5"), _("Start a new game"), wxITEM_NORMAL);
    Menu1->Append(MenuItem3);
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the game"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("How to play\tF1"), _("Show game instructions"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    statusBar = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    statusBar->SetFieldsCount(1,__wxStatusBarWidths_1);
    statusBar->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(statusBar);
    SetSizer(outerSizer);
    Layout();

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&CardFlipFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&CardFlipFrame::OnAbout);
    //*)
    Connect(idMenuNewGame,wxEVT_COMMAND_MENU_SELECTED, (wxObjectEventFunction)&CardFlipFrame::OnNewGame);

    SetClientSize(wxSize(950,615));
    SetIcon(bicon);

    setImages();
    bindButtons();

    game = new CardFlip(1);
}

void CardFlipFrame::setImages() {
    wxBitmap payout_info(payoutinfo, wxBITMAP_TYPE_XPM);
    payoutImage->SetBitmap(payout_info);

    cardImages.push_back(wxBitmap(cardblank, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card1, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card2, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card3, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card4, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card5, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card6, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card7, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card8, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card9, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card10, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card11, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card12, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card13, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card14, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card15, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card16, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card17, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card18, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card19, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card20, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card21, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card22, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card23, wxBITMAP_TYPE_XPM));
    cardImages.push_back(wxBitmap(card24, wxBITMAP_TYPE_XPM));

    card_display->SetBitmap(cardImages[0]);

    wxBitmap col12_(col12, wxBITMAP_TYPE_XPM);
    wxBitmap col12_pressed(col12pressed, wxBITMAP_TYPE_XPM);
    col_12_button->SetBitmap(col12_);
    col_12_button->SetBitmapSelected(col12_pressed);

    wxBitmap col34_(col34, wxBITMAP_TYPE_XPM);
    wxBitmap col34_pressed(col34pressed, wxBITMAP_TYPE_XPM);
    col_34_button->SetBitmap(col34_);
    col_34_button->SetBitmapSelected(col34_pressed);

    wxBitmap col1_(col1, wxBITMAP_TYPE_XPM);
    wxBitmap col1_pressed(col1pressed, wxBITMAP_TYPE_XPM);
    col_1_button->SetBitmap(col1_);
    col_1_button->SetBitmapSelected(col1_pressed);

    wxBitmap col2_(col2, wxBITMAP_TYPE_XPM);
    wxBitmap col2_pressed(col2pressed, wxBITMAP_TYPE_XPM);
    col_2_button->SetBitmap(col2_);
    col_2_button->SetBitmapSelected(col2_pressed);

    wxBitmap col3_(col3, wxBITMAP_TYPE_XPM);
    wxBitmap col3_pressed(col3pressed, wxBITMAP_TYPE_XPM);
    col_3_button->SetBitmap(col3_);
    col_3_button->SetBitmapSelected(col3_pressed);

    wxBitmap col4_(col4, wxBITMAP_TYPE_XPM);
    wxBitmap col4_pressed(col4pressed, wxBITMAP_TYPE_XPM);
    col_4_button->SetBitmap(col4_);
    col_4_button->SetBitmapSelected(col4_pressed);

    wxBitmap b1_(b1, wxBITMAP_TYPE_XPM);
    wxBitmap b1_pressed(b1pressed, wxBITMAP_TYPE_XPM);
    card_1_button->SetBitmap(b1_);
    card_1_button->SetBitmapSelected(b1_pressed);

    wxBitmap b2_(b2, wxBITMAP_TYPE_XPM);
    wxBitmap b2_pressed(b2pressed, wxBITMAP_TYPE_XPM);
    card_2_button->SetBitmap(b2_);
    card_2_button->SetBitmapSelected(b2_pressed);

    wxBitmap b3_(b3, wxBITMAP_TYPE_XPM);
    wxBitmap b3_pressed(b3pressed, wxBITMAP_TYPE_XPM);
    card_3_button->SetBitmap(b3_);
    card_3_button->SetBitmapSelected(b3_pressed);

    wxBitmap b4_(b4, wxBITMAP_TYPE_XPM);
    wxBitmap b4_pressed(b4pressed, wxBITMAP_TYPE_XPM);
    card_4_button->SetBitmap(b4_);
    card_4_button->SetBitmapSelected(b4_pressed);

    wxBitmap b5_(b5, wxBITMAP_TYPE_XPM);
    wxBitmap b5_pressed(b5pressed, wxBITMAP_TYPE_XPM);
    card_5_button->SetBitmap(b5_);
    card_5_button->SetBitmapSelected(b5_pressed);

    wxBitmap b6_(b6, wxBITMAP_TYPE_XPM);
    wxBitmap b6_pressed(b6pressed, wxBITMAP_TYPE_XPM);
    card_6_button->SetBitmap(b6_);
    card_6_button->SetBitmapSelected(b6_pressed);

    wxBitmap b7_(b7, wxBITMAP_TYPE_XPM);
    wxBitmap b7_pressed(b7pressed, wxBITMAP_TYPE_XPM);
    card_7_button->SetBitmap(b7_);
    card_7_button->SetBitmapSelected(b7_pressed);

    wxBitmap b8_(b8, wxBITMAP_TYPE_XPM);
    wxBitmap b8_pressed(b8pressed, wxBITMAP_TYPE_XPM);
    card_8_button->SetBitmap(b8_);
    card_8_button->SetBitmapSelected(b8_pressed);

    wxBitmap b9_(b9, wxBITMAP_TYPE_XPM);
    wxBitmap b9_pressed(b9pressed, wxBITMAP_TYPE_XPM);
    card_9_button->SetBitmap(b9_);
    card_9_button->SetBitmapSelected(b9_pressed);

    wxBitmap b10_(b10, wxBITMAP_TYPE_XPM);
    wxBitmap b10_pressed(b10pressed, wxBITMAP_TYPE_XPM);
    card_10_button->SetBitmap(b10_);
    card_10_button->SetBitmapSelected(b10_pressed);

    wxBitmap b11_(b11, wxBITMAP_TYPE_XPM);
    wxBitmap b11_pressed(b11pressed, wxBITMAP_TYPE_XPM);
    card_11_button->SetBitmap(b11_);
    card_11_button->SetBitmapSelected(b11_pressed);

    wxBitmap b12_(b12, wxBITMAP_TYPE_XPM);
    wxBitmap b12_pressed(b12pressed, wxBITMAP_TYPE_XPM);
    card_12_button->SetBitmap(b12_);
    card_12_button->SetBitmapSelected(b12_pressed);

    wxBitmap b13_(b13, wxBITMAP_TYPE_XPM);
    wxBitmap b13_pressed(b13pressed, wxBITMAP_TYPE_XPM);
    card_13_button->SetBitmap(b13_);
    card_13_button->SetBitmapSelected(b13_pressed);

    wxBitmap b14_(b14, wxBITMAP_TYPE_XPM);
    wxBitmap b14_pressed(b14pressed, wxBITMAP_TYPE_XPM);
    card_14_button->SetBitmap(b14_);
    card_14_button->SetBitmapSelected(b14_pressed);

    wxBitmap b15_(b15, wxBITMAP_TYPE_XPM);
    wxBitmap b15_pressed(b15pressed, wxBITMAP_TYPE_XPM);
    card_15_button->SetBitmap(b15_);
    card_15_button->SetBitmapSelected(b15_pressed);

    wxBitmap b16_(b16, wxBITMAP_TYPE_XPM);
    wxBitmap b16_pressed(b16pressed, wxBITMAP_TYPE_XPM);
    card_16_button->SetBitmap(b16_);
    card_16_button->SetBitmapSelected(b16_pressed);

    wxBitmap b17_(b17, wxBITMAP_TYPE_XPM);
    wxBitmap b17_pressed(b17pressed, wxBITMAP_TYPE_XPM);
    card_17_button->SetBitmap(b17_);
    card_17_button->SetBitmapSelected(b17_pressed);

    wxBitmap b18_(b18, wxBITMAP_TYPE_XPM);
    wxBitmap b18_pressed(b18pressed, wxBITMAP_TYPE_XPM);
    card_18_button->SetBitmap(b18_);
    card_18_button->SetBitmapSelected(b18_pressed);

    wxBitmap b19_(b19, wxBITMAP_TYPE_XPM);
    wxBitmap b19_pressed(b19pressed, wxBITMAP_TYPE_XPM);
    card_19_button->SetBitmap(b19_);
    card_19_button->SetBitmapSelected(b19_pressed);

    wxBitmap b20_(b20, wxBITMAP_TYPE_XPM);
    wxBitmap b20_pressed(b20pressed, wxBITMAP_TYPE_XPM);
    card_20_button->SetBitmap(b20_);
    card_20_button->SetBitmapSelected(b20_pressed);

    wxBitmap b21_(b21, wxBITMAP_TYPE_XPM);
    wxBitmap b21_pressed(b21pressed, wxBITMAP_TYPE_XPM);
    card_21_button->SetBitmap(b21_);
    card_21_button->SetBitmapSelected(b21_pressed);

    wxBitmap b22_(b22, wxBITMAP_TYPE_XPM);
    wxBitmap b22_pressed(b22pressed, wxBITMAP_TYPE_XPM);
    card_22_button->SetBitmap(b22_);
    card_22_button->SetBitmapSelected(b22_pressed);

    wxBitmap b23_(b23, wxBITMAP_TYPE_XPM);
    wxBitmap b23_pressed(b23pressed, wxBITMAP_TYPE_XPM);
    card_23_button->SetBitmap(b23_);
    card_23_button->SetBitmapSelected(b23_pressed);

    wxBitmap b24_(b24, wxBITMAP_TYPE_XPM);
    wxBitmap b24_pressed(b24pressed, wxBITMAP_TYPE_XPM);
    card_24_button->SetBitmap(b24_);
    card_24_button->SetBitmapSelected(b24_pressed);

    wxBitmap row12_(row12, wxBITMAP_TYPE_XPM);
    wxBitmap row12_pressed(row12pressed, wxBITMAP_TYPE_XPM);
    row_12_button->SetBitmap(row12_);
    row_12_button->SetBitmapSelected(row12_pressed);

    wxBitmap row34_(row34, wxBITMAP_TYPE_XPM);
    wxBitmap row34_pressed(row34pressed, wxBITMAP_TYPE_XPM);
    row_34_button->SetBitmap(row34_);
    row_34_button->SetBitmapSelected(row34_pressed);

    wxBitmap row56_(row56, wxBITMAP_TYPE_XPM);
    wxBitmap row56_pressed(row56pressed, wxBITMAP_TYPE_XPM);
    row_56_button->SetBitmap(row56_);
    row_56_button->SetBitmapSelected(row56_pressed);

    wxBitmap row1_(row1, wxBITMAP_TYPE_XPM);
    wxBitmap row1_pressed(row1pressed, wxBITMAP_TYPE_XPM);
    row_1_button->SetBitmap(row1_);
    row_1_button->SetBitmapSelected(row1_pressed);

    wxBitmap row2_(row2, wxBITMAP_TYPE_XPM);
    wxBitmap row2_pressed(row2pressed, wxBITMAP_TYPE_XPM);
    row_2_button->SetBitmap(row2_);
    row_2_button->SetBitmapSelected(row2_pressed);

    wxBitmap row3_(row3, wxBITMAP_TYPE_XPM);
    wxBitmap row3_pressed(row3pressed, wxBITMAP_TYPE_XPM);
    row_3_button->SetBitmap(row3_);
    row_3_button->SetBitmapSelected(row3_pressed);

    wxBitmap row4_(row4, wxBITMAP_TYPE_XPM);
    wxBitmap row4_pressed(row4pressed, wxBITMAP_TYPE_XPM);
    row_4_button->SetBitmap(row4_);
    row_4_button->SetBitmapSelected(row4_pressed);

    wxBitmap row5_(row5, wxBITMAP_TYPE_XPM);
    wxBitmap row5_pressed(row5pressed, wxBITMAP_TYPE_XPM);
    row_5_button->SetBitmap(row5_);
    row_5_button->SetBitmapSelected(row5_pressed);

    wxBitmap row6_(row6, wxBITMAP_TYPE_XPM);
    wxBitmap row6_pressed(row6pressed, wxBITMAP_TYPE_XPM);
    row_6_button->SetBitmap(row6_);
    row_6_button->SetBitmapSelected(row6_pressed);

    wxBitmap drawcard_(drawcard, wxBITMAP_TYPE_XPM);
    wxBitmap drawcard_pressed(drawcardpressed, wxBITMAP_TYPE_XPM);
    draw_card_button->SetBitmap(drawcard_);
    draw_card_button->SetBitmapSelected(drawcard_pressed);

}

void CardFlipFrame::bindButtons() {
    col_12_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncol_12_buttonClick, this);
    col_34_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncol_34_buttonClick, this);
    col_1_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncol_1_buttonClick, this);
    col_2_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncol_2_buttonClick, this);
    col_3_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncol_3_buttonClick, this);
    col_4_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncol_4_buttonClick, this);

    card_1_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_1_buttonClick, this);
    card_2_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_2_buttonClick, this);
    card_3_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_3_buttonClick, this);
    card_4_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_4_buttonClick, this);
    card_5_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_5_buttonClick, this);
    card_6_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_6_buttonClick, this);
    card_7_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_7_buttonClick, this);
    card_8_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_8_buttonClick, this);
    card_9_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_9_buttonClick, this);
    card_10_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_10_buttonClick, this);
    card_11_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_11_buttonClick, this);
    card_12_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_12_buttonClick, this);
    card_13_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_13_buttonClick, this);
    card_14_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_14_buttonClick, this);
    card_15_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_15_buttonClick, this);
    card_16_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_16_buttonClick, this);
    card_17_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_17_buttonClick, this);
    card_18_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_18_buttonClick, this);
    card_19_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_19_buttonClick, this);
    card_20_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_20_buttonClick, this);
    card_21_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_21_buttonClick, this);
    card_22_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_22_buttonClick, this);
    card_23_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_23_buttonClick, this);
    card_24_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Oncard_24_buttonClick, this);

    row_12_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Onrow_12_buttonClick, this);
    row_34_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Onrow_34_buttonClick, this);
    row_56_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Onrow_56_buttonClick, this);
    row_1_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Onrow_1_buttonClick, this);
    row_2_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Onrow_2_buttonClick, this);
    row_3_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Onrow_3_buttonClick, this);
    row_4_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Onrow_4_buttonClick, this);
    row_5_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Onrow_5_buttonClick, this);
    row_6_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Onrow_6_buttonClick, this);

    draw_card_button->Bind(wxEVT_BUTTON, &CardFlipFrame::Ondraw_card_buttonClick, this);
}

CardFlipFrame::~CardFlipFrame()
{
    //(*Destroy(CardFlipFrame)
    //*)
}

void CardFlipFrame::OnNewGame(wxCommandEvent& event)
{
    wxArrayString difficulties;
    difficulties.Add("Normal");
    difficulties.Add("Hard");

    int choice = wxGetSingleChoiceIndex(
        "Message", "Caption", difficulties, 0);

    if (choice == -1) ; //do nothing
    else {
        resetGame(choice+1);
    }
}

void CardFlipFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void CardFlipFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = "CardFlip lasts for 12 rounds.\nEach round, use the buttons in the left area to bet on which card\nwill be drawn next.\nThe smaller the bet, the higher the payout.\nGood luck!";
    wxMessageBox(msg, _("How to play"));
}

void CardFlipFrame::resetGame(int difficulty) {
    setRoundLabel("##");
    setBetLabel("");
    setPayoutLabel("");
    setScore("0");
    setCPUBetLabel("");
    setCPUPayoutLabel("");
    setCPUScore("0");
    yourBetLabel->SetForegroundColour(wxColour(0,0,0));
    theirBetLabel->SetForegroundColour(wxColour(0,0,0));
    yourScoreLabel->SetForegroundColour(wxColour(0,0,0));
    theirScoreLabel->SetForegroundColour(wxColour(0,0,0));
    card_display->SetBitmap(cardImages[0]);
    game->reset(difficulty);
}

void CardFlipFrame::setRoundLabel(wxString str) {
    roundLabel->SetLabelText("Round " + str);
}

void CardFlipFrame::setBetLabel(wxString str) {
    yourBetLabel->SetLabelText("Your bet: " + str);
}
void CardFlipFrame::setCPUBetLabel(wxString str) {
    theirBetLabel->SetLabelText("Their bet: " + str);
}

void CardFlipFrame::setPayoutLabel(wxString str) {
    yourPayoutLabel->SetLabelText("Payout: " + str);
}
void CardFlipFrame::setCPUPayoutLabel(wxString str) {
    theirPayoutLabel->SetLabelText("Payout: " + str);
}

void CardFlipFrame::setScore(wxString str) {
    yourScoreLabel->SetLabelText("Score: " + str);
}
void CardFlipFrame::setCPUScore(wxString str) {
    theirScoreLabel->SetLabelText("Score: " + str);
}

void CardFlipFrame::updateCPUBet(pair<int,int> info) {
    setCPUBetLabel(betNames[info.first]);
    setCPUPayoutLabel(wxString::Format(wxT("%i"),info.second));
}

void CardFlipFrame::updateScores() {
    pair<int, int> scores = game->getScores();
    setScore(wxString::Format(wxT("%i"),scores.first));
    setCPUScore(wxString::Format(wxT("%i"),scores.second));

    if(scores.first > scores.second) { //Player is winning
        yourScoreLabel->SetForegroundColour(wxColour(0,0,0));
        theirScoreLabel->SetForegroundColour(wxColour(100,100,100));
    }
    else if(scores.second > scores.first) { //CPU is winning
        yourScoreLabel->SetForegroundColour(wxColour(100,100,100));
        theirScoreLabel->SetForegroundColour(wxColour(0,0,0));
    }
    else { //It's a tie
        yourScoreLabel->SetForegroundColour(wxColour(0,0,0));
        theirScoreLabel->SetForegroundColour(wxColour(0,0,0));
    }
}

void CardFlipFrame::updateCardDisplay(int cardID) {
    card_display->SetBitmap(cardImages.at(cardID));
}

void CardFlipFrame::Oncol_12_buttonClick(wxCommandEvent& event){
    betCode = 38;
    setBetLabel(betNames[38]);
    setPayoutLabel("2");
}
void CardFlipFrame::Oncol_34_buttonClick(wxCommandEvent& event){
    betCode = 39;
    setBetLabel(betNames[39]);
    setPayoutLabel("2");
}
void CardFlipFrame::Oncol_1_buttonClick(wxCommandEvent& event){
    betCode = 31;
    setBetLabel(betNames[31]);
    setPayoutLabel("4");
}
void CardFlipFrame::Oncol_2_buttonClick(wxCommandEvent& event){
    betCode = 32;
    setBetLabel(betNames[32]);
    setPayoutLabel("4");
}
void CardFlipFrame::Oncol_3_buttonClick(wxCommandEvent& event){
    betCode = 33;
    setBetLabel(betNames[33]);
    setPayoutLabel("4");
}
void CardFlipFrame::Oncol_4_buttonClick(wxCommandEvent& event){
    betCode = 34;
    setBetLabel(betNames[34]);
    setPayoutLabel("4");
}
void CardFlipFrame::Oncard_1_buttonClick(wxCommandEvent& event){
    betCode = 1;
    setBetLabel(betNames[1]);
    setPayoutLabel("24");

}
void CardFlipFrame::Oncard_2_buttonClick(wxCommandEvent& event){
    betCode = 2;
    setBetLabel(betNames[2]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_3_buttonClick(wxCommandEvent& event){
    betCode = 3;
    setBetLabel(betNames[3]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_4_buttonClick(wxCommandEvent& event){
    betCode = 4;
    setBetLabel(betNames[4]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_5_buttonClick(wxCommandEvent& event){
    betCode = 5;
    setBetLabel(betNames[5]);
    setPayoutLabel("24");
}

void CardFlipFrame::Oncard_6_buttonClick(wxCommandEvent& event){
    betCode = 6;
    setBetLabel(betNames[6]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_7_buttonClick(wxCommandEvent& event){
    betCode = 7;
    setBetLabel(betNames[7]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_8_buttonClick(wxCommandEvent& event){
    betCode = 8;
    setBetLabel(betNames[8]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_9_buttonClick(wxCommandEvent& event){
    betCode = 9;
    setBetLabel(betNames[9]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_10_buttonClick(wxCommandEvent& event){
    betCode = 10;
    setBetLabel(betNames[10]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_11_buttonClick(wxCommandEvent& event){
    betCode = 11;
    setBetLabel(betNames[11]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_12_buttonClick(wxCommandEvent& event){
    betCode = 12;
    setBetLabel(betNames[12]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_13_buttonClick(wxCommandEvent& event){
    betCode = 13;
    setBetLabel(betNames[13]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_14_buttonClick(wxCommandEvent& event){
    betCode = 14;
    setBetLabel(betNames[14]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_15_buttonClick(wxCommandEvent& event){
    betCode = 15;
    setBetLabel(betNames[15]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_16_buttonClick(wxCommandEvent& event){
    betCode = 16;
    setBetLabel(betNames[16]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_17_buttonClick(wxCommandEvent& event){
    betCode = 17;
    setBetLabel(betNames[17]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_18_buttonClick(wxCommandEvent& event){
    betCode = 18;
    setBetLabel(betNames[18]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_19_buttonClick(wxCommandEvent& event){
    betCode = 19;
    setBetLabel(betNames[19]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_20_buttonClick(wxCommandEvent& event){
    betCode = 20;
    setBetLabel(betNames[20]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_21_buttonClick(wxCommandEvent& event){
    betCode = 21;
    setBetLabel(betNames[21]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_22_buttonClick(wxCommandEvent& event){
    betCode = 22;
    setBetLabel(betNames[22]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_23_buttonClick(wxCommandEvent& event){
    betCode = 23;
    setBetLabel(betNames[23]);
    setPayoutLabel("24");
}
void CardFlipFrame::Oncard_24_buttonClick(wxCommandEvent& event){
    betCode = 24;
    setBetLabel(betNames[24]);
    setPayoutLabel("24");
}

void CardFlipFrame::Onrow_12_buttonClick(wxCommandEvent& event){
    betCode = 35;
    setBetLabel(betNames[35]);
    setPayoutLabel("3");
}
void CardFlipFrame::Onrow_34_buttonClick(wxCommandEvent& event){
    betCode = 36;
    setBetLabel(betNames[36]);
    setPayoutLabel("3");
}
void CardFlipFrame::Onrow_56_buttonClick(wxCommandEvent& event){
    betCode = 37;
    setBetLabel(betNames[37]);
    setPayoutLabel("3");
}
void CardFlipFrame::Onrow_1_buttonClick(wxCommandEvent& event){
    betCode = 25;
    setBetLabel(betNames[25]);
    setPayoutLabel("6");
}
void CardFlipFrame::Onrow_2_buttonClick(wxCommandEvent& event){
    betCode = 26;
    setBetLabel(betNames[26]);
    setPayoutLabel("6");
}
void CardFlipFrame::Onrow_3_buttonClick(wxCommandEvent& event){
    betCode = 27;
    setBetLabel(betNames[27]);
    setPayoutLabel("6");
}
void CardFlipFrame::Onrow_4_buttonClick(wxCommandEvent& event){
    betCode = 28;
    setBetLabel(betNames[28]);
    setPayoutLabel("6");
}
void CardFlipFrame::Onrow_5_buttonClick(wxCommandEvent& event){
    betCode = 29;
    setBetLabel(betNames[29]);
    setPayoutLabel("6");
}
void CardFlipFrame::Onrow_6_buttonClick(wxCommandEvent& event){
    betCode = 30;
    setBetLabel(betNames[30]);
    setPayoutLabel("6");
}

void CardFlipFrame::Ondraw_card_buttonClick(wxCommandEvent& event) {
    int round = game->getRound();
    if(round < 13) {
        if(round<10)
            setRoundLabel(wxString::Format(wxT(" %i"),round));
        else
            setRoundLabel(wxString::Format(wxT("%i"),round));
        int cardID = game->getCard().getID();
        updateCardDisplay(cardID);
        pair<bool,bool> winStatus = game->playRound(betCode);

        updateCPUBet(game->getCPUBetInfo());
        updateScores();
        if (winStatus.first) { //player's bet was correct
            yourBetLabel->SetForegroundColour(wxColour(0,102,204));
            yourBetLabel->Refresh();
        }
        else {
            yourBetLabel->SetForegroundColour(wxColour(0,0,0));
            yourBetLabel->Refresh();
        }

        if (winStatus.second) { //computer's bet was correct
            theirBetLabel->SetForegroundColour(wxColour(0,102,204));
            theirBetLabel->Refresh();
        }
        else {
            theirBetLabel->SetForegroundColour(wxColour(0,0,0));
            theirBetLabel->Refresh();
        }
        /* for debug
        pair<int,int> temp = game->getCPUBetInfo();
        msg += wxString::Format(wxT("\nPlayer bet: %i"), betCode);
        msg += wxString::Format(wxT("\nComputer bet: %i"), temp.first);
        if(winStatus.first)  msg += "\nPlayer won!";
        if(winStatus.second) msg += "\nComputer won!";
        wxMessageBox(msg, _("  This round"));*/

    }
    else {
        wxString msg = "Each game is only 12 rounds. Start a new game\nfrom the menu to keep playing.";
        wxMessageBox(msg, _("  Sorry!"));
    }
}
