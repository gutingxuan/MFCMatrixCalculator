// MatrixCalculator2Doc.h : interface of the CMatrixCalculator2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MATRIXCALCULATOR2DOC_H__1A0E76E1_4EF7_4EA4_9E8A_3EDFF56BA1B6__INCLUDED_)
#define AFX_MATRIXCALCULATOR2DOC_H__1A0E76E1_4EF7_4EA4_9E8A_3EDFF56BA1B6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMatrixCalculator2Doc : public CDocument
{
protected: // create from serialization only
	CMatrixCalculator2Doc();
	DECLARE_DYNCREATE(CMatrixCalculator2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMatrixCalculator2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMatrixCalculator2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMatrixCalculator2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MATRIXCALCULATOR2DOC_H__1A0E76E1_4EF7_4EA4_9E8A_3EDFF56BA1B6__INCLUDED_)
