// WinMsgInfo.h : main header file for the WINMSGINFO application
//

#if !defined(AFX_WINMSGINFO_H__5B98FAA5_776E_4017_8372_EE983201E4B5__INCLUDED_)
#define AFX_WINMSGINFO_H__5B98FAA5_776E_4017_8372_EE983201E4B5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CWinMsgInfoApp:
// See WinMsgInfo.cpp for the implementation of this class
//

class CWinMsgInfoApp : public CWinApp
{
public:
	CWinMsgInfoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWinMsgInfoApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CWinMsgInfoApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WINMSGINFO_H__5B98FAA5_776E_4017_8372_EE983201E4B5__INCLUDED_)
