// CPage4.cpp: 实现文件
//

#include "stdafx.h"
#include "ExperimentImg.h"
#include "CPage4.h"
#include "afxdialogex.h"


// CPage4 对话框

IMPLEMENT_DYNAMIC(CPage4, CDialogEx)

CPage4::CPage4(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG4, pParent)
{

}

CPage4::~CPage4()
{
}

void CPage4::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1PAGE4, m_nedit1);
	DDX_Control(pDX, IDC_EDIT2PAGE4, m_nedit2);
	DDX_Control(pDX, IDC_EDIT3PAGE4, m_nedit3);
	DDX_Control(pDX, IDC_COMBO1PAGE4, m_nComboG);
	DDX_Control(pDX, IDC_STATIC1PAGE4, m_text1);
	DDX_Control(pDX, IDC_STATIC2PAGE4, m_text2);
	DDX_Control(pDX, IDC_STATIC3PAGE4, m_text3);
}

BOOL CPage4::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	CString s1("高斯滤波模板大小");
	CString s2("方差");
	CString s3("均值");
	GetDlgItem(IDC_STATIC1PAGE4)->SetWindowTextW(s1);
	GetDlgItem(IDC_STATIC2PAGE4)->SetWindowTextW(s2);
	GetDlgItem(IDC_STATIC3PAGE4)->SetWindowTextW(s3);

	CComboBox * cmb_function1 = ((CComboBox*)GetDlgItem(IDC_COMBO1PAGE4));
	cmb_function1->AddString(_T("高斯噪声"));
	cmb_function1->AddString(_T("平滑线性滤波"));
	
	cmb_function1->AddString(_T("维纳滤波"));
	cmb_function1->AddString(_T("高斯滤波"));
	//cmb_function1->SetCurSel(0);*/
	return 0;
}


BEGIN_MESSAGE_MAP(CPage4, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT2PAGE4, &CPage4::OnEnChangeEdit2page4)
END_MESSAGE_MAP()


// CPage4 消息处理程序


void CPage4::OnEnChangeEdit2page4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
