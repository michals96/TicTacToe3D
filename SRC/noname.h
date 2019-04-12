#ifndef __NONAME_H__
#define __NONAME_H__
#include <wx/colordlg.h>
#include <wx/dcbuffer.h>
#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/timer.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/slider.h>
#include <wx/gauge.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/frame.h>
#include <wx/filedlg.h>
#include <wx/scrolbar.h>



///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
private:
	wxFileDialog *WxOpenFileDialog1;
	wxBitmap MyBitmap;
	wxImage  MyImage;
	wxColourData KolorGwiazdki;
	wxColourDialog *WxColourDialog1;
	wxBitmap *saveIMG;
	wxBitmap bitmap1;
	wxBitmap bitmap2;
	wxImage kolko;
	wxImage iks;
	wxTimer m_timer;



protected:
	wxPanel* m_panel18;
	wxButton* m_button44;
	wxCheckBox* m_checkBox8;
	wxStaticText* m_staticText3;
	wxScrollBar* m_scrollBar1;
	wxGauge* m_gauge2;
	wxButton* m_button46;
	wxTextCtrl* m_textCtrl2;
	wxChoice* m_choice2;
	virtual void Refresh();
	virtual void Keyboard(wxKeyEvent & s);
	virtual void NewGame(wxCommandEvent& event);
	virtual void CzyWygral();
	virtual bool Remis();
	virtual void UpdateScore();
	virtual void Komputer(wxCommandEvent& event);
	virtual void MouseMove(wxMouseEvent & e);

public:
	MyFrame1(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Projekt GFK"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(1600, 900), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
	wxTextCtrl *player;
	wxTextCtrl *score;
	int scoreX=0, scoreO=0, scoreTies=0;
	wxCheckBox *cCo;
	wxButton *bNew;
	int layer = 0;
	int pole = 0;
	int gracz = 1;
	int koniec = 0;
	int poczatek = 0;
	int komputer = 0;
	~MyFrame1();
private:
	void OnClose(wxCloseEvent& event);


};



const int ID_TP = 100;
const int ID_TS = 101;
const int ID_BNG = 102;
const int ID_CCO = 106;

#endif //__NONAME_H__