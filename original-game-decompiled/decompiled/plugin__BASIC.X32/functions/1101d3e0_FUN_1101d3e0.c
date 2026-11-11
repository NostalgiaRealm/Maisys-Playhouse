
/* ==== FUN_1101d3e0 @ 1101d3e0 ==== 
 * signature: uint __cdecl FUN_1101d3e0(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 1101d3e0-1101d3f3
 */

uint __cdecl FUN_1101d3e0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 1;
  *(undefined4 *)(param_3 + 8) = 0x1e;
  return param_3 & 0xffffff00;
}


