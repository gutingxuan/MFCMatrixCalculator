// MatrixCalculator2View.h : interface of the CMatrixCalculator2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MATRIXCALCULATOR2VIEW_H__CBFBB2CA_584F_4344_BB0C_E0EC9D1E6433__INCLUDED_)
#define AFX_MATRIXCALCULATOR2VIEW_H__CBFBB2CA_584F_4344_BB0C_E0EC9D1E6433__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMatrixCalculator2View : public CView
{
protected: // create from serialization only
	CMatrixCalculator2View();
	DECLARE_DYNCREATE(CMatrixCalculator2View)

// Attributes
public:
	CMatrixCalculator2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMatrixCalculator2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMatrixCalculator2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMatrixCalculator2View)
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MatrixCalculator2View.cpp
inline CMatrixCalculator2Doc* CMatrixCalculator2View::GetDocument()
   { return (CMatrixCalculator2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MATRIXCALCULATOR2VIEW_H__CBFBB2CA_584F_4344_BB0C_E0EC9D1E6433__INCLUDED_)
