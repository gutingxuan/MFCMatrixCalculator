#if !defined(AFX_MATRIXDLG_H__4019576B_72BF_4984_9629_0E8A334C90B3__INCLUDED_)
#define AFX_MATRIXDLG_H__4019576B_72BF_4984_9629_0E8A334C90B3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MatrixDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMatrixDlg dialog

class CMatrixDlg : public CDialog
{
// Construction
public:
	virtual BOOL OnInitDialog();
	CMatrixDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CMatrixDlg)
	enum { IDD = IDD_MAT };
	CString	m_mat1;
	CString	m_mat2;
	CString	m_mat3;
	CString	m_num1;
	CString	m_num2;
	CString	m_row1;
	CString	m_row2;
	CString	m_col1;
	CString	m_col2;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMatrixDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CMatrixDlg)
	afx_msg void OnTrans3();
	afx_msg void OnTrans2();
	afx_msg void OnTrans1();
	afx_msg void OnPlus();
	afx_msg void OnMultiply();
	afx_msg void OnMinus();
	afx_msg void OnGet2();
	afx_msg void OnGet1();
	afx_msg void OnCal2();
	afx_msg void OnAc();
	afx_msg void OnRadio1();
	afx_msg void OnRadio2();
	afx_msg void OnCal1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MATRIXDLG_H__4019576B_72BF_4984_9629_0E8A334C90B3__INCLUDED_)
