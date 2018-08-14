// MatrixCalculator2View.cpp : implementation of the CMatrixCalculator2View class
//

#include "stdafx.h"
#include "MatrixCalculator2.h"

#include "MatrixCalculator2Doc.h"
#include "MatrixCalculator2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMatrixCalculator2View

IMPLEMENT_DYNCREATE(CMatrixCalculator2View, CView)

BEGIN_MESSAGE_MAP(CMatrixCalculator2View, CView)
	//{{AFX_MSG_MAP(CMatrixCalculator2View)
	ON_WM_ERASEBKGND()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMatrixCalculator2View construction/destruction

CMatrixCalculator2View::CMatrixCalculator2View()
{
	// TODO: add construction code here

}

CMatrixCalculator2View::~CMatrixCalculator2View()
{
}

BOOL CMatrixCalculator2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMatrixCalculator2View drawing

void CMatrixCalculator2View::OnDraw(CDC* pDC)
{
	CMatrixCalculator2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

}

/////////////////////////////////////////////////////////////////////////////
// CMatrixCalculator2View printing

BOOL CMatrixCalculator2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMatrixCalculator2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMatrixCalculator2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMatrixCalculator2View diagnostics

#ifdef _DEBUG
void CMatrixCalculator2View::AssertValid() const
{
	CView::AssertValid();
}

void CMatrixCalculator2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMatrixCalculator2Doc* CMatrixCalculator2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMatrixCalculator2Doc)));
	return (CMatrixCalculator2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMatrixCalculator2View message handlers







BOOL CMatrixCalculator2View::OnEraseBkgnd(CDC* pDC) 
{
	// TODO: Add your message handler code here and/or call default
	CBitmap bitmap;
	bitmap.LoadBitmap(IDB_BITMAP1);
	CDC dcCompatible;
	dcCompatible.CreateCompatibleDC(pDC);
	dcCompatible.SelectObject(&bitmap);

	CRect rect;
	GetClientRect(&rect);
	pDC->BitBlt(0,0,rect.Width(),rect.Height(),&dcCompatible,0,0,SRCCOPY);
	return true;
	return CView::OnEraseBkgnd(pDC);
}
