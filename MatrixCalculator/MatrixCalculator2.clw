; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMatrixDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MatrixCalculator2.h"
LastPage=0

ClassCount=6
Class1=CMatrixCalculator2App
Class2=CMatrixCalculator2Doc
Class3=CMatrixCalculator2View
Class4=CMainFrame

ResourceCount=3
Resource1=IDR_MAINFRAME
Resource2=IDD_ABOUTBOX
Class5=CAboutDlg
Class6=CMatrixDlg
Resource3=IDD_MAT

[CLS:CMatrixCalculator2App]
Type=0
HeaderFile=MatrixCalculator2.h
ImplementationFile=MatrixCalculator2.cpp
Filter=N

[CLS:CMatrixCalculator2Doc]
Type=0
HeaderFile=MatrixCalculator2Doc.h
ImplementationFile=MatrixCalculator2Doc.cpp
Filter=N

[CLS:CMatrixCalculator2View]
Type=0
HeaderFile=MatrixCalculator2View.h
ImplementationFile=MatrixCalculator2View.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CMatrixCalculator2View


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=IDM_MAT
BaseClass=CFrameWnd
VirtualFilter=fWC




[CLS:CAboutDlg]
Type=0
HeaderFile=MatrixCalculator2.cpp
ImplementationFile=MatrixCalculator2.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
Command17=IDM_MAT
CommandCount=17

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_MAT]
Type=1
Class=CMatrixDlg
ControlCount=32
Control1=IDC_STATIC,button,1342177287
Control2=IDC_MAT1,edit,1353777284
Control3=IDC_STATIC,static,1342308352
Control4=IDC_ROW1,edit,1350631552
Control5=IDC_GET1,button,1342242816
Control6=IDC_STATIC,static,1342308352
Control7=IDC_COL1,edit,1350631552
Control8=IDC_TRANS1,button,1342242816
Control9=IDC_STATIC,static,1342308352
Control10=IDC_NUM1,edit,1350631552
Control11=IDC_CAL1,button,1342242816
Control12=IDC_STATIC,button,1342177287
Control13=IDC_MAT2,edit,1353777284
Control14=IDC_STATIC,static,1342308352
Control15=IDC_ROW2,edit,1350631552
Control16=IDC_GET2,button,1342242816
Control17=IDC_STATIC,static,1342308352
Control18=IDC_COL2,edit,1350631552
Control19=IDC_TRANS2,button,1342242816
Control20=IDC_STATIC,static,1342308352
Control21=IDC_NUM2,edit,1350631552
Control22=IDC_CAL2,button,1342242816
Control23=IDC_STATIC,button,1342177287
Control24=IDC_MAT3,edit,1353777284
Control25=IDC_PLUS,button,1342242816
Control26=IDC_MINUS,button,1342242816
Control27=IDC_MULTIPLY,button,1342242816
Control28=IDC_TRANS3,button,1342242816
Control29=IDC_STATIC,button,1342177287
Control30=IDC_AC,button,1342242816
Control31=IDC_RADIO1,button,1342177289
Control32=IDC_RADIO2,button,1342177289

[CLS:CMatrixDlg]
Type=0
HeaderFile=MatrixDlg.h
ImplementationFile=MatrixDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_TRANS1

