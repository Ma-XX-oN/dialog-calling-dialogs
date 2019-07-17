// CDlgLvl2.cpp : implementation file
//

#include "stdafx.h"
#include "dialog-calling-dialogs.h"
#include "CDlgLvl2.h"
#include "afxdialogex.h"


// CDlgLvl2 dialog

IMPLEMENT_DYNAMIC(CDlgLvl2, CDialogEx)

CDlgLvl2::CDlgLvl2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_LVL_2, pParent)
{

}

CDlgLvl2::~CDlgLvl2()
{
}

BEGIN_MESSAGE_MAP(CDlgLvl2, CDialogEx)
    ON_WM_WINDOWPOSCHANGING()
END_MESSAGE_MAP()

void CDlgLvl2::OnWindowPosChanging(WINDOWPOS* lpwndpos)
{
    ASSERT(lpwndpos->hwnd == m_hWnd);
    // Offset dialog to see the problem of dlg2 showing up below dlg1
    if (!(lpwndpos->flags & SWP_NOMOVE)) {
        lpwndpos->x += 100;
        lpwndpos->y += 100;
    }
}

void CDlgLvl2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}




// CDlgLvl2 message handlers
