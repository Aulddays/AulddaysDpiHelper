
// MainFrm.h : interface of the CMainFrame class
//

#pragma once

#include "../AulddaysDpiHelper/AulddaysDpiHelper.h"

class CMainFrame : public CFrameWndEx
{
	
protected: // create from serialization only
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL LoadFrame(UINT nIDResource, DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE, CWnd* pParentWnd = NULL, CCreateContext* pContext = NULL);

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	CMFCMenuBar       m_wndMenuBar;
	/// AulddaysDpiHelper BEGIN
	AulddaysToolBar       m_wndToolBar;
	/// AulddaysDpiHelper END
	CMFCStatusBar     m_wndStatusBar;
	CMFCToolBarImages m_UserImages;

// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnViewCustomize();
	afx_msg LRESULT OnToolbarCreateNew(WPARAM wp, LPARAM lp);
	afx_msg void OnApplicationLook(UINT id);
	afx_msg void OnUpdateApplicationLook(CCmdUI* pCmdUI);
	/// AulddaysDpiHelper BEGIN
	afx_msg LRESULT OnDpichanged(WPARAM wParam, LPARAM lParam);
	/// AulddaysDpiHelper END
	DECLARE_MESSAGE_MAP()

public:
	/// AulddaysDpiHelper BEGIN
	afx_msg void OnSettingChange(UINT uFlags, LPCTSTR lpszSection);
	/// AulddaysDpiHelper END

protected:
	/// AulddaysDpiHelper BEGIN
	UINT m_curdpi = 0;
	void updateDpi(bool resizeWindow = false);
	/// AulddaysDpiHelper END
};


