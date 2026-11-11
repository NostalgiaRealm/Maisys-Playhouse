
/* ==== CMDIChildWnd::DestroyWindow @ 004b6f17 ==== 
 * signature: int __thiscall DestroyWindow(CMDIChildWnd * this)
 * body: 004b6f17-004b6f96
 * note: Library Function - Single Match  public: virtual int __thiscall CMDIChildWnd::DestroyWindow(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CMDIChildWnd::DestroyWindow(void)
   
   Library: Visual Studio 1998 Release */

int __thiscall CMDIChildWnd::DestroyWindow(CMDIChildWnd *this)

{
  HWND hWnd;
  int iVar1;
  CMDIFrameWnd *pCVar2;
  uint uVar3;
  LONG dwNewLong;
  HWND pHVar4;
  CWnd *pCVar5;
  BOOL BVar6;
  UINT Msg;
  HWND hWnd_00;
  LPARAM lParam;
  
  if (*(int *)(this + 0x1c) == 0) {
    iVar1 = 0;
  }
  else {
    pCVar2 = GetMDIFrame(this);
    hWnd = *(HWND *)(pCVar2 + 0x1c);
    uVar3 = GetWindowLongA(hWnd,-0x10);
    dwNewLong = SetWindowLongA(hWnd,-0x10,uVar3 & 0xffff7fff);
    lParam = 0;
    hWnd_00 = *(HWND *)(this + 0x1c);
    Msg = 0x221;
    pHVar4 = GetParent(hWnd_00);
    pCVar5 = CWnd::FromHandle(pHVar4);
    SendMessageA(*(HWND *)(pCVar5 + 0x1c),Msg,(WPARAM)hWnd_00,lParam);
    BVar6 = IsWindow(hWnd);
    if (BVar6 != 0) {
      SetWindowLongA(hWnd,-0x10,dwNewLong);
      (**(code **)(*(int *)pCVar2 + 0xe4))(1);
    }
    iVar1 = 1;
  }
  return iVar1;
}


