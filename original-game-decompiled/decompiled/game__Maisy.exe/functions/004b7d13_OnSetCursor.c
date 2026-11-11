
/* ==== CFrameWnd::OnSetCursor @ 004b7d13 ==== 
 * signature: int __thiscall OnSetCursor(CFrameWnd * this, CWnd * param_1, uint param_2, uint param_3)
 * body: 004b7d13-004b7d3e
 * note: Library Function - Single Match  protected: int __thiscall CFrameWnd::OnSetCursor(class CWnd *,unsigned int,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: int __thiscall CFrameWnd::OnSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CFrameWnd::OnSetCursor(CFrameWnd *this,CWnd *param_1,uint param_2,uint param_3)

{
  CFrameWnd *pCVar1;
  int iVar2;
  
  pCVar1 = CWnd::GetTopLevelFrame((CWnd *)this);
  if (*(int *)(pCVar1 + 0x50) == 0) {
    iVar2 = FUN_004a8882((int *)this);
  }
  else {
    SetCursor(DAT_004e51e0);
    iVar2 = 1;
  }
  return iVar2;
}


