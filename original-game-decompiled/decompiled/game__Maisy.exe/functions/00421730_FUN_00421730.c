
/* ==== FUN_00421730 @ 00421730 ==== 
 * signature: undefined __fastcall FUN_00421730(int * param_1)
 * body: 00421730-0042173b
 */

void __fastcall FUN_00421730(int *param_1)

{
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xef;
                    /* WARNING: Could not recover jumptable at 0x00421736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x19c))();
  return;
}


