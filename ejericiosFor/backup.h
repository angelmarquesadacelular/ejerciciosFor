#pragma once  //______________________________________ ejericiosFor.h  
#include "Resource.h"
class ejericiosFor: public Win::Dialog
{
public:
	ejericiosFor()
	{
	}
	~ejericiosFor()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEntrada;
	Win::Button btAgregar;
	Win::Textbox tbxSalida;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(241);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(87);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ejericiosFor";
		lb1.Create(NULL, L"Conteo", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 20, 10, 53, 25, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 84, 11, 82, 25, hWnd, 1001);
		btAgregar.Create(NULL, L"Agregar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 178, 10, 56, 28, hWnd, 1002);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 22, 55, 210, 25, hWnd, 1003);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		btAgregar.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
	}
	//_________________________________________________
	void btAgregar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btAgregar.IsEvent(e, BN_CLICKED)) {btAgregar_Click(e); return true;}
		return false;
	}
};