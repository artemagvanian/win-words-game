// WinWordsGame.cpp: определяет точку входа для приложения.
//

#include "stdafx.h"
#include "WinWordsGame.h"

INT_PTR CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpszCmdLine, int nCmdShow)
{
	return DialogBox(hInst, MAKEINTRESOURCE(IDD_MAINDLG), NULL, DlgProc);
}

