///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jan 16 2016)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __UI_H__
#define __UI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statline.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText1;
		wxStaticText* m_staticText3;
		wxStaticLine* m_staticline1;
		wxStaticText* m_staticText4;
		wxStaticLine* m_staticline2;
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textCtrl1;
		wxButton* m_button1;
		wxStaticLine* m_staticline3;
		wxStaticText* m_staticText5;
		wxStatusBar* m_statusBar1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void m_button1OnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("wxWidgets Application"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 497,496 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~MyFrame1();
	
};

#endif //__UI_H__
