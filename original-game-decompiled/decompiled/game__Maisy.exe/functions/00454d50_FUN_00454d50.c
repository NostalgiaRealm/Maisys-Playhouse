
/* ==== FUN_00454d50 @ 00454d50 ==== 
 * signature: undefined4 __cdecl FUN_00454d50(short * param_1, undefined4 param_2)
 * body: 00454d50-00454da6
 */

undefined4 __cdecl FUN_00454d50(short *param_1,undefined4 param_2)

{
  if (param_1 == (short *)0x0) {
    return 0x10001;
  }
  if ((*param_1 == 0x6a) || (*param_1 == 0)) {
    *param_1 = 0x69;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if (*param_1 == 0x69) {
    *(undefined4 *)(param_1 + 1) = param_2;
    if (*(undefined4 **)(param_1 + 7) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 7) = 0;
    }
    return 0;
  }
  return 0x10000;
}


