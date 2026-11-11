
/* ==== CWnd::CancelToolTips @ 004a93a5 ==== 
 * signature: void __stdcall CancelToolTips(int param_1)
 * body: 004a93a5-004a93fb
 * note: Library Function - Single Match  public: static void __stdcall CWnd::CancelToolTips(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static void __stdcall CWnd::CancelToolTips(int)
   
   Library: Visual Studio 1998 Release */

void CWnd::CancelToolTips(int param_1)

{
  HWND hWnd;
  int *piVar1;
  SHORT SVar2;
  _AFX_THREAD_STATE *p_Var3;
  
  p_Var3 = AfxGetThreadState();
  if ((*(int *)(p_Var3 + 0xd0) != 0) &&
     (hWnd = *(HWND *)(*(int *)(p_Var3 + 0xd0) + 0x1c), hWnd != (HWND)0x0)) {
    SendMessageA(hWnd,0x401,0,0);
  }
  piVar1 = *(int **)(p_Var3 + 0x108);
  if ((param_1 != 0) && (piVar1 != (int *)0x0)) {
    SVar2 = GetKeyState(1);
    if (-1 < SVar2) {
      (**(code **)(*piVar1 + 0xe0))(0xffffffff);
    }
  }
  return;
}


