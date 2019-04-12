#include "noname.h"
#include <iostream>
#include <time.h>
#include <wx/wx.h>
#include <wx/filedlg.h>
#include <wx/timer.h>
#include <wx/colordlg.h>
#include "GUIMyFrame1.h"

int Co_Jest[3][9];

GUIMyFrame1::GUIMyFrame1(wxWindow* parent)
	:
	MyFrame1(parent)
{
	SetMinSize(wxSize(1600, 900));
	SetMaxSize(wxSize(1600, 900));
}



class MyApp : public wxApp {

public:

	virtual bool OnInit();
	virtual int OnExit() { return 0; }

};

IMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
	wxFrame *mainFrame = new GUIMyFrame1(NULL);
	mainFrame->Show(true);
	SetTopWindow(mainFrame);
	//mainFrame->Refresh();
	return true;
}


void MyFrame1::OnClose(wxCloseEvent& event)
{
	Destroy();
}
void MyFrame1::Refresh()
{
	wxClientDC dc1(this->m_panel18);
	wxBufferedDC dc(&dc1);
	dc.SetBrush(*wxBLACK_BRUSH);
	PrepareDC(dc);

	dc.Clear();
	dc.SetPen(wxColor(0,200,250));
	dc.SetBrush(wxColor(0, 150, 250));
	dc.DrawRectangle(0, 0,1200,900);

	dc.SetPen(*wxBLACK_PEN);
	//Trzy osobne 
	if (Co_Jest[0][0] == 1)
	{
		dc.DrawBitmap(bitmap1, 275, 35, 1);
	}
	if (Co_Jest[0][0] == 2)
	{
		dc.DrawBitmap(bitmap2, 275, 35, 1);
	}
	if (Co_Jest[0][1] == 1)
	{
		dc.DrawBitmap(bitmap1, 340, 55, 1);
	}
	if (Co_Jest[0][1] == 2)
	{
		dc.DrawBitmap(bitmap2, 340, 55, 1);
	}
	if (Co_Jest[0][2] == 1)
	{
		dc.DrawBitmap(bitmap1, 420, 90, 1);
	}
	if (Co_Jest[0][2] == 2)
	{
		dc.DrawBitmap(bitmap2, 420, 90, 1);
	}
	if (Co_Jest[0][3] == 1)
	{
		dc.DrawBitmap(bitmap1, 210, 55, 1);
	}
	if (Co_Jest[0][3] == 2)
	{
		dc.DrawBitmap(bitmap2, 210, 55, 1);
	}
	if (Co_Jest[0][4] == 1)
	{
		dc.DrawBitmap(bitmap1, 275, 90, 1);
	}
	if (Co_Jest[0][4] == 2)
	{
		dc.DrawBitmap(bitmap2, 275, 90, 1);
	}

	if (Co_Jest[0][5] == 1)
	{
		dc.DrawBitmap(bitmap1, 350, 130, 1);
	}
	if (Co_Jest[0][5] == 2)
	{
		dc.DrawBitmap(bitmap2, 350, 130, 1);
	}
	if (Co_Jest[0][6] == 1)
	{
		dc.DrawBitmap(bitmap1, 140, 100, 1);
	}
	if (Co_Jest[0][6] == 2)
	{
		dc.DrawBitmap(bitmap2, 140, 100, 1);
	}
	if (Co_Jest[0][7] == 1)
	{
		dc.DrawBitmap(bitmap1, 200, 135, 1);
	}
	if (Co_Jest[0][7] == 2)
	{
		dc.DrawBitmap(bitmap2, 200, 135, 1);
	}

	if (Co_Jest[0][8] == 1)
	{
		dc.DrawBitmap(bitmap1, 280, 160, 1);
	}
	if (Co_Jest[0][8] == 2)
	{
		dc.DrawBitmap(bitmap2, 280, 160, 1);
	}

	if (Co_Jest[1][0] == 1)
	{
		dc.DrawBitmap(bitmap1, 275, 35+250, 1);
	}
	if (Co_Jest[1][0] == 2)
	{
		dc.DrawBitmap(bitmap2, 275, 35 + 250, 1);
	}
	if (Co_Jest[1][1] == 1)
	{
		dc.DrawBitmap(bitmap1, 340, 55 + 250, 1);
	}
	if (Co_Jest[1][1] == 2)
	{
		dc.DrawBitmap(bitmap2, 340, 55 + 250, 1);
	}
	if (Co_Jest[1][2] == 1)
	{
		dc.DrawBitmap(bitmap1, 420, 90 + 250, 1);
	}
	if (Co_Jest[1][2] == 2)
	{
		dc.DrawBitmap(bitmap2, 420, 90 + 250, 1);
	}
	if (Co_Jest[1][3] == 1)
	{
		dc.DrawBitmap(bitmap1, 210, 55 + 250, 1);
	}
	if (Co_Jest[1][3] == 2)
	{
		dc.DrawBitmap(bitmap2, 210, 55 + 250, 1);
	}
	if (Co_Jest[1][4] == 1)
	{
		dc.DrawBitmap(bitmap1, 275, 90 + 250, 1);
	}
	if (Co_Jest[1][4] == 2)
	{
		dc.DrawBitmap(bitmap2, 275, 90 + 250, 1);
	}

	if (Co_Jest[1][5] == 1)
	{
		dc.DrawBitmap(bitmap1, 350, 130 + 250, 1);
	}
	if (Co_Jest[1][5] == 2)
	{
		dc.DrawBitmap(bitmap2, 350, 130 + 250, 1);
	}
	if (Co_Jest[1][6] == 1)
	{
		dc.DrawBitmap(bitmap1, 140, 100 + 250, 1);
	}
	if (Co_Jest[1][6] == 2)
	{
		dc.DrawBitmap(bitmap2, 140, 100 + 250, 1);
	}
	if (Co_Jest[1][7] == 1)
	{
		dc.DrawBitmap(bitmap1, 200, 135 + 250, 1);
	}
	if (Co_Jest[1][7] == 2)
	{
		dc.DrawBitmap(bitmap2, 200, 135 + 250, 1);
	}

	if (Co_Jest[1][8] == 1)
	{
		dc.DrawBitmap(bitmap1, 280, 160 + 250, 1);
	}
	if (Co_Jest[1][8] == 2)
	{
		dc.DrawBitmap(bitmap2, 280, 160 + 250, 1);
	}

	if (Co_Jest[2][0] == 1)
	{
		dc.DrawBitmap(bitmap1, 275, 35 + 500, 1);
	}
	if (Co_Jest[2][0] == 2)
	{
		dc.DrawBitmap(bitmap2, 275, 35 + 500, 1);
	}
	if (Co_Jest[2][1] == 1)
	{
		dc.DrawBitmap(bitmap1, 340, 55 + 500, 1);
	}
	if (Co_Jest[2][1] == 2)
	{
		dc.DrawBitmap(bitmap2, 340, 55 + 500, 1);
	}
	if (Co_Jest[2][2] == 1)
	{
		dc.DrawBitmap(bitmap1, 420, 90 + 500, 1);
	}
	if (Co_Jest[2][2] == 2)
	{
		dc.DrawBitmap(bitmap2, 420, 90 + 500, 1);
	}
	if (Co_Jest[2][3] == 1)
	{
		dc.DrawBitmap(bitmap1, 210, 55 + 500, 1);
	}
	if (Co_Jest[2][3] == 2)
	{
		dc.DrawBitmap(bitmap2, 210, 55 + 500, 1);
	}
	if (Co_Jest[2][4] == 1)
	{
		dc.DrawBitmap(bitmap1, 275, 90 + 500, 1);
	}
	if (Co_Jest[2][4] == 2)
	{
		dc.DrawBitmap(bitmap2, 275, 90 + 500, 1);
	}

	if (Co_Jest[2][5] == 1)
	{
		dc.DrawBitmap(bitmap1, 350, 130 + 500, 1);
	}
	if (Co_Jest[2][5] == 2)
	{
		dc.DrawBitmap(bitmap2, 350, 130 + 500, 1);
	}
	if (Co_Jest[2][6] == 1)
	{
		dc.DrawBitmap(bitmap1, 140, 100 + 500, 1);
	}
	if (Co_Jest[2][6] == 2)
	{
		dc.DrawBitmap(bitmap2, 140, 100 + 500, 1);
	}
	if (Co_Jest[2][7] == 1)
	{
		dc.DrawBitmap(bitmap1, 200, 135 + 500, 1);
	}
	if (Co_Jest[2][7] == 2)
	{
		dc.DrawBitmap(bitmap2, 200, 135 + 500, 1);
	}

	if (Co_Jest[2][8] == 1)
	{
		dc.DrawBitmap(bitmap1, 280, 160 + 500, 1);
	}
	if (Co_Jest[2][8] == 2)
	{
		dc.DrawBitmap(bitmap2, 280, 160 + 500, 1);
	}


	dc.DrawLine(300, 25,100, 100);
	dc.DrawLine(600/2, 50 / 2, 1000 / 2, 200 / 2);
	dc.DrawLine(100, 100, 300, 175);
	dc.DrawLine(1000 / 2, 200 / 2, 600 / 2, 350 / 2);
	dc.DrawLine(467 / 2, 300 / 2, 867 / 2, 150 / 2);
	dc.DrawLine(334 / 2, 250 / 2, 734 / 2, 100 / 2);
	dc.DrawLine(734 / 2, 300 / 2, 334 / 2, 150 / 2);
	dc.DrawLine(867 / 2, 250 / 2, 467 / 2, 100 / 2);
	dc.DrawLine(100, 100, 100, 158);
	dc.DrawLine(300, 233, 100, 158);
	dc.DrawLine(300, 233, 500, 158);
	dc.DrawLine(500, 100, 500, 158);
	dc.DrawLine(167, 125, 167, 183);
	dc.DrawLine(233, 150, 233, 208);
	dc.DrawLine(300, 175, 300, 233);
	dc.DrawLine(367, 150, 367, 208);
	dc.DrawLine(433, 125, 433, 183);



	dc.DrawLine(600/2, 350 / 2 + 100, 200 / 2 , 500 / 2 + 100);
	dc.DrawLine(600 / 2 , 350 / 2 + 100, 1000 / 2 , 500 / 2 + 100);
	dc.DrawLine(200 / 2 , 500 / 2 + 100, 600 / 2 , 650 / 2 + 100);
	dc.DrawLine(1000 / 2 , 500 / 2 + 100, 600 / 2 , 650 / 2 + 100);
	dc.DrawLine(467 / 2 , 600 / 2 + 100, 867 / 2 , 450 / 2 + 100);
	dc.DrawLine(334 / 2 , 550 / 2 + 100, 734 / 2 , 400 / 2 + 100);
	dc.DrawLine(734 / 2 , 600 / 2 + 100, 334 / 2, 450 / 2 + 100);
	dc.DrawLine(867 / 2 , 550 / 2 + 100, 467 / 2 , 400 / 2 + 100);

	dc.DrawLine(100, 100+250, 100, 158 + 250);
	dc.DrawLine(300, 233 + 250, 100, 158 + 250);
	dc.DrawLine(300, 233 + 250, 500, 158 + 250);
	dc.DrawLine(500, 100 + 250, 500, 158 + 250);
	dc.DrawLine(167, 125 + 250, 167, 183 + 250);
	dc.DrawLine(233, 150 + 250, 233, 208 + 250);
	dc.DrawLine(300, 175 + 250, 300, 233 + 250);
	dc.DrawLine(367, 150 + 250, 367, 208 + 250);
	dc.DrawLine(433, 125 + 250, 433, 183 + 250);

	dc.DrawLine(600/2, 650 / 2+ 200, 200 / 2, 800 / 2 + 200);
	dc.DrawLine(600 / 2, 650 / 2 + 200, 1000 / 2, 800 / 2 + 200);
	dc.DrawLine(200 / 2, 800 / 2 + 200, 600 / 2, 950 / 2 + 200);
	dc.DrawLine(1000 / 2, 800 / 2 + 200, 600 / 2, 950 / 2 + 200);
	dc.DrawLine(467 / 2, 900 / 2 + 200, 867 / 2, 750 / 2 + 200);
	dc.DrawLine(334 / 2, 850 / 2 + 200, 734 / 2, 700 / 2 + 200);
	dc.DrawLine(734 / 2, 900 / 2 + 200, 334 / 2, 750 / 2 + 200);
	dc.DrawLine(867 / 2, 850 / 2 + 200, 467 / 2, 700 / 2 + 200);

	dc.DrawLine(100, 100+500, 100, 158 + 500);
	dc.DrawLine(300, 233 + 500, 100, 158 + 500);
	dc.DrawLine(300, 233 + 500, 500, 158 + 500);
	dc.DrawLine(500, 100 + 500, 500, 158 + 500);
	dc.DrawLine(167, 125 + 500, 167, 183 + 500);
	dc.DrawLine(233, 150 + 500, 233, 208 + 500);
	dc.DrawLine(300, 175 + 500, 300, 233 + 500);
	dc.DrawLine(367, 150 + 500, 367, 208 + 500);
	dc.DrawLine(433, 125 + 500, 433, 183 + 500);
	
	dc.SetPen(wxPen(wxColor(0, 0, 0), 5));
	if (layer == 0)
	{
		double x = 200 / 3, y = 25;
		if (pole == 0)
		{
			dc.DrawLine(100 + 2*x, 50, 100 + 3 * x, 75);
			dc.DrawLine(100 + 3 * x, 75, 100 + 4 * x, 50);
			dc.DrawLine(100 + 4 * x, 50, 100 + 3 * x, 25);
			dc.DrawLine(100 + 3 * x, 25, 100 + 2*x, 50);
		}
		if (pole == 1)
		{
			dc.DrawLine(100 + 3 * x, 75, 100 + 4 * x, 100);
			dc.DrawLine(100 + 4 * x, 100, 100 + 5 * x, 75);
			dc.DrawLine(100 + 5 * x, 75, 100 + 4 * x, 50);
			dc.DrawLine(100 + 4 * x, 50, 100 + 3 * x, 75);
		}
		if (pole == 2)
		{
			dc.DrawLine(100 + 4 * x, 100, 100 + 5 * x, 125);
			dc.DrawLine(100 + 5 * x, 125, 100 + 6 * x, 100);
			dc.DrawLine(100 +6 * x, 100, 100 + 5 * x, 75);
			dc.DrawLine(100 + 5 * x, 75, 100 + 4 * x, 100);
		}
		if (pole == 3)
		{
			dc.DrawLine(100+x, 75, 100 + 2*x, 100);
			dc.DrawLine(100 + 2*x, 100, 100 + 3*x, 75);
			dc.DrawLine(100 + 3*x, 75, 100 + 2*x, 50);
			dc.DrawLine(100 + 2*x, 50, 100+x, 75);
		}
		if (pole == 4)
		{
			dc.DrawLine(100 + 2*x, 100, 100 + 3 * x, 125);
			dc.DrawLine(100 + 3 * x, 125, 100 + 4 * x, 100);
			dc.DrawLine(100 + 4 * x, 100, 100 + 3 * x, 75);
			dc.DrawLine(100 + 3 * x, 75, 100 + 2*x, 100);
		}
		if (pole == 5)
		{
			dc.DrawLine(100 + 3 * x, 125, 100 +4 * x, 150);
			dc.DrawLine(100 + 4 * x, 150, 100 + 5 * x, 125);
			dc.DrawLine(100 + 5 * x, 125, 100 + 4 * x, 100);
			dc.DrawLine(100 +4 * x, 100, 100 + 3 * x, 125);
		}
		if (pole == 6)
		{
			dc.DrawLine(100, 100, 100+x, 125);
			dc.DrawLine(100+x, 125, 100 + x*2, 100);
			dc.DrawLine(100 + x * 2, 100, 100 + x,75);
			dc.DrawLine(100+x, 75, 100, 100);
		}
		if (pole == 7)
		{
			dc.DrawLine(100+x, 125, 100 + 2*x, 150);
			dc.DrawLine(100 + 2*x, 150, 100 + x * 3, 125);
			dc.DrawLine(100 + x * 3, 125, 100 + 2*x, 100);
			dc.DrawLine(100 + 2*x, 100, 100+x, 125);
		}
		if (pole == 8)
		{
			dc.DrawLine(100 + 2*x, 150, 100 + 3 * x, 175);
			dc.DrawLine(100 + 3 * x, 175, 100 + x * 4, 150);
			dc.DrawLine(100 + x *4, 150, 100 + 3 * x, 125);
			dc.DrawLine(100 + 3 * x, 125, 100 + 2*x, 150);
		}
	}
	if (layer == 1)
	{
		double x = 200 / 3, y = 25;
		if (pole == 0)
		{
			dc.DrawLine(100 + 2 * x, 50+250, 100 + 3 * x, 75 + 250);
			dc.DrawLine(100 + 3 * x, 75 + 250, 100 + 4 * x, 50 + 250);
			dc.DrawLine(100 + 4 * x, 50 + 250, 100 + 3 * x, 25 + 250);
			dc.DrawLine(100 + 3 * x, 25 + 250, 100 + 2 * x, 50 + 250);
		}
		if (pole == 1)
		{
			dc.DrawLine(100 + 3 * x, 75 + 250, 100 + 4 * x, 100 + 250);
			dc.DrawLine(100 + 4 * x, 100 + 250, 100 + 5 * x, 75 + 250);
			dc.DrawLine(100 + 5 * x, 75 + 250, 100 + 4 * x, 50 + 250);
			dc.DrawLine(100 + 4 * x, 50 + 250, 100 + 3 * x, 75 + 250);
		}
		if (pole == 2)
		{
			dc.DrawLine(100 + 4 * x, 100 + 250, 100 + 5 * x, 125 + 250);
			dc.DrawLine(100 + 5 * x, 125 + 250, 100 + 6 * x, 100 + 250);
			dc.DrawLine(100 + 6 * x, 100 + 250, 100 + 5 * x, 75 + 250);
			dc.DrawLine(100 + 5 * x, 75 + 250, 100 + 4 * x, 100 + 250);
		}
		if (pole == 3)
		{
			dc.DrawLine(100 + x, 75 + 250, 100 + 2 * x, 100 + 250);
			dc.DrawLine(100 + 2 * x, 100 + 250, 100 + 3 * x, 75 + 250);
			dc.DrawLine(100 + 3 * x, 75 + 250, 100 + 2 * x, 50 + 250);
			dc.DrawLine(100 + 2 * x, 50 + 250, 100 + x, 75 + 250);
		}
		if (pole == 4)
		{
			dc.DrawLine(100 + 2 * x, 100 + 250, 100 + 3 * x, 125 + 250);
			dc.DrawLine(100 + 3 * x, 125 + 250, 100 + 4 * x, 100 + 250);
			dc.DrawLine(100 + 4 * x, 100 + 250, 100 + 3 * x, 75 + 250);
			dc.DrawLine(100 + 3 * x, 75 + 250, 100 + 2 * x, 100 + 250);
		}
		if (pole == 5)
		{
			dc.DrawLine(100 + 3 * x, 125 + 250, 100 + 4 * x, 150 + 250);
			dc.DrawLine(100 + 4 * x, 150 + 250, 100 + 5 * x, 125 + 250);
			dc.DrawLine(100 + 5 * x, 125 + 250, 100 + 4 * x, 100 + 250);
			dc.DrawLine(100 + 4 * x, 100 + 250, 100 + 3 * x, 125 + 250);
		}
		if (pole == 6)
		{
			dc.DrawLine(100, 100 + 250, 100 + x, 125 + 250);
			dc.DrawLine(100 + x, 125 + 250, 100 + x * 2, 100 + 250);
			dc.DrawLine(100 + x * 2, 100 + 250, 100 + x, 75 + 250);
			dc.DrawLine(100 + x, 75 + 250, 100, 100 + 250);
		}
		if (pole == 7)
		{
			dc.DrawLine(100 + x, 125 + 250, 100 + 2 * x, 150 + 250);
			dc.DrawLine(100 + 2 * x, 150 + 250, 100 + x * 3, 125 + 250);
			dc.DrawLine(100 + x * 3, 125 + 250, 100 + 2 * x, 100 + 250);
			dc.DrawLine(100 + 2 * x, 100 + 250, 100 + x, 125 + 250);
		}
		if (pole == 8)
		{
			dc.DrawLine(100 + 2 * x, 150 + 250, 100 + 3 * x, 175 + 250);
			dc.DrawLine(100 + 3 * x, 175 + 250, 100 + x * 4, 150 + 250);
			dc.DrawLine(100 + x * 4, 150 + 250, 100 + 3 * x, 125 + 250);
			dc.DrawLine(100 + 3 * x, 125 + 250, 100 + 2 * x, 150 + 250);
		}
	}

	if (layer == 2)
	{
		double x = 200 / 3, y = 25;
		if (pole == 0)
		{
			dc.DrawLine(100 + 2 * x, 50 + 500, 100 + 3 * x, 75 + 500);
			dc.DrawLine(100 + 3 * x, 75 + 500, 100 + 4 * x, 50 + 500);
			dc.DrawLine(100 + 4 * x, 50 + 500, 100 + 3 * x, 25 + 500);
			dc.DrawLine(100 + 3 * x, 25 + 500, 100 + 2 * x, 50 + 500);
		}
		if (pole == 1)
		{
			dc.DrawLine(100 + 3 * x, 75 + 500, 100 + 4 * x, 100 + 500);
			dc.DrawLine(100 + 4 * x, 100 + 500, 100 + 5 * x, 75 + 500);
			dc.DrawLine(100 + 5 * x, 75 + 500, 100 + 4 * x, 50 + 500);
			dc.DrawLine(100 + 4 * x, 50 + 500, 100 + 3 * x, 75 + 500);
		}
		if (pole == 2)
		{
			dc.DrawLine(100 + 4 * x, 100 + 500, 100 + 5 * x, 125 + 500);
			dc.DrawLine(100 + 5 * x, 125 + 500, 100 + 6 * x, 100 + 500);
			dc.DrawLine(100 + 6 * x, 100 + 500, 100 + 5 * x, 75 + 500);
			dc.DrawLine(100 + 5 * x, 75 + 500, 100 + 4 * x, 100 + 500);
		}
		if (pole == 3)
		{
			dc.DrawLine(100 + x, 75 + 500, 100 + 2 * x, 100 + 500);
			dc.DrawLine(100 + 2 * x, 100 + 500, 100 + 3 * x, 75 + 500);
			dc.DrawLine(100 + 3 * x, 75 + 500, 100 + 2 * x, 50 + 500);
			dc.DrawLine(100 + 2 * x, 50 + 500, 100 + x, 75 + 500);
		}
		if (pole == 4)
		{
			dc.DrawLine(100 + 2 * x, 100 + 500, 100 + 3 * x, 125 + 500);
			dc.DrawLine(100 + 3 * x, 125 + 500, 100 + 4 * x, 100 + 500);
			dc.DrawLine(100 + 4 * x, 100 + 500, 100 + 3 * x, 75 + 500);
			dc.DrawLine(100 + 3 * x, 75 + 500, 100 + 2 * x, 100 + 500);
		}
		if (pole == 5)
		{
			dc.DrawLine(100 + 3 * x, 125 + 500, 100 + 4 * x, 150 + 500);
			dc.DrawLine(100 + 4 * x, 150 + 500, 100 + 5 * x, 125 + 500);
			dc.DrawLine(100 + 5 * x, 125 + 500, 100 + 4 * x, 100 + 500);
			dc.DrawLine(100 + 4 * x, 100 + 500, 100 + 3 * x, 125 + 500);
		}
		if (pole == 6)
		{
			dc.DrawLine(100, 100 + 500, 100 + x, 125 + 500);
			dc.DrawLine(100 + x, 125 + 500, 100 + x * 2, 100 + 500);
			dc.DrawLine(100 + x * 2, 100 + 500, 100 + x, 75 + 500);
			dc.DrawLine(100 + x, 75 + 500, 100, 100 + 500);
		}
		if (pole == 7)
		{
			dc.DrawLine(100 + x, 125 + 500, 100 + 2 * x, 150 + 500);
			dc.DrawLine(100 + 2 * x, 150 + 500, 100 + x * 3, 125 + 500);
			dc.DrawLine(100 + x * 3, 125 + 500, 100 + 2 * x, 100 + 500);
			dc.DrawLine(100 + 2 * x, 100 + 500, 100 + x, 125 + 500);
		}
		if (pole == 8)
		{
			dc.DrawLine(100 + 2 * x, 150 + 500, 100 + 3 * x, 175 + 500);
			dc.DrawLine(100 + 3 * x, 175 + 500, 100 + x * 4, 150 + 500);
			dc.DrawLine(100 + x * 4, 150 + 500, 100 + 3 * x, 125 + 500);
			dc.DrawLine(100 + 3 * x, 125 + 500, 100 + 2 * x, 150 + 500);
		}
	}

	
	
	
}

/*
void MyFrame1::Mouse_Move(wxMouseEvent & e)
{
	Refresh();
}
*/
void MyFrame1::Keyboard(wxKeyEvent & s)
{
	if (!komputer)
	{
		if (poczatek)
		{
			if (s.GetKeyCode() == WXK_RIGHT)
			{
				pole += 1;
				if (pole == 9)
					pole = pole % 9;
			}
			if (s.GetKeyCode() == WXK_LEFT)
			{
				pole -= 1;
				if (pole == -1)
					pole = 8;
			}
			if (s.GetKeyCode() == WXK_UP)
			{
				pole -= 3;
				if (pole < 0)
					pole = pole + 9;
			}
			if (s.GetKeyCode() == WXK_DOWN)
			{
				pole += 3;
				if (pole > 8)
					pole = pole - 9;
			}
			if (s.GetKeyCode() == WXK_PAGEUP)
			{
				pole = 0;
				layer -= 1;
				if (layer < 0)
					layer = layer + 3;
			}
			if (s.GetKeyCode() == WXK_PAGEDOWN)
			{
				pole = 0;
				layer += 1;
				if (layer > 2)
					layer = layer - 3;
			}
			if (s.GetKeyCode() == WXK_SPACE)
			{
				kolko.LoadFile("kolko.png", wxBITMAP_TYPE_PNG);
				bitmap1 = wxBitmap(kolko);

				iks.LoadFile("iks.png", wxBITMAP_TYPE_PNG);
				bitmap2 = wxBitmap(iks);
				if (Co_Jest[layer][pole] == 0)
				{
					if (!koniec)
					{
						if (gracz == 1)
						{
							Co_Jest[layer][pole] = 1;
							gracz = 2;
							wxString plinfo = wxString::Format(wxT(" Obecnie: Gracz Drugi (X)"));
							player->Clear();
							player->WriteText(plinfo);
						}
						else
						{
							Co_Jest[layer][pole] = 2;
							gracz = 1;
							wxString plinfo = wxString::Format(wxT(" Obecnie: Gracz Pierwszy (O)"));
							player->Clear();
							player->WriteText(plinfo);
						}
					}
				}
				else
				{
					if (!koniec)
					{
						wxString msg = wxT("Wybierz inne pole");
						wxMessageDialog *dial = new wxMessageDialog(NULL, msg, wxT("Blad"), wxOK);
						dial->ShowModal();
					}
				}


			}
			Refresh();

			if (!koniec)
				CzyWygral();

			if (!koniec)
			{
				if (Remis())
				{
					wxString msg = wxT("Remis");
					wxMessageDialog *dial = new wxMessageDialog(NULL, msg, wxT("Koniec"), wxOK);
					dial->ShowModal();
				}

			}

		}
	}
	if (komputer)
	{
		if (poczatek)
		{
			if (s.GetKeyCode() == WXK_RIGHT)
			{
				pole += 1;
				if (pole == 9)
					pole = pole % 9;
			}
			if (s.GetKeyCode() == WXK_LEFT)
			{
				pole -= 1;
				if (pole == -1)
					pole = 8;
			}
			if (s.GetKeyCode() == WXK_UP)
			{
				pole -= 3;
				if (pole < 0)
					pole = pole + 9;
			}
			if (s.GetKeyCode() == WXK_DOWN)
			{
				pole += 3;
				if (pole > 8)
					pole = pole - 9;
			}
			if (s.GetKeyCode() == WXK_PAGEUP)
			{
				pole = 0;
				layer -= 1;
				if (layer < 0)
					layer = layer + 3;
			}
			if (s.GetKeyCode() == WXK_PAGEDOWN)
			{
				pole = 0;
				layer += 1;
				if (layer > 2)
					layer = layer - 3;
			}
			if (s.GetKeyCode() == WXK_SPACE)
			{
				kolko.LoadFile("kolko.png", wxBITMAP_TYPE_PNG);
				bitmap1 = wxBitmap(kolko);

				iks.LoadFile("iks.png", wxBITMAP_TYPE_PNG);
				bitmap2 = wxBitmap(iks);
				if (Co_Jest[layer][pole] == 0)
				{
					if (!koniec)
					{
						if (gracz == 1)
						{
							Co_Jest[layer][pole] = 1;
							wxString plinfo = wxString::Format(wxT(" Obecnie: Gracz Drugi (X)"));
							player->Clear();
							player->WriteText(plinfo);
							int l, p;
							Refresh();
							CzyWygral();
								if (!koniec)
								{
									srand(time(NULL));
									do
									{
										l = rand() % 3;
										p = rand() % 9;
									} while (Co_Jest[l][p] != 0);
									Co_Jest[l][p] = 2;
								}
						}
					}
				}
				else
				{
					if (!koniec)
					{
						wxString msg = wxT("Wybierz inne pole");
						wxMessageDialog *dial = new wxMessageDialog(NULL, msg, wxT("Blad"), wxOK);
						dial->ShowModal();
					}
				}


			}
			Refresh();

			if (!koniec)
				CzyWygral();

			if (!koniec)
			{
				if (Remis())
				{
					wxString msg = wxT("Remis");
					wxMessageDialog *dial = new wxMessageDialog(NULL, msg, wxT("Koniec"), wxOK);
					dial->ShowModal();
				}

			}

		}
	}

}
 void MyFrame1::NewGame(wxCommandEvent& event)
 {
	 for (int i = 0; i < 3; i++)
		 for (int j = 0; j < 9; j++)
			 Co_Jest[i][j] = 0;
	 pole = 0;
	 layer = 0;
	 gracz = 1;
	 koniec = 0;
	 poczatek = 1;
	 wxString plinfo = wxString::Format(wxT(" Obecnie: Gracz Pierwszy (O)"));
	 player->Clear();
	 player->WriteText(plinfo);
	 Refresh();
 }

 void MyFrame1::CzyWygral()
 {
	 int pierwszy = 0;
	 int drugi = 0;
	 for (int i = 0; i<3; i++)
	 {

		 for (int j = 0; j<9; j++)
		 {

			 if (Co_Jest[0][j] == 1 && Co_Jest[1][j] == 1 && Co_Jest[2][j] == 1)
			 {
				 pierwszy +=1;
			 }
			 else if (Co_Jest[0][j] == 2 && Co_Jest[1][j] == 2 && Co_Jest[2][j] == 2)
			 {
				 drugi +=1;

			 }
			 else if ((Co_Jest[i][0] == 1 && Co_Jest[i][1] == 1 && Co_Jest[i][2] == 1) || (Co_Jest[i][3] == 1 && Co_Jest[i][4] == 1 && Co_Jest[i][5] == 1) ||
				 (Co_Jest[i][6] == 1 && Co_Jest[i][7] == 1 && Co_Jest[i][8] == 1) || (Co_Jest[i][0] == 1 && Co_Jest[i][3] == 1 && Co_Jest[i][6] == 1) ||
				 (Co_Jest[i][1] == 1 && Co_Jest[i][4] == 1 && Co_Jest[i][7] == 1) || (Co_Jest[i][2] == 1 && Co_Jest[i][5] == 1 && Co_Jest[i][8] == 1))
			 {
				 pierwszy += 1;

			 }

			 else if ((Co_Jest[i][0] == 2 && Co_Jest[i][1] == 2 && Co_Jest[i][2] == 2) || (Co_Jest[i][3] == 2 && Co_Jest[i][4] == 2 && Co_Jest[i][5] == 2) ||
				 (Co_Jest[i][6] == 2 && Co_Jest[i][7] == 2 && Co_Jest[i][8] == 2) || (Co_Jest[i][0] == 2 && Co_Jest[i][3] == 2 && Co_Jest[i][6] == 2) ||
				 (Co_Jest[i][1] == 2 && Co_Jest[i][4] == 2 && Co_Jest[i][7] == 2) || (Co_Jest[i][2] == 2 && Co_Jest[i][5] == 2 && Co_Jest[i][8] == 2))
			 {
				 drugi += 1;

			 }
			 else if ((Co_Jest[0][0] == 1 && Co_Jest[1][4] == 1 && Co_Jest[2][8] == 1) || (Co_Jest[0][2] && Co_Jest[1][4] == 1 && Co_Jest[2][6] == 1) || (Co_Jest[0][6] == 1 && Co_Jest[1][4] == 1
				 && Co_Jest[2][2] == 1) || (Co_Jest[0][8] == 1 && Co_Jest[1][4] == 1 && Co_Jest[2][0] == 1))
			 {
				 pierwszy += 1;


			 }
			 else if ((Co_Jest[0][0] == 2 && Co_Jest[1][4] == 2 && Co_Jest[2][8] == 2) || (Co_Jest[0][2] && Co_Jest[1][4] == 2 && Co_Jest[2][6] == 2) || (Co_Jest[0][6] == 2 &&
				 Co_Jest[1][4] == 2 && Co_Jest[2][2] == 2) || (Co_Jest[0][8] == 2 && Co_Jest[1][4] == 2 && Co_Jest[2][0] == 2))
			 {
				 drugi += 1;


			 }
			 else if ((Co_Jest[i][0] == 1 && Co_Jest[i][4] == 1 && Co_Jest[i][8] == 1) || (Co_Jest[i][2] == 1 && Co_Jest[i][4] == 1 && Co_Jest[i][6] == 1)) {

				 pierwszy += 1;
			 }
			 else if ((Co_Jest[i][0] == 2 && Co_Jest[i][4] == 2 && Co_Jest[i][8] == 2) || (Co_Jest[i][2] == 2 && Co_Jest[i][4] == 2 && Co_Jest[i][6] == 2)) {

				 drugi += 1;
			 }
			 
			 else  if ((Co_Jest[0][0] == 1 && Co_Jest[1][3] == 1 && Co_Jest[2][6] == 1) || (Co_Jest[0][6] == 1 && Co_Jest[1][3] == 1 && Co_Jest[2][0] == 1) ||
				 (Co_Jest[0][6] == 1 && Co_Jest[1][7] == 1 && Co_Jest[2][8] == 1) || (Co_Jest[0][8] == 1 && Co_Jest[1][7] == 1 && Co_Jest[2][6] == 1) ||
				 (Co_Jest[0][8] == 1 && Co_Jest[1][5] == 1 && Co_Jest[2][3] == 1) || (Co_Jest[0][3] == 1 && Co_Jest[1][5] == 1 && Co_Jest[2][8] == 1) ||
				 (Co_Jest[0][2] == 1 && Co_Jest[1][1] == 1 && Co_Jest[2][0] == 1) || (Co_Jest[0][0] == 1 && Co_Jest[1][1] == 1 && Co_Jest[2][2] == 1)) {


				 pierwszy += 1;

			 }
			 else  if ((Co_Jest[0][0] == 2 && Co_Jest[1][3] == 2 && Co_Jest[2][6] == 2) || (Co_Jest[0][6] == 2 && Co_Jest[1][3] == 2 && Co_Jest[2][0] == 2) ||
				 (Co_Jest[0][6] == 2 && Co_Jest[1][7] == 2 && Co_Jest[2][8] == 2) || (Co_Jest[0][8] == 2 && Co_Jest[1][7] == 2 && Co_Jest[2][6] == 2) ||
				 (Co_Jest[0][8] == 2 && Co_Jest[1][5] == 2 && Co_Jest[2][3] == 2) || (Co_Jest[0][3] == 2 && Co_Jest[1][5] == 2 && Co_Jest[2][8] == 2) ||
				 (Co_Jest[0][2] == 2 && Co_Jest[1][1] == 2 && Co_Jest[2][0] == 2) || (Co_Jest[0][0] == 2 && Co_Jest[1][1] == 2 && Co_Jest[2][2] == 2)) {


				 drugi += 1;
				 
			 }
			 else if ((Co_Jest[0][1] == 1 && Co_Jest[1][4] == 1 && Co_Jest[2][7] == 1) || (Co_Jest[0][3] == 1 && Co_Jest[1][4] == 1 && Co_Jest[2][5] == 1) ||
				 (Co_Jest[0][5] == 1 && Co_Jest[1][4] == 1 && Co_Jest[2][3] == 1) || (Co_Jest[0][7] == 1 && Co_Jest[1][4] == 1 && Co_Jest[2][1] == 1)) {


				 pierwszy += 1;

			 }

			 else if ((Co_Jest[0][1] == 2 && Co_Jest[1][4] == 2 && Co_Jest[2][7] == 2) || (Co_Jest[0][3] == 2 && Co_Jest[1][4] == 2 && Co_Jest[2][5] == 2) ||
				 (Co_Jest[0][5] == 2 && Co_Jest[1][4] == 2 && Co_Jest[2][3] == 2) || (Co_Jest[0][7] == 2 && Co_Jest[1][4] == 2 && Co_Jest[2][1] == 2)) {


				 drugi += 1;

			 }
		 }


	 }
	 if (pierwszy)
	 {
		 wxString msg = wxT("Gracz pierwszy Wygral");
		 wxMessageDialog *dial = new wxMessageDialog(NULL, msg, wxT("Gratulacje"), wxOK);
		 dial->ShowModal();
		 koniec = 1;
		 scoreO += 1;
	 }
	 if (drugi)
	 {
		 wxString msg = wxT("Gracz drugi Wygral");
		 wxMessageDialog *dial = new wxMessageDialog(NULL, msg, wxT("Gratulacje"), wxOK);
		 dial->ShowModal();
		 koniec = 1;
		 scoreX += 1;
	 }
	 UpdateScore();
 }

 void MyFrame1::UpdateScore()
 {
	 score->SetValue(wxString::Format("Wynik: Gracz O = %i  ||  Gracz X = %i  ||  Remisy = %i", scoreO,  scoreX, scoreTies));
 }

 bool MyFrame1::Remis()
 {
	 for (int i = 0; i < 3; i++)
	 {
		 for (int j = 0; j < 9; j++)
		 {
			 if (Co_Jest[i][j] == 0)
				 return false;
		 }
	 }
	 koniec = 1;
	 scoreTies += 1;
	 UpdateScore();
	 return true;
 }

 void MyFrame1::Komputer(wxCommandEvent& event)
 {
	 if (komputer == false)
	 {
		 komputer = true;
	 }
	 else komputer = false;
 }

 void MyFrame1::MouseMove(wxMouseEvent & e)
 {
	 if(poczatek)
	 Refresh();
 }