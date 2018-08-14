// Matrix.h: interface for the Matrix class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MATRIX_H__2FFA1CF4_5841_483B_A272_727CA217036C__INCLUDED_)
#define AFX_MATRIX_H__2FFA1CF4_5841_483B_A272_727CA217036C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

template <class T>
class CMatrix  
{
	//用一维数组实现二维数组：关系:a[i][j]=b[i*列数+j];

public:
	CMatrix();
	CMatrix(int Row, int Col);
	~CMatrix();

	int m_Row;
	int m_Col;
	T* m_Element;

	CMatrix<T> Multiply(CMatrix<T> & Matrix);
	CMatrix<T> Plus(CMatrix<T> & Matrix);
	CMatrix<T> Minus(CMatrix<T> & Matrix);
	CMatrix<T> Transpose();
	CMatrix<T> Split(CString);

};

#endif // !defined(AFX_MATRIX_H__8A888D07_B20E_4E0D_A026_7DC9E9C22BA6__INCLUDED_)


template <class T>
CMatrix<T>::CMatrix()
{
	m_Row=0;
	m_Col=0;
}

template <class T>
CMatrix<T>::~CMatrix()
{
	//if (m_Element != NULL)
		//delete m_Element;
}


template<class T>
CMatrix<T>::CMatrix(int Row, int Col)
{
	m_Row=Row;
	m_Col=Col;
	m_Element = new T[Row*Col];
	for(int i=0;i<Row*Col;i++)
	{
		m_Element[i]=0;
	}
}

//用一维数组实现二维数组：关系:a[i][j]=b[i*列数+j];

template <class T>
CMatrix<T> CMatrix<T>::Multiply(CMatrix<T>& Matrix)
{
	CMatrix<T> NewMatrix(m_Row,Matrix.m_Col);
	for(int i=0;i<m_Row;i++)
	{
		for(int j=0;j<Matrix.m_Col;j++)
		{
			T sum=0;
			for(int m=0;m<m_Col;m++)
				sum+=m_Element[i*m_Col+m]*Matrix.m_Element[m*Matrix.m_Col+j];	//m作为前一个数组的j和后一个数组的i
			NewMatrix.m_Element[i*Matrix.m_Col+j]=sum;
		}
	}
	return NewMatrix;

}

template <class T>
CMatrix<T> CMatrix<T>::Plus(CMatrix & Matrix)
{
	CMatrix<T> NewMatrix(m_Row,m_Col);
	for(int i=0;i<m_Row;i++)
	{
		for(int j=0;j<m_Col;j++)
		{
			NewMatrix.m_Element[i*m_Col+j]=m_Element[i*m_Col+j]+Matrix.m_Element[i*m_Col+j];
		}
	}
	return NewMatrix;
}

template <class T>
CMatrix<T> CMatrix<T>::Minus(CMatrix & Matrix)
{
	CMatrix<T> NewMatrix(m_Row,m_Col);
	for(int i=0;i<m_Row;i++)
	{
		for(int j=0;j<m_Col;j++)
		{
			NewMatrix.m_Element[i*m_Col+j]=m_Element[i*m_Col+j]-Matrix.m_Element[i*m_Col+j];
		}
	}
	return NewMatrix;
}

template <class T>
CMatrix<T> CMatrix<T>::Transpose()
{
	CMatrix<T> TransMat(m_Col,m_Row);
	for(int i=0;i<m_Col;i++)
		for(int j=0;j<m_Row;j++)
		{
			TransMat.m_Element[i*TransMat.m_Col+j]=m_Element[j*m_Col+i];
		}
	return TransMat;
}

template <class T>
CMatrix<T> CMatrix<T>::Split(CString str)
{
	char* row[100];
	char* num[100];
	row[0]=strtok(str,"\n");
	num[0]=strtok(row[m_row],"\t");
}
