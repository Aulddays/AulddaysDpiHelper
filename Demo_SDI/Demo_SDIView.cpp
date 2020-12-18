
// Demo_SDIView.cpp : implementation of the CDemo_SDIView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Demo_SDI.h"
#endif

#include "Demo_SDIDoc.h"
#include "Demo_SDIView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDemo_SDIView

IMPLEMENT_DYNCREATE(CDemo_SDIView, CView)

BEGIN_MESSAGE_MAP(CDemo_SDIView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CDemo_SDIView construction/destruction

CDemo_SDIView::CDemo_SDIView()
{
	// TODO: add construction code here

}

CDemo_SDIView::~CDemo_SDIView()
{
}

BOOL CDemo_SDIView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDemo_SDIView drawing

void CDemo_SDIView::OnDraw(CDC* pDC)
{
	CDemo_SDIDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// Draw some text with a large font
	LOGFONT lf = { 0 };
	GetGlobalData()->fontRegular.GetLogFont(&lf);
	lf.lfHeight *= 2;	// twice the size of fontRegular
	CFont font;
	font.CreateFontIndirect(&lf);
	CFont *oriFont = pDC->SelectObject(&font);
	RECT rect;
	GetClientRect(&rect);
	pDC->DrawText(_T("dev.aulddays.com"), &rect, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	pDC->SelectObject(oriFont);
	font.DeleteObject();
}

void CDemo_SDIView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDemo_SDIView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CDemo_SDIView diagnostics

#ifdef _DEBUG
void CDemo_SDIView::AssertValid() const
{
	CView::AssertValid();
}

void CDemo_SDIView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDemo_SDIDoc* CDemo_SDIView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDemo_SDIDoc)));
	return (CDemo_SDIDoc*)m_pDocument;
}
#endif //_DEBUG


// CDemo_SDIView message handlers
