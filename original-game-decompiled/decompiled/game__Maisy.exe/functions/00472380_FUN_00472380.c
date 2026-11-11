
/* ==== FUN_00472380 @ 00472380 ==== 
 * signature: undefined __fastcall FUN_00472380(int * param_1)
 * body: 00472380-004723b2
 */

void __fastcall FUN_00472380(int *param_1)

{
  if (*(int *)((int)param_1 + 0x15e) != 0) {
    FUN_00436690(DAT_004dae3c,*(int *)((int)param_1 + 0x15e),
                 (ushort)*(undefined4 *)((int)param_1 + 0x15a));
  }
  *(undefined4 *)((int)param_1 + 0x15e) = 0;
  FUN_004603a0(param_1);
  return;
}


