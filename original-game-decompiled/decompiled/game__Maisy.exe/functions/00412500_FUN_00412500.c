
/* ==== FUN_00412500 @ 00412500 ==== 
 * signature: int __fastcall FUN_00412500(int param_1)
 * body: 00412500-0041253c
 */

int __fastcall FUN_00412500(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x42) == 0) {
    if (*(int **)(param_1 + 0x3a) != (int *)0x0) {
      iVar1 = FUN_00469f80(*(int **)(param_1 + 0x3a));
    }
  }
  else {
    iVar1 = FUN_004246a0(*(int *)(param_1 + 0x42));
  }
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == param_1) break;
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar1 + 0x3e);
  }
  return iVar2;
}


