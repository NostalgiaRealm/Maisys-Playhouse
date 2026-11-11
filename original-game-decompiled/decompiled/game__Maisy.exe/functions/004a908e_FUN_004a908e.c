
/* ==== FUN_004a908e @ 004a908e ==== 
 * signature: undefined4 __stdcall FUN_004a908e(int param_1)
 * body: 004a908e-004a90c7
 */

undefined4 FUN_004a908e(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = FUN_004bafca();
    iVar2 = 1;
    if ((*(byte *)(iVar1 + 0x18) & 1) == 0) {
      iVar2 = FUN_004ab920(1);
    }
    if (iVar2 == 0) {
      return 0;
    }
    *(char **)(param_1 + 0x28) = "AfxWnd40s";
  }
  return 1;
}


