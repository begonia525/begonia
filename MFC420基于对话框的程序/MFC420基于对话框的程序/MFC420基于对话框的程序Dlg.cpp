
// MFC420���ڶԻ���ĳ���Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC420���ڶԻ���ĳ���.h"
#include "MFC420���ڶԻ���ĳ���Dlg.h"
#include "afxdialogex.h"
#include"Dlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFC420���ڶԻ���ĳ���Dlg �Ի���



CMFC420���ڶԻ���ĳ���Dlg::CMFC420���ڶԻ���ĳ���Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFC420_DIALOG, pParent)
	, a(0)
	, b(0)
	, c(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFC420���ڶԻ���ĳ���Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Control(pDX, IDC_LIST1, x);
	DDX_Text(pDX, IDC_EDIT3, c);
}

BEGIN_MESSAGE_MAP(CMFC420���ڶԻ���ĳ���Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFC420���ڶԻ���ĳ���Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CMFC420���ڶԻ���ĳ���Dlg ��Ϣ�������

BOOL CMFC420���ڶԻ���ĳ���Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������
	x.AddString(_T("+"));
	x.AddString(_T("-"));
	x.AddString(_T("*"));
	x.AddString(_T("/"));
	x.AddString(_T("��ƽ��"));
	x.AddString(_T("����"));

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CMFC420���ڶԻ���ĳ���Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMFC420���ڶԻ���ĳ���Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMFC420���ڶԻ���ĳ���Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFC420���ڶԻ���ĳ���Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int y1;
	CString s1;
	int n=x.GetCurSel();
	if (n == 0)
	{   
		this->UpdateData(true);
		c = a - b;
		UpdateData(false);
		
		y1 = c;
		
	}
	else if(n==1)
	{
		this->UpdateData(true);
		c = a * b;
		UpdateData(false);
		y1 = c;
	}
	else if (n == 2)
	{
		this->UpdateData(true);
		c = a / b;
		UpdateData(false);
		y1 = c;
	}
	else if (n == 3)
	{  
		this->UpdateData(true);
		c = a + b;
		UpdateData(false);
		y1 = c;
		
	}
	else if (n == 4)
	{
		this->UpdateData(true);
		c = a*a;
		UpdateData(false);
		y1 = c;
	}
	else if (n == 5)
	{
		this->UpdateData(true);
		c = (float)1/a;
		UpdateData(false);
		y1 = c;
	}
	  // Dlg0 dlg;
	   //dlg.y = y1;
	   //int r = dlg.DoModal();   
	 //  if (r == IDOK) {}
}
