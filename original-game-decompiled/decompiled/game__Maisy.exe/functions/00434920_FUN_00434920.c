
/* ==== FUN_00434920 @ 00434920 ==== 
 * signature: undefined __stdcall FUN_00434920(undefined4 param_1, SIZE_T param_2, byte param_3)
 * body: 00434920-00434945
 */

void FUN_00434920(undefined4 param_1,SIZE_T param_2,byte param_3)

{
  if ((param_3 & 1) != 0) {
    FUN_0048ebf0(1,param_2);
    return;
  }
  FUN_00490210(param_2);
  return;
}


