
/* ==== CFrameWnd::OnSysCommand @ 004b8a38 ==== 
 * signature: void __thiscall OnSysCommand(CFrameWnd * this, uint param_1, long param_2)
 * body: 004b8a38-004b8adf
 * note: Library Function - Single Match  protected: void __thiscall CFrameWnd::OnSysCommand(unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnSysCommand(unsigned int,long)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::OnSysCommand(CFrameWnd *this,uint param_1,long param_2)

{
  CFrameWnd *pCVar1;
  LRESULT LVar2;
  uint uVar3;
  
  pCVar1 = CWnd::GetTopLevelFrame((CWnd *)this);
  uVar3 = param_1 & 0xfff0;
  if (*(int *)(pCVar1 + 0x50) != 0) {
    if (uVar3 < 0xf011) {
      if ((uVar3 == 0xf010) || (uVar3 == 0xf000)) {
LAB_004b8aa5:
        LVar2 = SendMessageA(*(HWND *)(this + 0x1c),0x365,0,(uVar3 - 0xf000 >> 4) + 0x1ef00);
        if (LVar2 != 0) {
          return;
        }
        SendMessageA(*(HWND *)(this + 0x1c),0x111,0xe147,0);
        return;
      }
    }
    else if (((((uVar3 == 0xf020) || (uVar3 == 0xf030)) || (uVar3 == 0xf040)) ||
             ((uVar3 == 0xf050 || (uVar3 == 0xf060)))) || ((uVar3 == 0xf120 || (uVar3 == 0xf130))))
    goto LAB_004b8aa5;
  }
  FUN_004a8882((int *)this);
  return;
}


