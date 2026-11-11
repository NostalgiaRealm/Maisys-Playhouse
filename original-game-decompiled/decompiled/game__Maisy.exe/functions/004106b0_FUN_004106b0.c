
/* ==== FUN_004106b0 @ 004106b0 ==== 
 * signature: undefined4 __fastcall FUN_004106b0(int param_1)
 * body: 004106b0-004106c3
 */

undefined4 __fastcall FUN_004106b0(int param_1)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x2a) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004106b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x2a) + 0x124))();
    return uVar1;
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),1);
}


