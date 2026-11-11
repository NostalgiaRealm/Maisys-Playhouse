
/* ==== CWnd::HandleFloatingSysCommand @ 004aab4b ==== 
 * signature: int __thiscall HandleFloatingSysCommand(CWnd * this, uint param_1, long param_2)
 * body: 004aab4b-004aac0c
 * note: Library Function - Single Match  public: int __thiscall CWnd::HandleFloatingSysCommand(unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::HandleFloatingSysCommand(unsigned int,long)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::HandleFloatingSysCommand(CWnd *this,uint param_1,long param_2)

{
  HWND hWnd;
  CWnd *this_00;
  uint uVar1;
  int iVar2;
  HWND hWnd_00;
  HWND pHVar3;
  BOOL BVar4;
  
  this_00 = GetTopLevelParent(this);
  uVar1 = param_1 & 0xfff0;
  if ((uVar1 == 0xf040) || (uVar1 == 0xf050)) {
    if (((short)param_2 == 0x75) && (this_00 != (CWnd *)0x0)) {
      SetFocus(this_00);
      return 1;
    }
LAB_004aab7e:
    iVar2 = 0;
  }
  else {
    if (uVar1 == 0xf060) {
LAB_004aabad:
      if (this_00 != (CWnd *)0x0) {
        hWnd = *(HWND *)(this + 0x1c);
        hWnd_00 = GetFocus();
        pHVar3 = SetActiveWindow(*(HWND *)(this_00 + 0x1c));
        FromHandle(pHVar3);
        SendMessageA(*(HWND *)(this_00 + 0x1c),0x112,param_1,param_2);
        BVar4 = IsWindow(hWnd);
        if (BVar4 != 0) {
          SetActiveWindow(hWnd);
        }
        BVar4 = IsWindow(hWnd_00);
        if (BVar4 != 0) {
          ::SetFocus(hWnd_00);
        }
      }
    }
    else {
      if (uVar1 != 0xf100) goto LAB_004aab7e;
      if (param_2 != 0) goto LAB_004aabad;
    }
    iVar2 = 1;
  }
  return iVar2;
}


