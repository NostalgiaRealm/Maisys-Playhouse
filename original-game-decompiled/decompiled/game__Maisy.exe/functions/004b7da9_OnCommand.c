
/* ==== CFrameWnd::OnCommand @ 004b7da9 ==== 
 * signature: int __thiscall OnCommand(CFrameWnd * this, uint param_1, long param_2)
 * body: 004b7da9-004b7e26
 * note: Library Function - Single Match  protected: virtual int __thiscall CFrameWnd::OnCommand(unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: virtual int __thiscall CFrameWnd::OnCommand(unsigned int,long)
   
   Library: Visual Studio 1998 Release */

int __thiscall CFrameWnd::OnCommand(CFrameWnd *this,uint param_1,long param_2)

{
  CFrameWnd *pCVar1;
  LRESULT LVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1 & 0xffff;
  pCVar1 = CWnd::GetTopLevelFrame((CWnd *)this);
  if ((((*(int *)(pCVar1 + 0x50) == 0) || (param_2 != 0)) || (uVar4 == 0xe146)) ||
     ((uVar4 == 0xe147 || (uVar4 == 0xe145)))) {
    iVar3 = FUN_004aa1e1(this,param_1,param_2);
  }
  else {
    LVar2 = SendMessageA(*(HWND *)(this + 0x1c),0x365,0,uVar4 + 0x10000);
    if (LVar2 == 0) {
      SendMessageA(*(HWND *)(this + 0x1c),0x111,0xe147,0);
    }
    iVar3 = 1;
  }
  return iVar3;
}


