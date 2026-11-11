
/* ==== FUN_00463e30 @ 00463e30 ==== 
 * signature: undefined __fastcall FUN_00463e30(int * param_1)
 * body: 00463e30-00463e49
 */

void __fastcall FUN_00463e30(int *param_1)

{
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    FUN_0046ae30(param_1);
    *(undefined4 *)((int)param_1 + 0x13e) = 0;
  }
  return;
}


