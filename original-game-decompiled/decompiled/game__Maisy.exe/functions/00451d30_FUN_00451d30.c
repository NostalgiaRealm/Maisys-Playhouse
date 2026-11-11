
/* ==== FUN_00451d30 @ 00451d30 ==== 
 * signature: undefined __fastcall FUN_00451d30(int * param_1)
 * body: 00451d30-00451d58
 */

void __fastcall FUN_00451d30(int *param_1)

{
  if (DAT_004dbc30 != 0) {
    (**(code **)(*param_1 + 0x54))(s_mPlayer_004dbc64);
    DAT_004dbc30 = 0;
  }
  FUN_004b0a2e();
  return;
}


