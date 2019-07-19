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
END_MESSAGE_MAP()


void CDlgLvl2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}




// CDlgLvl2 message handlers



BOOL CDlgLvl2::OnInitDialog()
{
    CDialogEx::OnInitDialog();

    DWORD attrib = TRUE;
    //DwmSetWindowAttribute(m_hWnd, DWMWA_TRANSITIONS_FORCEDISABLED, &attrib, sizeof(attrib));

    return TRUE;  // return TRUE unless you set the focus to a control
                  // EXCEPTION: OCX Property Pages should return FALSE
}
