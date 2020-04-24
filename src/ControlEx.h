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

class KeyExamineUI : public CContainerUI
{
public:
	KeyExamineUI()
	{
		CDialogBuilder builder;
		CContainerUI* KeyExam = static_cast<CContainerUI*>(builder.Create(_T("KeyExamine.xml"), (UINT)0));
		if (KeyExam) {
			this->Add(KeyExam);
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
		if (_tcscmp(pstrClass, _T("KeyExamine")) == 0) 
			return new KeyExamineUI;
		return NULL;
	}
};