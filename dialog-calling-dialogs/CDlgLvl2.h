#pragma once


// CDlgLvl2 dialog

class CDlgLvl2 : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgLvl2)

public:
	CDlgLvl2(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CDlgLvl2();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_LVL_2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
    virtual BOOL OnInitDialog();
};
