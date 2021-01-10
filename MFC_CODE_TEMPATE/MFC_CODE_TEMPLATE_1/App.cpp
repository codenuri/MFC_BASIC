// App.cpp
#include "App.h"
#include "MainFrm.h"

CMyApp theApp;

CMyApp::CMyApp()
{
}
CMyApp::~CMyApp()
{
}

BOOL CMyApp::InitInstance()
{
	CWinApp::InitInstance();

	CMainFrame* pFrame = new CMainFrame;
	pFrame->Create(0, _T("Hello, MFC"));
	pFrame->ShowWindow(SW_SHOW);
	m_pMainWnd = pFrame;

	return TRUE;
}
