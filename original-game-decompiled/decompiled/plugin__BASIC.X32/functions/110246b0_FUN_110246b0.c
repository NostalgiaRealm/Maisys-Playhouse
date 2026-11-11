
/* ==== FUN_110246b0 @ 110246b0 ==== 
 * signature: undefined4 __cdecl FUN_110246b0(short * param_1, short * param_2)
 * body: 110246b0-110246e6
 */

undefined4 __cdecl FUN_110246b0(short *param_1,short *param_2)

{
  if ((((param_2[1] == param_1[1]) && (param_2[3] == param_1[3])) && (param_2[2] == param_1[2])) &&
     (*param_2 == *param_1)) {
    return 1;
  }
  return 0;
}


