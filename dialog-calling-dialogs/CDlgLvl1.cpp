// CDlgLvl1.cpp : implementation file
//

#include "stdafx.h"
#include "dialog-calling-dialogs.h"
#include "CDlgLvl1.h"
#include "afxdialogex.h"
#include "CDlgLvl2.h"

// CDlgLvl1 dialog

IMPLEMENT_DYNAMIC(CDlgLvl1, CDialogEx)

CDlgLvl1::CDlgLvl1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_LVL_1, pParent)
{
}

CDlgLvl1::~CDlgLvl1()
{
}

BEGIN_MESSAGE_MAP(CDlgLvl1, CDialogEx)
    ON_WM_WINDOWPOSCHANGED()
    ON_MESSAGE(WMA_DIALOGACTION, OnDialogAction)
END_MESSAGE_MAP()

void CDlgLvl1::OnWindowPosChanged(WINDOWPOS* lpwndpos)
{
    if (!m_shownDlg && (lpwndpos->flags & SWP_SHOWWINDOW)) {
        m_shownDlg = true;
        PostMessage(WMA_DIALOGACTION);
    }
}

// Level 1 dialog opening up level 2 dialog
LRESULT CDlgLvl1::OnDialogAction(WPARAM wParam, LPARAM lParam)
{
    CDlgLvl2 x(this);
    x.DoModal();
    return LRESULT();
}
void CDlgLvl1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}



// CDlgLvl1 message handlers


BOOL CDlgLvl1::OnInitDialog()
{
    CDialogEx::OnInitDialog();
    DWORD attrib = TRUE;
    DwmSetWindowAttribute(m_hWnd, DWMWA_TRANSITIONS_FORCEDISABLED, &attrib, sizeof(attrib));
    return TRUE;  // return TRUE unless you set the focus to a control
                  // EXCEPTION: OCX Property Pages should return FALSE
}
