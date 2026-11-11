
/* ==== FUN_1100d4c0 @ 1100d4c0 ==== 
 * signature: undefined __cdecl FUN_1100d4c0(byte * param_1, byte * param_2, int param_3)
 * body: 1100d4c0-1100d504
 */

void __cdecl FUN_1100d4c0(byte *param_1,byte *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if (*param_1 < *param_2) {
      *param_2 = *param_1;
    }
    if (param_1[1] < param_2[1]) {
      param_2[1] = param_1[1];
    }
    if (param_1[2] < param_2[2]) {
      param_2[2] = param_1[2];
    }
    if (param_2[3] < param_1[3]) {
      param_2[3] = param_1[3];
    }
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
  }
  return;
}


