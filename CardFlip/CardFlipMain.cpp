/***************************************************************
 * Name:      CardFlipMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2021-11-23
 * Copyright:  ()
 * License:
 **************************************************************/

#include "images/ImageHeader.h"
#include "CardFlipMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(CardFlipFrame)
#include <wx/bitmap.h>
#include <wx/image.h>
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
const long CardFlipFrame::ID_BITMAPBUTTON18 = wxNewId();
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
    wxBoxSizer* cardSizer;
    wxBoxSizer* colSizer1;
    wxBoxSizer* colSizer2;
    wxBoxSizer* firstSizer1;
    wxBoxSizer* firstSizer2;
    wxBoxSizer* firstSizer;
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
    wxStaticBoxSizer* cpuBoxSizer;
    wxStaticBoxSizer* youBoxSizer;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    outerSizer = new wxBoxSizer(wxHORIZONTAL);
    leftSizer = new wxBoxSizer(wxVERTICAL);
    firstSizer = new wxBoxSizer(wxHORIZONTAL);
    payoutImage = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\drizi\\Documents\\GitHub\\CardFlip-Game\\CardFlip\\images\\payout_info.png"))), wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
    firstSizer->Add(payoutImage, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    firstSizer1 = new wxBoxSizer(wxVERTICAL);
    col_12_button = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    firstSizer1->Add(col_12_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
    colSizer1 = new wxBoxSizer(wxHORIZONTAL);
    col_1_button = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
    colSizer1->Add(col_1_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    col_2_button = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
    colSizer1->Add(col_2_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    firstSizer1->Add(colSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    firstSizer->Add(firstSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    firstSizer2 = new wxBoxSizer(wxVERTICAL);
    col_34_button = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    firstSizer2->Add(col_34_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
    colSizer2 = new wxBoxSizer(wxHORIZONTAL);
    col_3_button = new wxBitmapButton(this, ID_BITMAPBUTTON5, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
    colSizer2->Add(col_3_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    col_4_button = new wxBitmapButton(this, ID_BITMAPBUTTON6, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
    colSizer2->Add(col_4_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    firstSizer2->Add(colSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    firstSizer->Add(firstSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    leftSizer->Add(firstSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer = new wxBoxSizer(wxHORIZONTAL);
    secondSizer1 = new wxBoxSizer(wxHORIZONTAL);
    row_12_button = new wxBitmapButton(this, ID_BITMAPBUTTON7, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
    secondSizer1->Add(row_12_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
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
    BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON12, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON12"));
    secondSizer4->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton4 = new wxBitmapButton(this, ID_BITMAPBUTTON13, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON13"));
    secondSizer4->Add(BitmapButton4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer->Add(secondSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer5 = new wxBoxSizer(wxVERTICAL);
    BitmapButton5 = new wxBitmapButton(this, ID_BITMAPBUTTON14, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON14"));
    secondSizer5->Add(BitmapButton5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton6 = new wxBitmapButton(this, ID_BITMAPBUTTON15, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON15"));
    secondSizer5->Add(BitmapButton6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer->Add(secondSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer6 = new wxBoxSizer(wxVERTICAL);
    BitmapButton7 = new wxBitmapButton(this, ID_BITMAPBUTTON16, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON16"));
    secondSizer6->Add(BitmapButton7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton8 = new wxBitmapButton(this, ID_BITMAPBUTTON17, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON17"));
    secondSizer6->Add(BitmapButton8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    secondSizer->Add(secondSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    leftSizer->Add(secondSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer = new wxBoxSizer(wxHORIZONTAL);
    thirdSizer1 = new wxBoxSizer(wxHORIZONTAL);
    BitmapButton2 = new wxBitmapButton(this, ID_BITMAPBUTTON18, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON18"));
    thirdSizer1->Add(BitmapButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer->Add(thirdSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer2 = new wxBoxSizer(wxVERTICAL);
    BitmapButton3 = new wxBitmapButton(this, ID_BITMAPBUTTON19, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON19"));
    thirdSizer2->Add(BitmapButton3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton9 = new wxBitmapButton(this, ID_BITMAPBUTTON20, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON20"));
    thirdSizer2->Add(BitmapButton9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer->Add(thirdSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer3 = new wxBoxSizer(wxVERTICAL);
    BitmapButton10 = new wxBitmapButton(this, ID_BITMAPBUTTON21, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON21"));
    thirdSizer3->Add(BitmapButton10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton11 = new wxBitmapButton(this, ID_BITMAPBUTTON22, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON22"));
    thirdSizer3->Add(BitmapButton11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer->Add(thirdSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer4 = new wxBoxSizer(wxVERTICAL);
    BitmapButton12 = new wxBitmapButton(this, ID_BITMAPBUTTON23, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON23"));
    thirdSizer4->Add(BitmapButton12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton13 = new wxBitmapButton(this, ID_BITMAPBUTTON24, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON24"));
    thirdSizer4->Add(BitmapButton13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer->Add(thirdSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer5 = new wxBoxSizer(wxVERTICAL);
    BitmapButton14 = new wxBitmapButton(this, ID_BITMAPBUTTON25, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON25"));
    thirdSizer5->Add(BitmapButton14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton15 = new wxBitmapButton(this, ID_BITMAPBUTTON26, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON26"));
    thirdSizer5->Add(BitmapButton15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer->Add(thirdSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer6 = new wxBoxSizer(wxVERTICAL);
    BitmapButton16 = new wxBitmapButton(this, ID_BITMAPBUTTON27, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON27"));
    thirdSizer6->Add(BitmapButton16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton17 = new wxBitmapButton(this, ID_BITMAPBUTTON28, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON28"));
    thirdSizer6->Add(BitmapButton17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    thirdSizer->Add(thirdSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    leftSizer->Add(thirdSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    fourthSizer = new wxBoxSizer(wxHORIZONTAL);
    leftSizer->Add(fourthSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    outerSizer->Add(leftSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    rightSizer = new wxBoxSizer(wxVERTICAL);
    youBoxSizer = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Label"));
    rightSizer->Add(youBoxSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    cardSizer = new wxBoxSizer(wxHORIZONTAL);
    rightSizer->Add(cardSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    cpuBoxSizer = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Label"));
    rightSizer->Add(cpuBoxSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    outerSizer->Add(rightSizer, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(outerSizer);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    outerSizer->Fit(this);
    outerSizer->SetSizeHints(this);

    Connect(ID_BITMAPBUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CardFlipFrame::Oncard_5_buttonClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&CardFlipFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&CardFlipFrame::OnAbout);
    //*)

    wxBitmap col_12(col12, wxBITMAP_TYPE_XPM);
    wxBitmap col_12_pressed(col12_pressed, wxBITMAP_TYPE_XPM);
    col_12_button->SetBitmap(col_12);
    col_12_button->SetBitmapSelected(col_12_pressed);
}

CardFlipFrame::~CardFlipFrame()
{
    //(*Destroy(CardFlipFrame)
    //*)
}

void CardFlipFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void CardFlipFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void CardFlipFrame::Oncard_5_buttonClick(wxCommandEvent& event)
{
}
