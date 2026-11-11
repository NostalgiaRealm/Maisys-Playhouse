
/* ==== FUN_110232a0 @ 110232a0 ==== 
 * signature: uint __cdecl FUN_110232a0(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 110232a0-110232b3
 */

uint __cdecl FUN_110232a0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 8;
  return param_3 & 0xffffff00;
}


