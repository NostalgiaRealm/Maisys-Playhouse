
/* ==== CDocument::UpdateFrameCounts @ 004afb06 ==== 
 * signature: void __thiscall UpdateFrameCounts(CDocument * this)
 * body: 004afb06-004afbfa
 * note: Library Function - Single Match  public: virtual void __thiscall CDocument::UpdateFrameCounts(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CDocument::UpdateFrameCounts(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocument::UpdateFrameCounts(CDocument *this)

{
  int iVar1;
  code *pcVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  CFrameWnd *pCVar5;
  int iVar6;
  int local_10;
  int local_8;
  
  iVar1 = *(int *)this;
  pcVar2 = *(code **)(iVar1 + 100);
  local_8 = (*pcVar2)();
  while (local_8 != 0) {
    pCVar3 = (CWnd *)(**(code **)(iVar1 + 0x68))(&local_8);
    BVar4 = IsWindowVisible(*(HWND *)(pCVar3 + 0x1c));
    if ((BVar4 != 0) && (pCVar5 = CWnd::GetParentFrame(pCVar3), pCVar5 != (CFrameWnd *)0x0)) {
      *(undefined4 *)(pCVar5 + 0x40) = 0xffffffff;
    }
  }
  iVar6 = 0;
  local_8 = (*pcVar2)();
  while (local_8 != 0) {
    pCVar3 = (CWnd *)(**(code **)(iVar1 + 0x68))(&local_8);
    BVar4 = IsWindowVisible(*(HWND *)(pCVar3 + 0x1c));
    if (((BVar4 != 0) && (pCVar5 = CWnd::GetParentFrame(pCVar3), pCVar5 != (CFrameWnd *)0x0)) &&
       (*(int *)(pCVar5 + 0x40) == -1)) {
      iVar6 = iVar6 + 1;
      *(int *)(pCVar5 + 0x40) = iVar6;
    }
  }
  local_10 = 1;
  local_8 = (*pcVar2)();
  while (local_8 != 0) {
    pCVar3 = (CWnd *)(**(code **)(iVar1 + 0x68))(&local_8);
    BVar4 = IsWindowVisible(*(HWND *)(pCVar3 + 0x1c));
    if (((BVar4 != 0) && (pCVar5 = CWnd::GetParentFrame(pCVar3), pCVar5 != (CFrameWnd *)0x0)) &&
       (*(int *)(pCVar5 + 0x40) == local_10)) {
      if (iVar6 == 1) {
        *(undefined4 *)(pCVar5 + 0x40) = 0;
      }
      (**(code **)(*(int *)pCVar5 + 0xe4))(1);
      local_10 = local_10 + 1;
    }
  }
  return;
}


