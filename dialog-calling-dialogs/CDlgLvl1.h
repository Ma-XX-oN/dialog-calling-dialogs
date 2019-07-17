#pragma once


// CDlgLvl1 dialog

class CDlgLvl1 : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgLvl1)

public:
	CDlgLvl1(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CDlgLvl1();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_LVL_1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    void OnWindowPosChanged(WINDOWPOS * lpwndpos);
    LRESULT OnDialogAction(WPARAM wParam, LPARAM lParam);

    bool m_shownDlg = false;

	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnTimer(UINT_PTR nIDEvent);
};
