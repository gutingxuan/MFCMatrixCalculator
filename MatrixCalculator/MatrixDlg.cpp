// MatrixDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MatrixCalculator2.h"
#include "MatrixDlg.h"
#include "Matrix.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

CMatrix<int> IntMat1;	
CMatrix<int> IntMat2;
CMatrix<double> DoubleMat1;
CMatrix<double> DoubleMat2;
CMatrix<int> IntMat3;
CMatrix<double>  DoubleMat3;
int m_DataType=0;	//默认数据类型为Int

/////////////////////////////////////////////////////////////////////////////
// CMatrixDlg dialog


CMatrixDlg::CMatrixDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMatrixDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMatrixDlg)
	m_mat1 = _T("");
	m_mat2 = _T("");
	m_mat3 = _T("");
	m_num1 = _T("");
	m_num2 = _T("");
	m_row1 = _T("");
	m_row2 = _T("");
	m_col1 = _T("");
	m_col2 = _T("");
	//}}AFX_DATA_INIT
	
}


void CMatrixDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMatrixDlg)
	DDX_Text(pDX, IDC_MAT1, m_mat1);
	DDX_Text(pDX, IDC_MAT2, m_mat2);
	DDX_Text(pDX, IDC_MAT3, m_mat3);
	DDX_Text(pDX, IDC_NUM1, m_num1);
	DDX_Text(pDX, IDC_NUM2, m_num2);
	DDX_Text(pDX, IDC_ROW1, m_row1);
	DDX_Text(pDX, IDC_ROW2, m_row2);
	DDX_Text(pDX, IDC_COL1, m_col1);
	DDX_Text(pDX, IDC_COL2, m_col2);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMatrixDlg, CDialog)
	//{{AFX_MSG_MAP(CMatrixDlg)
	ON_BN_CLICKED(IDC_TRANS3, OnTrans3)
	ON_BN_CLICKED(IDC_TRANS2, OnTrans2)
	ON_BN_CLICKED(IDC_TRANS1, OnTrans1)
	ON_BN_CLICKED(IDC_PLUS, OnPlus)
	ON_BN_CLICKED(IDC_MULTIPLY, OnMultiply)
	ON_BN_CLICKED(IDC_MINUS, OnMinus)
	ON_BN_CLICKED(IDC_GET2, OnGet2)
	ON_BN_CLICKED(IDC_GET1, OnGet1)
	ON_BN_CLICKED(IDC_CAL2, OnCal2)
	ON_BN_CLICKED(IDC_AC, OnAc)
	ON_BN_CLICKED(IDC_RADIO1, OnRadio1)
	ON_BN_CLICKED(IDC_RADIO2, OnRadio2)
	ON_BN_CLICKED(IDC_CAL1, OnCal1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMatrixDlg message handlers

void CMatrixDlg::OnTrans3() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	m_mat3="";
	if(m_DataType==0)
	{
		IntMat3=IntMat3.Transpose();
		for(int m=0;m<IntMat3.m_Row;m++)
		{	
			for(int j=0;j<IntMat3.m_Col;j++)
			{
				CString str;
				str.Format(_T("%d"),IntMat3.m_Element[m*IntMat3.m_Col+j]);
				m_mat3+=str;
				m_mat3+="\t";
			}
			m_mat3+="\r\n";
		}	
	}
	if(m_DataType==1)
	{
		DoubleMat3=DoubleMat3.Transpose();
		for(int m=0;m<DoubleMat3.m_Row;m++)
		{	
			for(int j=0;j<DoubleMat3.m_Col;j++)
			{
				CString str;
				str.Format(_T("%.2lf"),DoubleMat3.m_Element[m*DoubleMat3.m_Col+j]);
				m_mat3+=str;
				m_mat3+="\t";
			}
			m_mat3+="\r\n";
		}	
	}
	UpdateData(false);
	
}

void CMatrixDlg::OnTrans2() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	m_mat2="";
	m_row2.Format(_T("%d"),IntMat2.m_Col);
	m_col2.Format(_T("%d"),IntMat2.m_Row);
	if(m_DataType==0)
	{
		IntMat2=IntMat2.Transpose();
		for(int m=0;m<IntMat2.m_Row;m++)
		{	
			for(int j=0;j<IntMat2.m_Col;j++)
			{
				CString str;
				str.Format(_T("%d"),IntMat2.m_Element[m*IntMat2.m_Col+j]);
				m_mat2+=str;
				m_mat2+="\t";
			}
			m_mat2+="\r\n";
		}	
	}
	if(m_DataType==1)
	{
		DoubleMat2=DoubleMat2.Transpose();
		for(int m=0;m<DoubleMat2.m_Row;m++)
		{	
			for(int j=0;j<DoubleMat2.m_Col;j++)
			{
				CString str;
				str.Format(_T("%.2lf"),DoubleMat2.m_Element[m*DoubleMat2.m_Col+j]);
				m_mat2+=str;
				m_mat2+="\t";
			}
			m_mat2+="\r\n";
		}	
	}
	UpdateData(false);
}

void CMatrixDlg::OnTrans1() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	m_mat1="";
	m_row1.Format(_T("%d"),IntMat1.m_Col);
	m_col1.Format(_T("%d"),IntMat1.m_Row);
	if(m_DataType==0)
	{
		IntMat1=IntMat1.Transpose();
		for(int m=0;m<IntMat1.m_Row;m++)
		{	
			for(int j=0;j<IntMat1.m_Col;j++)
			{
				CString str;
				str.Format(_T("%d"),IntMat1.m_Element[m*IntMat1.m_Col+j]);
				m_mat1+=str;
				m_mat1+="\t";
			}
			m_mat1+="\r\n";
		}	
	}
	if(m_DataType==1)
	{
		DoubleMat1=DoubleMat1.Transpose();
		for(int m=0;m<DoubleMat1.m_Row;m++)
		{	
			for(int j=0;j<DoubleMat1.m_Col;j++)
			{
				CString str;
				str.Format(_T("%.2lf"),DoubleMat1.m_Element[m*DoubleMat1.m_Col+j]);
				m_mat1+=str;
				m_mat1+="\t";
			}
			m_mat1+="\r\n";
		}	
	}
	UpdateData(false);
}

void CMatrixDlg::OnPlus() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	m_mat3="";
	if(m_DataType==0)
	{
		CMatrix<int> Mat(IntMat1.m_Row,IntMat1.m_Col);
		Mat=IntMat1.Plus(IntMat2);
		for(int i=0;i<Mat.m_Row;i++)
		{	
			for(int j=0;j<Mat.m_Col;j++)
			{
				CString str;
				str.Format(_T("%d"),Mat.m_Element[i*Mat.m_Col+j]);
				m_mat3+=str;
				m_mat3+="\t";
			}
			m_mat3+="\r\n";
		}
		IntMat3=Mat;
	}
	if(m_DataType==1)
	{
		CMatrix<double> Mat(DoubleMat1.m_Row,DoubleMat1.m_Col);
		Mat=DoubleMat1.Plus(DoubleMat2);
		for(int i=0;i<Mat.m_Row;i++)
		{	
			for(int j=0;j<Mat.m_Col;j++)
			{
				CString str;
				str.Format(_T("%.2lf"),Mat.m_Element[i*Mat.m_Col+j]);
				m_mat3+=str;
				m_mat3+="\t";
			}
			m_mat3+="\r\n";
		}	
		DoubleMat3=Mat;
	}
	if(IntMat1.m_Row!=IntMat2.m_Row||IntMat1.m_Col!=IntMat2.m_Col)
	{
		MessageBox("  矩阵相加时行数和列数必须相等！","温馨提示");
		m_mat3="数据输入错误，请重试";
	}
	UpdateData(false);
}

void CMatrixDlg::OnMultiply() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	m_mat3="";
	if(m_DataType==0)
	{
		CMatrix<int> Mat(IntMat1.m_Row,IntMat2.m_Col);
		Mat=IntMat1.Multiply(IntMat2);
		for(int i=0;i<Mat.m_Row;i++)
		{	
			for(int j=0;j<Mat.m_Col;j++)
			{
				CString str;
				str.Format(_T("%d"),Mat.m_Element[i*Mat.m_Col+j]);
				m_mat3+=str;
				m_mat3+="\t";
			}
			m_mat3+="\r\n";
		}	
		IntMat3=Mat;
	}
	if(m_DataType==1)
	{
		CMatrix<double> Mat(DoubleMat1.m_Row,DoubleMat2.m_Col);
		Mat=DoubleMat1.Multiply(DoubleMat2);
		for(int i=0;i<Mat.m_Row;i++)
		{	
			for(int j=0;j<Mat.m_Col;j++)
			{
				CString str;
				str.Format(_T("%.2lf"),Mat.m_Element[i*Mat.m_Col+j]);
				m_mat3+=str;
				m_mat3+="\t";
			}
			m_mat3+="\r\n";
		}	
	    DoubleMat3=Mat;
	}
	if(IntMat1.m_Col!=IntMat2.m_Row)
	{
		MessageBox("  矩阵相乘时前一个矩阵的列数和后一个矩阵的行数必须相等！","温馨提示");
		m_mat3="数据输入错误，请重试";
	}
	UpdateData(false);
}

void CMatrixDlg::OnMinus() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	m_mat3="";
	if(m_DataType==0)
	{
		CMatrix<int> Mat(IntMat1.m_Row,IntMat1.m_Col);
		Mat=IntMat1.Minus(IntMat2);
		for(int i=0;i<Mat.m_Row;i++)
		{	
			for(int j=0;j<Mat.m_Col;j++)
			{
				CString str;
				str.Format(_T("%d"),Mat.m_Element[i*Mat.m_Col+j]);
				m_mat3+=str;
				m_mat3+="\t";
			}
			m_mat3+="\r\n";
		}	
		IntMat3=Mat;
	}
	if(m_DataType==1)
	{
		CMatrix<double> Mat(DoubleMat1.m_Row,DoubleMat1.m_Col);
		Mat=DoubleMat1.Minus(DoubleMat2);
		for(int i=0;i<Mat.m_Row;i++)
		{	
			for(int j=0;j<Mat.m_Col;j++)
			{
				CString str;
				str.Format(_T("%.2lf"),Mat.m_Element[i*Mat.m_Col+j]);
				m_mat3+=str;
				m_mat3+="\t";
			}
			m_mat3+="\r\n";
		}
		DoubleMat3=Mat;
	}
	if(IntMat1.m_Row!=IntMat2.m_Row||IntMat1.m_Col!=IntMat2.m_Col)
	{
		MessageBox("  矩阵相减时行数和列数必须相等！","温馨提示");
		m_mat3="数据输入错误，请重试";
	}
	UpdateData(false);	
}

void CMatrixDlg::OnGet2() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	m_mat2="";
	if(m_DataType==0)
	{
		CMatrix<int> Mat(_ttoi(m_row2),_ttoi(m_col2));
		srand((unsigned)time(NULL));
		for(int m=0;m<Mat.m_Col*Mat.m_Row;m++)
			Mat.m_Element[m]=rand()%100;
		for(int i=0;i<Mat.m_Row;i++)
		{	
			for(int j=0;j<Mat.m_Col;j++)
			{
				CString str;
				str.Format(_T("%d"),Mat.m_Element[i*Mat.m_Col+j]);
				m_mat2+=str;
				m_mat2+="\t";
			}
			m_mat2+="\r\n";
		}
		IntMat2=Mat;
	}
	if(m_DataType==1)
	{
		CMatrix<double> Mat(_ttoi(m_row2),_ttoi(m_col2));
		srand((unsigned)time(NULL));
		for(int m=0;m<Mat.m_Col*Mat.m_Row;m++)
			Mat.m_Element[m]=rand()%10000/100.0;
		for(int i=0;i<Mat.m_Row;i++)
		{	
			for(int j=0;j<Mat.m_Col;j++)
			{
				CString str;
				str.Format(_T("%.2lf"),Mat.m_Element[i*Mat.m_Col+j]);
				m_mat2+=str;
				m_mat2+="\t";
			}
			m_mat2+="\r\n";
		}
		DoubleMat2=Mat;
	}
	UpdateData(false);
}

void CMatrixDlg::OnGet1() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	m_mat1="";
	if(m_DataType==0)
	{
		CMatrix<int> Mat(_ttoi(m_row1),_ttoi(m_col1));
		srand((unsigned)time(NULL));
		for(int m=0;m<Mat.m_Col*Mat.m_Row;m++)
			Mat.m_Element[m]=rand()%100;
		for(int i=0;i<Mat.m_Row;i++)
		{	
			for(int j=0;j<Mat.m_Col;j++)
			{
				CString str;
				str.Format(_T("%d"),Mat.m_Element[i*Mat.m_Col+j]);
				m_mat1+=str;
				m_mat1+="\t";
			}
			m_mat1+="\r\n";
		}	
		IntMat1=Mat;
	}
	if(m_DataType==1)
	{
		CMatrix<double> Mat(_ttoi(m_row1),_ttoi(m_col1));
		srand((unsigned)time(NULL));
		for(int m=0;m<Mat.m_Col*Mat.m_Row;m++)
			Mat.m_Element[m]=rand()%10000/100.0;
		for(int i=0;i<Mat.m_Row;i++)
		{	
			for(int j=0;j<Mat.m_Col;j++)
			{
				CString str;
				str.Format(_T("%.2lf"),Mat.m_Element[i*Mat.m_Col+j]);
				m_mat1+=str;
				m_mat1+="\t";
			}
			m_mat1+="\r\n";
		}
		DoubleMat1=Mat;
	}
	UpdateData(false);
}

void CMatrixDlg::OnCal2() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	m_mat3="";
	if(m_DataType==0)
	{
		IntMat3=IntMat2;
		for(int i=0;i<IntMat2.m_Row;i++)
		{	
			for(int j=0;j<IntMat2.m_Col;j++)
			{
				CString str;
				str.Format(_T("%d"),IntMat2.m_Element[i*IntMat2.m_Col+j]*_ttoi(m_num2));
				IntMat3.m_Element[i*IntMat2.m_Col+j]=IntMat2.m_Element[i*IntMat2.m_Col+j]*_ttoi(m_num2);
				m_mat3+=str;
				m_mat3+="\t";
			}
			m_mat3+="\r\n";
		}	
	}
	if(m_DataType==1)
	{
		DoubleMat3=DoubleMat2;
		for(int i=0;i<DoubleMat2.m_Row;i++)
		{	
			for(int j=0;j<DoubleMat2.m_Col;j++)
			{
				CString str;
				str.Format(_T("%.2lf"),DoubleMat2.m_Element[i*DoubleMat2.m_Col+j]*atof(m_num2));
				DoubleMat3.m_Element[i*DoubleMat2.m_Col+j]=DoubleMat2.m_Element[i*DoubleMat2.m_Col+j]*atof(m_num2);
				m_mat3+=str;
				m_mat3+="\t";
			}
			m_mat3+="\r\n";
		}	
	}
	UpdateData(false);
}

void CMatrixDlg::OnAc() 
{
	// TODO: Add your control notification handler code here
	m_mat1="";
	m_mat2="";
	m_mat3="";
	UpdateData(false);
}

void CMatrixDlg::OnRadio1() 
{
	// TODO: Add your control notification handler code here
	m_DataType=0;
}

void CMatrixDlg::OnRadio2() 
{
	// TODO: Add your control notification handler code here
	m_DataType=1;
}

BOOL CMatrixDlg::OnInitDialog()
{
	((CButton*)GetDlgItem(IDC_RADIO1))->SetCheck(TRUE);//默认初始时选中Int的数据类型
	return TRUE;
}

void CMatrixDlg::OnCal1() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	m_mat3="";
	if(m_DataType==0)
	{
		IntMat3=IntMat1;
		for(int i=0;i<IntMat1.m_Row;i++)
		{	
			for(int j=0;j<IntMat1.m_Col;j++)
			{
				CString str;
				str.Format(_T("%d"),IntMat1.m_Element[i*IntMat1.m_Col+j]*_ttoi(m_num1));
				IntMat3.m_Element[i*IntMat1.m_Col+j]=IntMat1.m_Element[i*IntMat1.m_Col+j]*_ttoi(m_num1);
				m_mat3+=str;
				m_mat3+="\t";
			}
			m_mat3+="\r\n";
		}
	}
	if(m_DataType==1)
	{
		DoubleMat3=DoubleMat1;
		for(int i=0;i<DoubleMat1.m_Row;i++)
		{	
			for(int j=0;j<DoubleMat1.m_Col;j++)
			{
				CString str;
				str.Format(_T("%.2lf"),DoubleMat1.m_Element[i*DoubleMat1.m_Col+j]*atof(m_num1));
				DoubleMat3.m_Element[i*DoubleMat1.m_Col+j]=DoubleMat1.m_Element[i*DoubleMat1.m_Col+j]*atof(m_num1);
				m_mat3+=str;
				m_mat3+="\t";
			}
			m_mat3+="\r\n";
		}	
	}
	UpdateData(false);
}
