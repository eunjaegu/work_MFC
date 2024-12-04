
// Missoin_MfcCircle.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMissoinMfcCircleApp:
// See Missoin_MfcCircle.cpp for the implementation of this class
//

class CMissoinMfcCircleApp : public CWinApp
{
public:
	CMissoinMfcCircleApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMissoinMfcCircleApp theApp;
