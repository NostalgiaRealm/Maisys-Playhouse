
/* ==== FUN_004773f0 @ 004773f0 ==== 
 * signature: undefined4 __cdecl FUN_004773f0(int param_1)
 * body: 004773f0-00477438
 */

undefined4 __cdecl FUN_004773f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x16) + 4);
  if (piVar2 != (int *)0x0) {
    iVar1 = FUN_0040c620(piVar2);
    param_1 = 0;
    if (iVar1 != 0) {
      param_1 = FUN_0040c620(piVar2);
      if (*(char *)(param_1 + 0xa4) != '\0') {
        piVar2 = (int *)FUN_0040c620(piVar2);
        param_1 = FUN_00405ea0(piVar2);
      }
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


