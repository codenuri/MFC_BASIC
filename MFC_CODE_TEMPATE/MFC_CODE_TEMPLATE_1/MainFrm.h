// MainFrm.h
#pragma once
#include <afxwin.h>

class CMainFrame : public CFrameWnd
{
public:
	CMainFrame();
	~CMainFrame();

public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs) override;

	DECLARE_MESSAGE_MAP()
};