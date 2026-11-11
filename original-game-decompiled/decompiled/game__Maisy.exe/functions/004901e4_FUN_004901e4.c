
/* ==== FUN_004901e4 @ 004901e4 ==== 
 * signature: float10 __stdcall FUN_004901e4(void)
 * body: 004901e4-00490201
 */

float10 FUN_004901e4(void)

{
  ushort in_FPUStatusWord;
  float10 in_ST0;
  float10 in_ST1;
  float10 extraout_ST1;
  
  do {
    if (DAT_004dded4 == 1) {
      in_ST1 = FUN_0049921c();
      in_ST0 = extraout_ST1;
    }
    else {
      in_ST1 = in_ST1 - (float10)(unkint10)(in_ST1 / in_ST0) * in_ST0;
    }
  } while ((in_FPUStatusWord & 0x400) != 0);
  return in_ST1;
}


