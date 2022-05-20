//#include <graphics.h>
//#include <conio.h>
//LRESULT CALLBACK CBHookProc1(int nCode, WPARAM wParam, LPARAM lParam)
//{
//	HWND hwnd = (HWND)wParam;
//	if (nCode == HCBT_ACTIVATE)
//	{
//		SetDlgItemText(hwnd, IDYES, "再来一局");//改一下字符集
//		SetDlgItemText(hwnd, IDNO, "退出游戏");
//		//可根据自己需求修改其他按钮
//	}
//	return 0;
//}
//int MyMessageBox1(HWND hwnd, TCHAR* szText, TCHAR* szCaption, UINT uType)
//{
//	int ret;
//	HHOOK hHook = SetWindowsHookEx(WH_CBT, CBHookProc, nullptr, GetCurrentThreadId());
//	ret = MessageBoxEx(hwnd, szText, szCaption, uType, MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US));
//	UnhookWindowsHookEx(hHook);
//	return ret;
//}
//
//
//
//int main()
//{
//	initgraph(720, 675);
//
//	over();
//
//	_getch();
//	closegraph();
//	return 0;
//}





