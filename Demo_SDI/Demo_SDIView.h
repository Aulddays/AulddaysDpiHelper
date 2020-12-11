
// Demo_SDIView.h : interface of the CDemo_SDIView class
//

#pragma once


class CDemo_SDIView : public CView
{
protected: // create from serialization only
	CDemo_SDIView();
	DECLARE_DYNCREATE(CDemo_SDIView)

// Attributes
public:
	CDemo_SDIDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CDemo_SDIView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Demo_SDIView.cpp
inline CDemo_SDIDoc* CDemo_SDIView::GetDocument() const
   { return reinterpret_cast<CDemo_SDIDoc*>(m_pDocument); }
#endif

