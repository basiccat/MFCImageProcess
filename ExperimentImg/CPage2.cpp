// CPage2.cpp: 实现文件
//

#include "stdafx.h"
#include "ExperimentImg.h"
#include "CPage2.h"
#include "afxdialogex.h"


// CPage2 对话框

IMPLEMENT_DYNAMIC(CPage2, CDialogEx)

CPage2::CPage2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)

{
}

CPage2::~CPage2()
{
}

void CPage2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBOPAGE2, m_nIndexPAGE2);
	DDX_Control(pDX, IDC_EDIT1, m_nZoom);
}

BOOL CPage2::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	CString s("倍数/角度");
	GetDlgItem(IDC_STATIC)->SetWindowTextW(s);
	CComboBox * cmb_function = ((CComboBox*)GetDlgItem(IDC_COMBOPAGE2));
	cmb_function->InsertString(0,_T("缩放"));
	cmb_function->InsertString(1,_T("旋转"));
	cmb_function->SetCurSel(0);

	return 0;
}


BEGIN_MESSAGE_MAP(CPage2, CDialogEx)
	//ON_CBN_SELCHANGE(IDC_COMBO1, &CPage2::OnCbnSelchangeCombo1)
	
	ON_EN_CHANGE(IDC_EDIT1, &CPage2::OnEnChangeEdit1)
	ON_CBN_SELCHANGE(IDC_COMBOPAGE2, &CPage2::OnCbnSelchangeCombopage2)
END_MESSAGE_MAP()


// CPage2 消息处理程序


void CPage2::OnCbnSelchangeCombo1page2()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CPage2::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CPage2::OnCbnSelchangeCombopage2()
{
	// TODO: 在此添加控件通知处理程序代码
}
