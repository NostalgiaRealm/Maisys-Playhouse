
/* ==== FUN_00414e90 @ 00414e90 ==== 
 * signature: undefined4 __fastcall FUN_00414e90(int param_1)
 * body: 00414e90-00414eb1
 */

undefined4 __fastcall FUN_00414e90(int param_1)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x3e) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00414e9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x3e) + 0x124))();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x2a) != 0) {
    uVar1 = FUN_004106b0(*(int *)(param_1 + 0x2a));
    return uVar1;
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),1);
}


