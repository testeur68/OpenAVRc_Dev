 /*
 **************************************************************************
 *                                                                        *
 *              This file is part of the OpenAVRc project.                *
 *                                                                        *
 *                         Based on code named                            *
 *             OpenTx - https://github.com/opentx/opentx                  *
 *                                                                        *
 *                Only AVR code here for lisibility ;-)                   *
 *                                                                        *
 *   OpenAVRc is free software: you can redistribute it and/or modify     *
 *   it under the terms of the GNU General Public License as published by *
 *   the Free Software Foundation, either version 2 of the License, or    *
 *   (at your option) any later version.                                  *
 *                                                                        *
 *   OpenAVRc is distributed in the hope that it will be useful,          *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of       *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        *
 *   GNU General Public License for more details.                         *
 *                                                                        *
 *       License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html          *
 *                                                                        *
 **************************************************************************
*/


#ifndef DEFAULTFRAME_H
#define DEFAULTFRAME_H
#include <wx/combobox.h>
#include <wx/string.h>



//(*Headers(CommunicationsFrame)
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/statbox.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/combobox.h>
//*)


class CommunicationsFrame: public wxFrame
{
public:

    CommunicationsFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~CommunicationsFrame();

    //(*Declarations(CommunicationsFrame)
    wxStaticText* StaticText2;
    wxButton* Button1;
    wxButton* ButtonEnter;
    wxStaticText* StaticText1;
    wxStaticText* StaticText3;
    wxStaticBox* StaticBox1;
    wxButton* ButtonSearchavrdudepath;
    wxButton* ButtonEsc;
    wxComboBox* ComboBox3;
    wxStaticText* StaticText5;
    wxButton* ButtonDetect;
    wxComboBox* ComboBox1;
    wxTextCtrl* TextCtrl1;
    wxComboBox* ComboBox2;
    //*)

protected:

    //(*Identifiers(CommunicationsFrame)
    static const long ID_STATICBOX1;
    static const long ID_COMBOBOX1;
    static const long ID_COMBOBOX2;
    static const long ID_STATICTEXT1;
    static const long ID_BUTTONENTER;
    static const long ID_STATICTEXT2;
    static const long ID_COMBOBOX3;
    static const long ID_STATICTEXT3;
    static const long ID_STATICTEXT5;
    static const long ID_TEXTCTRL1;
    static const long ID_BUTTONESC;
    static const long ID_BUTTONSEARCHAVRDUDEPATH;
    static const long ID_BUTTONDETECT;
    static const long ID_BUTTON1;
    //*)
    wxWindow * Parent;

private:

    //(*Handlers(CommunicationsFrame)
    void OnButton1Click(wxCommandEvent& event);
    void OnButtonSearchavrdudepathClick(wxCommandEvent& event);
    void OnButtonEscClick(wxCommandEvent& event);
    void OnButtonEnterClick(wxCommandEvent& event);
    void OnButtonDetectClick(wxCommandEvent& event);
    void GetPortList(wxArrayString *port_list);
    void DetectSerial();
    void OnTESTClick1(wxCommandEvent& event);
    //*)

    DECLARE_EVENT_TABLE()
};

#endif
