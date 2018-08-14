// MatrixCalculator2.h : main header file for the MATRIXCALCULATOR2 application
//

#if !defined(AFX_MATRIXCALCULATOR2_H__7DF0CBDB_1AF8_48A9_A580_2CFA745D8740__INCLUDED_)
#define AFX_MATRIXCALCULATOR2_H__7DF0CBDB_1AF8_48A9_A580_2CFA745D8740__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMatrixCalculator2App:
// See MatrixCalculator2.cpp for the implementation of this class
//

class CMatrixCalculator2App : public CWinApp
{
public:
	CMatrixCalculator2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMatrixCalculator2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMatrixCalculator2App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MATRIXCALCULATOR2_H__7DF0CBDB_1AF8_48A9_A580_2CFA745D8740__INCLUDED_)
