
/* ==== FUN_004761a0 @ 004761a0 ==== 
 * signature: undefined4 __cdecl FUN_004761a0(int param_1)
 * body: 004761a0-004761bf
 */

undefined4 __cdecl FUN_004761a0(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 0x1a);
  uVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x16) + 4) + 0x300))();
  *puVar1 = (char)uVar2;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


