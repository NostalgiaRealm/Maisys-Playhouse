
/* ==== CWnd::ScrollWindow @ 004aa87d ==== 
 * signature: void __thiscall ScrollWindow(CWnd * this, int param_1, int param_2, tagRECT * param_3, tagRECT * param_4)
 * body: 004aa87d-004aa938
 * note: Library Function - Single Match  public: void __thiscall CWnd::ScrollWindow(int,int,struct tagRECT const *,struct tagRECT const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWnd::ScrollWindow(int,int,struct tagRECT const *,struct tagRECT const
   *)
   
   Library: Visual Studio 1998 Release */

void __thiscall
CWnd::ScrollWindow(CWnd *this,int param_1,int param_2,tagRECT *param_3,tagRECT *param_4)

{
  CWnd *pCVar1;
  BOOL BVar2;
  HWND hWnd;
  undefined1 local_14 [16];
  
  pCVar1 = this + 0x1c;
  BVar2 = IsWindowVisible(*(HWND *)pCVar1);
  if (((BVar2 == 0) && (param_3 == (tagRECT *)0x0)) && (param_4 == (tagRECT *)0x0)) {
    for (hWnd = GetWindow(*(HWND *)pCVar1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      GetWindowRect(hWnd,(LPRECT)local_14);
      ScreenToClient(*(HWND *)pCVar1,(LPPOINT)local_14);
      ScreenToClient(*(HWND *)pCVar1,(LPPOINT)(local_14 + 8));
      ::SetWindowPos(hWnd,(HWND)0x0,local_14._0_4_ + param_1,local_14._4_4_ + param_2,0,0,0x15);
    }
  }
  else {
    ::ScrollWindow(*(HWND *)pCVar1,param_1,param_2,param_3,param_4);
  }
  if ((*(int **)(this + 0x34) != (int *)0x0) && (param_3 == (tagRECT *)0x0)) {
    (**(code **)(**(int **)(this + 0x34) + 0x5c))(param_1,param_2);
  }
  return;
}


