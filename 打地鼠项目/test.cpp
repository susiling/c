//#include <graphics.h>
//#include <conio.h>
//LRESULT CALLBACK CBHookProc1(int nCode, WPARAM wParam, LPARAM lParam)
//{
//	HWND hwnd = (HWND)wParam;
//	if (nCode == HCBT_ACTIVATE)
//	{
//		SetDlgItemText(hwnd, IDYES, "����һ��");//��һ���ַ���
//		SetDlgItemText(hwnd, IDNO, "�˳���Ϸ");
//		//�ɸ����Լ������޸�������ť
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





