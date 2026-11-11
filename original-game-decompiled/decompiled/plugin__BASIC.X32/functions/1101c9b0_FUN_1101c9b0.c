
/* ==== FUN_1101c9b0 @ 1101c9b0 ==== 
 * signature: uint __cdecl FUN_1101c9b0(undefined4 * param_1, undefined2 * param_2, int param_3)
 * body: 1101c9b0-1101c9e0
 */

uint __cdecl FUN_1101c9b0(undefined4 *param_1,undefined2 *param_2,int param_3)

{
  uint uVar1;
  
  *param_2 = 0xd;
  param_2[1] = *(short *)(param_3 + 6) + 1;
  uVar1 = FUN_110024d0(param_1,param_3 + 8);
  *(uint *)(param_2 + 2) = uVar1;
  return uVar1 & 0xffff0000;
}


