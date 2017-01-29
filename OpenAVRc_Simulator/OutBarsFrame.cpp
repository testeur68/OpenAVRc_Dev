#include "OutBarsFrame.h"
#include "OpenAVRc_SimulatorMain.h"

//(*InternalHeaders(OutBarsFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(OutBarsFrame)
const long OutBarsFrame::ID_TEXTCTRL1 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL2 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL3 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL4 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL5 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL6 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL7 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL8 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL9 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL10 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL11 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL12 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL13 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL14 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL15 = wxNewId();
const long OutBarsFrame::ID_TEXTCTRL16 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT1 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT2 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT3 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT4 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT5 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT6 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT7 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT8 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT9 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT10 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT11 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT12 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT13 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT14 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT15 = wxNewId();
const long OutBarsFrame::ID_STATICTEXT16 = wxNewId();
const long OutBarsFrame::ID_SLIDER1 = wxNewId();
const long OutBarsFrame::ID_SLIDER2 = wxNewId();
const long OutBarsFrame::ID_SLIDER3 = wxNewId();
const long OutBarsFrame::ID_SLIDER4 = wxNewId();
const long OutBarsFrame::ID_SLIDER5 = wxNewId();
const long OutBarsFrame::ID_SLIDER6 = wxNewId();
const long OutBarsFrame::ID_SLIDER7 = wxNewId();
const long OutBarsFrame::ID_SLIDER8 = wxNewId();
const long OutBarsFrame::ID_SLIDER9 = wxNewId();
const long OutBarsFrame::ID_SLIDER10 = wxNewId();
const long OutBarsFrame::ID_SLIDER11 = wxNewId();
const long OutBarsFrame::ID_SLIDER12 = wxNewId();
const long OutBarsFrame::ID_SLIDER13 = wxNewId();
const long OutBarsFrame::ID_SLIDER14 = wxNewId();
const long OutBarsFrame::ID_SLIDER15 = wxNewId();
const long OutBarsFrame::ID_SLIDER16 = wxNewId();
const long OutBarsFrame::ID_PANEL1 = wxNewId();
const long OutBarsFrame::ID_TIMER1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(OutBarsFrame,wxFrame)
	//(*EventTable(OutBarsFrame)
	//*)
END_EVENT_TABLE()

OutBarsFrame::OutBarsFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(OutBarsFrame)
	Create(parent, wxID_ANY, _("�tat des sorties du mixeur."), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(263,284));
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(64,32), wxSize(263,320), 0, _T("ID_PANEL1"));
	output1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("Texte"), wxPoint(216,10), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	output2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, _("Texte"), wxPoint(216,26), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	output3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, _("Texte"), wxPoint(216,42), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	output4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, _("Texte"), wxPoint(216,58), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	output5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, _("Texte"), wxPoint(216,74), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	output6 = new wxTextCtrl(Panel1, ID_TEXTCTRL6, _("Texte"), wxPoint(216,90), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	output7 = new wxTextCtrl(Panel1, ID_TEXTCTRL7, _("Texte"), wxPoint(216,106), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	output8 = new wxTextCtrl(Panel1, ID_TEXTCTRL8, _("Texte"), wxPoint(216,122), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	output9 = new wxTextCtrl(Panel1, ID_TEXTCTRL9, _("Texte"), wxPoint(216,138), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	output10 = new wxTextCtrl(Panel1, ID_TEXTCTRL10, _("Texte"), wxPoint(216,154), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL10"));
	output11 = new wxTextCtrl(Panel1, ID_TEXTCTRL11, _("Texte"), wxPoint(216,170), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL11"));
	output12 = new wxTextCtrl(Panel1, ID_TEXTCTRL12, _("Texte"), wxPoint(216,186), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL12"));
	output13 = new wxTextCtrl(Panel1, ID_TEXTCTRL13, _("Texte"), wxPoint(216,202), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL13"));
	output14 = new wxTextCtrl(Panel1, ID_TEXTCTRL14, _("Texte"), wxPoint(216,218), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL14"));
	output15 = new wxTextCtrl(Panel1, ID_TEXTCTRL15, _("Texte"), wxPoint(216,234), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL15"));
	output16 = new wxTextCtrl(Panel1, ID_TEXTCTRL16, _("Texte"), wxPoint(216,250), wxSize(56,16), wxTE_READONLY|wxTE_RICH|wxNO_BORDER|wxTRANSPARENT_WINDOW, wxDefaultValidator, _T("ID_TEXTCTRL16"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("CH1"), wxPoint(14,13), wxSize(32,16), 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("CH2"), wxPoint(14,29), wxSize(32,16), 0, _T("ID_STATICTEXT2"));
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("CH3"), wxPoint(14,45), wxSize(32,16), 0, _T("ID_STATICTEXT3"));
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("CH4"), wxPoint(14,61), wxSize(32,16), 0, _T("ID_STATICTEXT4"));
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("CH5"), wxPoint(14,77), wxSize(32,16), 0, _T("ID_STATICTEXT5"));
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("CH6"), wxPoint(14,93), wxSize(32,16), 0, _T("ID_STATICTEXT6"));
	StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("CH7"), wxPoint(14,109), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	StaticText8 = new wxStaticText(Panel1, ID_STATICTEXT8, _("CH8"), wxPoint(14,125), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	StaticText9 = new wxStaticText(Panel1, ID_STATICTEXT9, _("CH9"), wxPoint(14,141), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	StaticText10 = new wxStaticText(Panel1, ID_STATICTEXT10, _("CH10"), wxPoint(14,157), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	StaticText11 = new wxStaticText(Panel1, ID_STATICTEXT11, _("CH11"), wxPoint(14,173), wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	StaticText12 = new wxStaticText(Panel1, ID_STATICTEXT12, _("CH12"), wxPoint(14,189), wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	StaticText13 = new wxStaticText(Panel1, ID_STATICTEXT13, _("CH13"), wxPoint(14,205), wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	StaticText14 = new wxStaticText(Panel1, ID_STATICTEXT14, _("CH14"), wxPoint(14,221), wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	StaticText15 = new wxStaticText(Panel1, ID_STATICTEXT15, _("CH15"), wxPoint(14,237), wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	StaticText16 = new wxStaticText(Panel1, ID_STATICTEXT16, _("CH16"), wxPoint(14,253), wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	Slider1 = new wxSlider(Panel1, ID_SLIDER1, 0, -115, 115, wxPoint(40,16), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER1"));
	Slider1->SetExtraStyle( Slider1->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider2 = new wxSlider(Panel1, ID_SLIDER2, 0, -115, 115, wxPoint(40,32), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER2"));
	Slider2->SetExtraStyle( Slider2->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider3 = new wxSlider(Panel1, ID_SLIDER3, 0, -115, 115, wxPoint(40,48), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER3"));
	Slider3->SetExtraStyle( Slider3->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider4 = new wxSlider(Panel1, ID_SLIDER4, 0, -115, 115, wxPoint(40,64), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER4"));
	Slider4->SetExtraStyle( Slider4->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider5 = new wxSlider(Panel1, ID_SLIDER5, 0, -115, 115, wxPoint(40,80), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER5"));
	Slider5->SetExtraStyle( Slider5->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider6 = new wxSlider(Panel1, ID_SLIDER6, 0, -115, 115, wxPoint(40,96), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER6"));
	Slider6->SetExtraStyle( Slider6->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider7 = new wxSlider(Panel1, ID_SLIDER7, 0, -115, 115, wxPoint(40,112), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER7"));
	Slider7->SetExtraStyle( Slider7->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider8 = new wxSlider(Panel1, ID_SLIDER8, 0, -115, 115, wxPoint(40,128), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER8"));
	Slider8->SetExtraStyle( Slider8->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider9 = new wxSlider(Panel1, ID_SLIDER9, 0, -115, 115, wxPoint(40,144), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER9"));
	Slider9->SetExtraStyle( Slider9->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider10 = new wxSlider(Panel1, ID_SLIDER10, 0, -115, 115, wxPoint(40,160), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER10"));
	Slider10->SetExtraStyle( Slider10->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider11 = new wxSlider(Panel1, ID_SLIDER11, 0, -115, 115, wxPoint(40,176), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER11"));
	Slider11->SetExtraStyle( Slider11->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider12 = new wxSlider(Panel1, ID_SLIDER12, 0, -115, 115, wxPoint(40,192), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER12"));
	Slider12->SetExtraStyle( Slider12->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider13 = new wxSlider(Panel1, ID_SLIDER13, 0, -115, 115, wxPoint(40,208), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER13"));
	Slider13->SetExtraStyle( Slider13->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider14 = new wxSlider(Panel1, ID_SLIDER14, 0, -115, 115, wxPoint(40,224), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER14"));
	Slider14->SetExtraStyle( Slider14->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider15 = new wxSlider(Panel1, ID_SLIDER15, 0, -115, 115, wxPoint(40,240), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER15"));
	Slider15->SetExtraStyle( Slider15->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	Slider16 = new wxSlider(Panel1, ID_SLIDER16, 0, -115, 115, wxPoint(40,256), wxSize(176,16), 0, wxDefaultValidator, _T("ID_SLIDER16"));
	Slider16->SetExtraStyle( Slider16->GetExtraStyle() | wxWS_EX_BLOCK_EVENTS );
	TimerRefreshFrame.SetOwner(this, ID_TIMER1);
	TimerRefreshFrame.Start(500, false);

	Connect(ID_TEXTCTRL9,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&OutBarsFrame::OnTextCtrl1Text1);
	Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&OutBarsFrame::OnTimerRefreshFrameTrigger);
	//*)

	FillBarFrame();
}

OutBarsFrame::~OutBarsFrame()
{
	//(*Destroy(OutBarsFrame)
	//*)
}

void OutBarsFrame::FillBarFrame()
{
  wxString mystring = wxString::Format(wxT("%i"),channelOutputs[0] * 100/1024) + "%";
	output1->SetValue(mystring);
	Slider1->SetValue(channelOutputs[0] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[1] * 100/1024) + "%";
	output2->SetValue(mystring);
	Slider2->SetValue(channelOutputs[1] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[2] * 100/1024) + "%";
	output3->SetValue(mystring);
	Slider3->SetValue(channelOutputs[2] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[3] * 100/1024) + "%";
	output4->SetValue(mystring);
	Slider4->SetValue(channelOutputs[3] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[4] * 100/1024) + "%";
	output5->SetValue(mystring);
	Slider5->SetValue(channelOutputs[4] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[5] * 100/1024) + "%";
	output6->SetValue(mystring);
	Slider6->SetValue(channelOutputs[5] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[6] * 100/1024) + "%";
	output7->SetValue(mystring);
	Slider7->SetValue(channelOutputs[6] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[7] * 100/1024) + "%";
	output8->SetValue(mystring);
	Slider8->SetValue(channelOutputs[7] * 100/1024);

	mystring = wxString::Format(wxT("%i"),channelOutputs[8] * 100/1024) + "%";
	output9->SetValue(mystring);
	Slider9->SetValue(channelOutputs[8] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[9] * 100/1024) + "%";
	output10->SetValue(mystring);
	Slider10->SetValue(channelOutputs[9] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[10] * 100/1024) + "%";
	output11->SetValue(mystring);
	Slider11->SetValue(channelOutputs[10] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[11] * 100/1024) + "%";
	output12->SetValue(mystring);
	Slider12->SetValue(channelOutputs[11] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[12] * 100/1024) + "%";
	output13->SetValue(mystring);
	Slider13->SetValue(channelOutputs[12] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[13] * 100/1024) + "%";
	output14->SetValue(mystring);
	Slider14->SetValue(channelOutputs[13] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[14] * 100/1024) + "%";
	output15->SetValue(mystring);
	Slider15->SetValue(channelOutputs[14] * 100/1024);

  mystring = wxString::Format(wxT("%i"),channelOutputs[15] * 100/1024) + "%";
	output16->SetValue(mystring);
	Slider16->SetValue(channelOutputs[15] * 100/1024);

}


void OutBarsFrame::OnTextCtrl1Text1(wxCommandEvent& event)
{
}

void OutBarsFrame::OnTimerRefreshFrameTrigger(wxTimerEvent& event)
{
  FillBarFrame();
}


