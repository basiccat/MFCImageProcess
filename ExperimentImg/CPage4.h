#pragma once


// CPage4 对话框

class CPage4 : public CDialogEx
{
	DECLARE_DYNAMIC(CPage4)

public:
	CPage4(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPage4();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	CEdit m_nedit1;
	CEdit m_nedit2;
	CEdit m_nedit3;
	CComboBox m_nComboG;
	CStatic m_text1;
	CStatic m_text2;
	CStatic m_text3;
	afx_msg void OnEnChangeEdit2page4();
};
