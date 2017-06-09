// JetZux & bg57iv3 Ltd. 2017.01
// http://github.com/jetmeta/winmsginfo

// WinMsgInfoDlg.h : header file
//

#if !defined(AFX_WINMSGINFODLG_H__387ED589_99B4_4B13_9B26_3E61717BADF3__INCLUDED_)
#define AFX_WINMSGINFODLG_H__387ED589_99B4_4B13_9B26_3E61717BADF3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "JzlMsgBiter/jzl_msg_biter.h"

/////////////////////////////////////////////////////////////////////////////
// CWinMsgInfoDlg dialog

class CWinMsgInfoDlg : public CDialog
{
private:
	IJzlMsgBiter* msg_info;

// Construction
public:
	CWinMsgInfoDlg(CWnd* pParent = NULL);	// standard constructor
	~CWinMsgInfoDlg();

// Dialog Data
	//{{AFX_DATA(CWinMsgInfoDlg)
	enum { IDD = IDD_WINMSGINFO_DIALOG };
	CStatic	m_stMsgInfo;
	CEdit	m_edtMsgId;
	CString	m_strMsgId;
	CString	m_strMsgInfo;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWinMsgInfoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CWinMsgInfoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonInfo();
	afx_msg void OnClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WINMSGINFODLG_H__387ED589_99B4_4B13_9B26_3E61717BADF3__INCLUDED_)
