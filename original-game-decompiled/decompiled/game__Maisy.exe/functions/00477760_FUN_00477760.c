
/* ==== FUN_00477760 @ 00477760 ==== 
 * signature: uint __cdecl FUN_00477760(int param_1)
 * body: 00477760-00477791
 */

uint __cdecl FUN_00477760(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x16);
  if (*(int **)(uVar2 + 4) != (int *)0x0) {
    iVar1 = FUN_0040c620(*(int **)(uVar2 + 4));
    if (iVar1 != 0) {
      FUN_00408460(iVar1);
    }
    uVar2 = FUN_0043c730(*(short **)(param_1 + 0x1a));
  }
  return uVar2 & 0xffffff00;
}


