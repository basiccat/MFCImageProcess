// CPage3.cpp: 实现文件
//

#include "stdafx.h"
#include "ExperimentImg.h"
#include "CPage3.h"
#include "afxdialogex.h"


// CPage3 对话框

IMPLEMENT_DYNAMIC(CPage3, CDialogEx)

CPage3::CPage3(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

CPage3::~CPage3()
{
}

void CPage3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBOPAGE3, m_ncombopage3);
}

BOOL CPage3::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	CComboBox * cmb_function = ((CComboBox*)GetDlgItem(IDC_COMBOPAGE3));
	cmb_function->InsertString(0, _T("原图"));
	cmb_function->InsertString(1, _T("缩放旋转后"));
	cmb_function->SetCurSel(0);
	return 0;
}


BEGIN_MESSAGE_MAP(CPage3, CDialogEx)
END_MESSAGE_MAP()


// CPage3 消息处理程序
