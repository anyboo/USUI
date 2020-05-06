#pragma once

class ComputerExamineUI : public CContainerUI
{
public:
	ComputerExamineUI()
	{
		CDialogBuilder builder;
		CContainerUI* pComputerExamine = static_cast<CContainerUI*>(builder.Create(_T("ComputerExamine.xml"), (UINT)0));
		if( pComputerExamine ) {
			this->Add(pComputerExamine);
		}
		else {
			this->RemoveAll();
			return;
		}
	}
};

class MainFrameUI : public CContainerUI
{
public:
	MainFrameUI()
	{
		CDialogBuilder builder;
		CContainerUI* MainFrame = static_cast<CContainerUI*>(builder.Create(_T("MainFrame.xml")));
		if (MainFrame) {
			this->Add(MainFrame);
		}
		else {
			this->RemoveAll();
			return;
		}
	}
};

class KeyExamineUI : public CContainerUI
{
public:
	KeyExamineUI()
	{
		CDialogBuilder builder;
		CContainerUI* KeyExam = static_cast<CContainerUI*>(builder.Create(_T("KeyExamine.xml")));
		if (KeyExam) {
			this->Add(KeyExam);
		}
		else {
			this->RemoveAll();
			return;
		}
	}
};

class MyCertUI : public CContainerUI
{
public:
	MyCertUI()
	{
		CDialogBuilder builder;
		CContainerUI* MyCert = static_cast<CContainerUI*>(builder.Create(_T("Cert.xml")));
		if (MyCert) {
			this->Add(MyCert);
		}
		else {
			this->RemoveAll();
			return;
		}
	}
};

class DownloadUI : public CContainerUI
{
public:
	DownloadUI()
	{
		CDialogBuilder builder;
		CContainerUI* Download = static_cast<CContainerUI*>(builder.Create(_T("Download.xml")));
		if (Download) {
			this->Add(Download);
		}
		else {
			this->RemoveAll();
			return;
		}
	}
};

class UpgradeUI : public CContainerUI
{
public:
	UpgradeUI()
	{
		CDialogBuilder builder;
		CContainerUI* Upgrade = static_cast<CContainerUI*>(builder.Create(_T("Upgrade.xml")));
		if (Upgrade) {
			this->Add(Upgrade);
		}
		else {
			this->RemoveAll();
			return;
		}
	}
};

class CDialogBuilderCallbackEx : public IDialogBuilderCallback
{
public:
	CControlUI* CreateControl(LPCTSTR pstrClass) 
	{
		if( _tcscmp(pstrClass, _T("ComputerExamine")) == 0 ) 
			return new ComputerExamineUI;
		if (_tcscmp(pstrClass, _T("MainFrame")) == 0) 
			return new MainFrameUI;
		if (_tcscmp(pstrClass, _T("MyCert")) == 0)
			return new MyCertUI;
		if (_tcscmp(pstrClass, _T("Download")) == 0)
			return new DownloadUI;
		if (_tcscmp(pstrClass, _T("Upgrade")) == 0)
			return new UpgradeUI;
		return NULL;
	}
};