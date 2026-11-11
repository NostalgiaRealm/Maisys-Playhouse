
/* ==== FUN_11028de0 @ 11028de0 ==== 
 * signature: undefined4 __cdecl FUN_11028de0(short * param_1)
 * body: 11028de0-11028e04
 */

undefined4 __cdecl FUN_11028de0(short *param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)param_1 >> 8);
  if ((((*param_1 == 0) && (param_1[2] == 0)) && (param_1[1] == 0)) && (param_1[3] == 0)) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}


