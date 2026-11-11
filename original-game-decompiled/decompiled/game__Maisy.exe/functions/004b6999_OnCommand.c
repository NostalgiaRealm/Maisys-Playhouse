
/* ==== CMDIFrameWnd::OnCommand @ 004b6999 ==== 
 * signature: int __thiscall OnCommand(CMDIFrameWnd * this, uint param_1, long param_2)
 * body: 004b6999-004b6a14
 * note: Library Function - Single Match  protected: virtual int __thiscall CMDIFrameWnd::OnCommand(unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: virtual int __thiscall CMDIFrameWnd::OnCommand(unsigned int,long)
   
   Library: Visual Studio 1998 Release */

int __thiscall CMDIFrameWnd::OnCommand(CMDIFrameWnd *this,uint param_1,long param_2)

{
  CMDIChildWnd *pCVar1;
  int iVar2;
  
  pCVar1 = MDIGetActive(this,(int *)0x0);
  if ((pCVar1 != (CMDIChildWnd *)0x0) && (iVar2 = FUN_004a86b6(), iVar2 != 0)) {
    return 1;
  }
  iVar2 = CFrameWnd::OnCommand((CFrameWnd *)this,param_1,param_2);
  if (iVar2 == 0) {
    if ((param_2 == 0) && (((byte)(param_1 >> 8) & 0xf0) == 0xf0)) {
      (**(code **)(*(int *)this + 0xa4))(0x111,param_1,0);
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


