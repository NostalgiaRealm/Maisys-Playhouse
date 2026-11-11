
/* ==== FUN_004b8b56 @ 004b8b56 ==== 
 * signature: undefined4 __fastcall FUN_004b8b56(int param_1)
 * body: 004b8b56-004b8b74
 */

undefined4 __fastcall FUN_004b8b56(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004bafca();
  uVar2 = 1;
  if ((*(int **)(iVar1 + 4))[7] == param_1) {
    uVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0x8c))();
  }
  return uVar2;
}


