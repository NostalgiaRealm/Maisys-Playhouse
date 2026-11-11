
/* ==== CFrameWnd::GetControlBar @ 004b9376 ==== 
 * signature: CControlBar * __thiscall GetControlBar(CFrameWnd * this, uint param_1)
 * body: 004b9376-004b93b9
 * note: Library Function - Single Match  public: class CControlBar * __thiscall CFrameWnd::GetControlBar(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CControlBar * __thiscall CFrameWnd::GetControlBar(unsigned int)
   
   Library: Visual Studio 1998 Release */

CControlBar * __thiscall CFrameWnd::GetControlBar(CFrameWnd *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  CControlBar *pCVar3;
  undefined4 *local_8;
  
  if (param_1 == 0) {
LAB_004b93b0:
    pCVar3 = (CControlBar *)0x0;
  }
  else {
    local_8 = *(undefined4 **)(this + 0x70);
    do {
      if (local_8 == (undefined4 *)0x0) goto LAB_004b93b0;
      puVar1 = (undefined4 *)*local_8;
      pCVar3 = (CControlBar *)local_8[2];
      uVar2 = GetDlgCtrlID(*(HWND *)(pCVar3 + 0x1c));
      local_8 = puVar1;
    } while ((uVar2 & 0xffff) != param_1);
  }
  return pCVar3;
}


