
/* ==== CWnd::OnNcDestroy @ 004a91ac ==== 
 * signature: void __thiscall OnNcDestroy(CWnd * this)
 * body: 004a91ac-004a92cc
 * note: Library Function - Single Match  protected: void __thiscall CWnd::OnNcDestroy(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CWnd::OnNcDestroy(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::OnNcDestroy(CWnd *this)

{
  CWnd *pCVar1;
  int iVar2;
  int iVar3;
  _AFX_THREAD_STATE *p_Var4;
  LONG LVar5;
  LONG LVar6;
  int *piVar7;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar2 = FUN_004a7052();
  if (iVar2 == 0) goto LAB_004a91ff;
  if (*(CWnd **)(iVar2 + 0x1c) == this) {
    iVar3 = FUN_004bafca();
    if (*(char *)(iVar3 + 0x14) == '\0') {
      iVar3 = FUN_004bafca();
      if (*(int *)(iVar3 + 4) == iVar2) {
        iVar3 = AfxOleCanExitApp();
        if (iVar3 == 0) goto LAB_004a91ec;
      }
      FUN_004bd490(0);
    }
LAB_004a91ec:
    *(undefined4 *)(iVar2 + 0x1c) = 0;
  }
  if (*(CWnd **)(iVar2 + 0x20) == this) {
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
LAB_004a91ff:
  if (*(int **)(this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x30) + 0x54))();
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 4))(1);
  }
  *(undefined4 *)(this + 0x34) = 0;
  if (((byte)this[0x24] & 1) != 0) {
    p_Var4 = AfxGetThreadState();
    iVar2 = *(int *)(p_Var4 + 0xd0);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) != 0)) {
      _memset(&local_2c,0,0x28);
      local_24 = *(undefined4 *)(this + 0x1c);
      local_2c = 0x28;
      local_28 = 1;
      local_20 = local_24;
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0x405,0,(LPARAM)&local_2c);
    }
  }
  pCVar1 = this + 0x1c;
  LVar5 = GetWindowLongA(*(HWND *)pCVar1,-4);
  FUN_004a8882((int *)this);
  LVar6 = GetWindowLongA(*(HWND *)pCVar1,-4);
  if (LVar6 == LVar5) {
    piVar7 = (int *)(**(code **)(*(int *)this + 0x84))();
    if (*piVar7 != 0) {
      SetWindowLongA(*(HWND *)pCVar1,-4,*piVar7);
    }
  }
  Detach(this);
  (**(code **)(*(int *)this + 0xa8))();
  return;
}


