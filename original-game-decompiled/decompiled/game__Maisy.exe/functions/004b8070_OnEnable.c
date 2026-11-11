
/* ==== CFrameWnd::OnEnable @ 004b8070 ==== 
 * signature: void __thiscall OnEnable(CFrameWnd * this, int param_1)
 * body: 004b8070-004b812e
 * note: Library Function - Single Match  protected: void __thiscall CFrameWnd::OnEnable(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnEnable(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::OnEnable(CFrameWnd *this,int param_1)

{
  CFrameWnd *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  
  if ((param_1 != 0) && (((byte)this[0x24] & 4) != 0)) {
    CWnd::EnableWindow((CWnd *)this,0);
    SetFocus((HWND)0x0);
    return;
  }
  pCVar1 = this + 0x1c;
  pHVar2 = GetParent(*(HWND *)pCVar1);
  pCVar3 = CWnd::FromHandle(pHVar2);
  if (pCVar3 != (CWnd *)0x0) {
    return;
  }
  if (param_1 == 0) {
    if (*(int *)(this + 0xa0) != 0) goto LAB_004b8116;
    this[0x24] = (CFrameWnd)((byte)this[0x24] | 0x80);
    (**(code **)(*(int *)this + 0x8c))();
  }
  else if ((*(uint *)(this + 0x24) & 0x80) != 0) {
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xffffff7f;
    (**(code **)(*(int *)this + 0x90))();
    pHVar2 = GetActiveWindow();
    if (pHVar2 == *(HWND *)pCVar1) {
      SendMessageA(*(HWND *)pCVar1,6,1,0);
    }
  }
  if ((param_1 != 0) && (((byte)this[0x24] & 0x20) != 0)) {
    SendMessageA(*(HWND *)pCVar1,0x86,1,0);
  }
LAB_004b8116:
  NotifyFloatingWindows(this,(-(uint)(param_1 == 0) & 0x10) + 0x10);
  return;
}


