
/* ==== FUN_00412660 @ 00412660 ==== 
 * signature: uint __fastcall FUN_00412660(int param_1)
 * body: 00412660-00412671
 */

uint __fastcall FUN_00412660(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x3e) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00412669. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x3e) + 0x224))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}


