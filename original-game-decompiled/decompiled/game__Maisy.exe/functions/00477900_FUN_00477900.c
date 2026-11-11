
/* ==== FUN_00477900 @ 00477900 ==== 
 * signature: uint __cdecl FUN_00477900(int param_1)
 * body: 00477900-00477915
 */

uint __cdecl FUN_00477900(int param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x16) + 4) + 0x10))();
  return uVar1 & 0xffffff00;
}


