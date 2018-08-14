// MatrixCalculator2Doc.cpp : implementation of the CMatrixCalculator2Doc class
//

#include "stdafx.h"
#include "MatrixCalculator2.h"

#include "MatrixCalculator2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMatrixCalculator2Doc

IMPLEMENT_DYNCREATE(CMatrixCalculator2Doc, CDocument)

BEGIN_MESSAGE_MAP(CMatrixCalculator2Doc, CDocument)
	//{{AFX_MSG_MAP(CMatrixCalculator2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMatrixCalculator2Doc construction/destruction

CMatrixCalculator2Doc::CMatrixCalculator2Doc()
{
	// TODO: add one-time construction code here

}

CMatrixCalculator2Doc::~CMatrixCalculator2Doc()
{
}

BOOL CMatrixCalculator2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMatrixCalculator2Doc serialization

void CMatrixCalculator2Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMatrixCalculator2Doc diagnostics

#ifdef _DEBUG
void CMatrixCalculator2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMatrixCalculator2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMatrixCalculator2Doc commands
