
/* ==== FUN_00411090 @ 00411090 ==== 
 * signature: short * __stdcall FUN_00411090(short * param_1)
 * body: 00411090-004110cf
 */

short * FUN_00411090(short *param_1)

{
  if (*param_1 != 1) {
    return (short *)0x0;
  }
  if ((param_1[1] == 1) && (param_1[5] == 1)) {
    return param_1 + 10;
  }
  return param_1 + param_1[1] * 3 + 2 + param_1[param_1[1] * 3 + 2] * 4 + 1;
}


