
/* ==== FUN_00468980 @ 00468980 ==== 
 * signature: undefined4 __fastcall FUN_00468980(int param_1)
 * body: 00468980-00468998
 */

undefined4 __fastcall FUN_00468980(int param_1)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x3a) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x3a) + 0x218))(*(undefined4 *)(param_1 + 0x48));
    return uVar1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


