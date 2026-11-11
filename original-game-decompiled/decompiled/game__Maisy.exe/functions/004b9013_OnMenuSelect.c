
/* ==== CFrameWnd::OnMenuSelect @ 004b9013 ==== 
 * signature: void __thiscall OnMenuSelect(CFrameWnd * this, uint param_1, uint param_2, HMENU__ * param_3)
 * body: 004b9013-004b9107
 * note: Library Function - Single Match  protected: void __thiscall CFrameWnd::OnMenuSelect(unsigned int,unsigned int,struct HMENU__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnMenuSelect(unsigned int,unsigned int,struct HMENU__ *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::OnMenuSelect(CFrameWnd *this,uint param_1,uint param_2,HMENU__ *param_3)

{
  CFrameWnd *pCVar1;
  CFrameWnd *pCVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  
  pCVar2 = CWnd::GetTopLevelFrame((CWnd *)this);
  if (param_2 == 0xffff) {
    this[0x24] = (CFrameWnd)((byte)this[0x24] & 0xbf);
    pCVar1 = this + 0x90;
    if (*(int *)(pCVar2 + 0x50) == 0) {
      *(WPARAM *)pCVar1 = 0xe001;
    }
    else {
      *(WPARAM *)pCVar1 = 0xe002;
    }
    SendMessageA(*(HWND *)(this + 0x1c),0x362,*(WPARAM *)pCVar1,0);
    iVar3 = (**(code **)(*(int *)this + 0xd8))();
    if (iVar3 != 0) {
      UpdateWindow(*(HWND *)(iVar3 + 0x1c));
    }
  }
  else {
    if ((param_1 == 0) || ((param_2 & 0x810) != 0)) {
      *(undefined4 *)(this + 0x90) = 0;
    }
    else if ((param_1 < 0xf000) || (0xf1ef < param_1)) {
      if (param_1 < 0xff00) {
        *(uint *)(this + 0x90) = param_1;
      }
      else {
        *(undefined4 *)(this + 0x90) = 0xef1f;
      }
    }
    else {
      *(uint *)(this + 0x90) = (param_1 - 0xf000 >> 4) + 0xef00;
    }
    pCVar2[0x24] = (CFrameWnd)((byte)pCVar2[0x24] | 0x40);
  }
  if (*(int *)(this + 0x94) != *(int *)(this + 0x90)) {
    pHVar4 = GetParent(*(HWND *)(this + 0x1c));
    pCVar5 = CWnd::FromHandle(pHVar4);
    if (pCVar5 != (CWnd *)0x0) {
      PostMessageA(*(HWND *)(this + 0x1c),0x36a,0,0);
    }
  }
  return;
}


