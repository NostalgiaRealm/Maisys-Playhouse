
/* ==== FUN_004b9c2a @ 004b9c2a ==== 
 * signature: undefined __stdcall FUN_004b9c2a(void)
 * body: 004b9c2a-004b9c70
 */

void FUN_004b9c2a(void)

{
  CWnd *this;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004b9cb7();
  if (iVar1 == 0) {
    AfxOleSetUserCtrl(1);
    iVar1 = FUN_004bafca();
    iVar1 = *(int *)(iVar1 + 4);
    this = *(CWnd **)(iVar1 + 0x1c);
    if (this == (CWnd *)0x0) {
      iVar1 = FUN_004bafca();
      if (*(char *)(iVar1 + 0x14) == '\0') {
        FUN_004bd490(0);
      }
    }
    else {
      iVar2 = CWnd::IsWindowEnabled(this);
      if (iVar2 != 0) {
        (**(code **)(**(int **)(iVar1 + 0x1c) + 0x5c))();
      }
    }
  }
  return;
}


