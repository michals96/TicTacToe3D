

#include "noname.h"

MyFrame1::MyFrame1(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	wxInitAllImageHandlers();
	wxBoxSizer* bSizer47;

	bSizer47 = new wxBoxSizer(wxHORIZONTAL);

	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer(wxHORIZONTAL);

	m_panel18 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_panel18->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT));

	bSizer70->Add(m_panel18, 4, wxEXPAND | wxALL, 5);

	wxBoxSizer* bSizer72;
	bSizer72 = new wxBoxSizer(wxVERTICAL);

	wxStaticText *titleTextPart1 = new  wxStaticText(this, -1, wxT("Kolko i Krzyzyk"));
	titleTextPart1->SetFont(wxFont(18, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD));
	titleTextPart1->SetForegroundColour(wxColour(13, 132, 123));

	wxStaticText *titleText = new  wxStaticText(this, -1, wxT("3D"));
	titleText->SetFont(wxFont(40, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD));
	titleText->SetForegroundColour(wxColour(13, 132, 200));

	

	bSizer72->Add(titleTextPart1, 0, wxALIGN_CENTER | wxALL, 10);
	bSizer72->Add(titleText, 0, wxALIGN_CENTER | wxALL, 10);

	scoreX = scoreO = scoreTies = 0;

	player = new wxTextCtrl(this, ID_TP, wxT(" Gracz: Pierwszy (O) "), wxPoint(-1, -1), wxSize(-1, -1), wxTE_CENTER | wxTE_READONLY);
	score = new wxTextCtrl(this, ID_TS, wxT("Wynik: Gracz O = 0  ||  Gracz X = 0  ||  Remisy = 0"), wxPoint(-1, -1), wxSize(-1, -1), wxTE_CENTER | wxTE_READONLY);
	cCo = new wxCheckBox(this, ID_CCO, wxT("Komputerowy przeciwnik"), wxPoint(-1, -1));
	bNew = new wxButton(this, ID_BNG, wxT("Nowa Gra"));



	wxFont df = wxFont(40, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
	wxFont dbf = wxFont(13, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
	wxFont scoreFont = wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);

	score->SetFont(scoreFont);
	score->SetForegroundColour(wxColour(80, 80, 80));
	player->SetForegroundColour(wxColour(80, 180, 100));
	player->SetFont(dbf);
	bNew->SetFont(dbf);
	cCo->SetFont(dbf);

	bSizer72->Add(score, 0, wxEXPAND | wxALL, 10);
	bSizer72->Add(player, 0, wxEXPAND | wxALL, 10);
	bSizer72->Add(cCo, 0, wxALIGN_CENTER | wxALL, 10);
	bSizer72->Add(bNew, 0, wxALIGN_CENTER | wxALL, 10);
	wxStaticText *Legend1 = new  wxStaticText(this, -1, wxT("Sterowanie : Strzałki w obrębie warstwy"));
	wxStaticText *Legend2 = new  wxStaticText(this, -1, wxT("PageUp, PageDown do poruszania pomiędzy warstwami"));
	wxStaticText *Legend3 = new  wxStaticText(this, -1, wxT("Spacja do wstawiania obiektu"));
	wxStaticText *Authors1 = new  wxStaticText(this, -1, wxT("Autor"));
	wxStaticText *Authors2 = new  wxStaticText(this, -1, wxT("Michał Stefaniuk"));

	Legend1->SetFont(wxFont(15, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD));
	Legend1->SetForegroundColour(wxColour(0, 0, 0));
	Legend2->SetFont(wxFont(15, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD));
	Legend2->SetForegroundColour(wxColour(0, 0, 0));
	Legend3->SetFont(wxFont(15, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD));
	Legend3->SetForegroundColour(wxColour(0, 0, 0));
	Authors1->SetFont(wxFont(15, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
	Authors1->SetForegroundColour(wxColour(0, 0, 0));
	Authors2->SetFont(wxFont(12, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
	Authors2->SetForegroundColour(wxColour(0, 0, 0));
	bSizer72->Add(Legend1, 0, wxALIGN_LEFT | wxALL, 10);
	bSizer72->Add(Legend2, 0, wxALIGN_LEFT | wxALL, 10);
	bSizer72->Add(Legend3, 0, wxALIGN_LEFT | wxALL, 10);
	bSizer72->Add(Authors1, 0, wxALIGN_RIGHT | wxALL, 10);
	bSizer72->Add(Authors2, 0, wxALIGN_RIGHT | wxALL, 10);

	bSizer70->Add(bSizer72, 2, wxEXPAND, 5);

	bSizer47->Add(bSizer70, 1, wxEXPAND, 5);
	//Bind(wxEVT_MOTION, &MyFrame1::Mouse_Move, this);
	Bind(wxEVT_CHAR_HOOK, &MyFrame1::Keyboard, this);
	Bind(wxEVT_MOTION, &MyFrame1::MouseMove, this);
	Connect(ID_BNG, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::NewGame));
	Connect(ID_CCO, wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MyFrame1::Komputer));

	this->SetSizer(bSizer47);
	this->Layout();

	this->Centre(wxBOTH);
	WxOpenFileDialog1 = new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_OPEN);
	WxColourDialog1 = new wxColourDialog(this);
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events

}


