
// Demo_SDI.h : main header file for the Demo_SDI application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CDemo_SDIApp:
// See Demo_SDI.cpp for the implementation of this class
//

class CDemo_SDIApp : public CWinAppEx
{
public:
	CDemo_SDIApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDemo_SDIApp theApp;
