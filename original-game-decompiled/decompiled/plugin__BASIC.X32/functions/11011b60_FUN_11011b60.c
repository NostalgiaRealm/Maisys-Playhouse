
/* ==== FUN_11011b60 @ 11011b60 ==== 
 * signature: uint __cdecl FUN_11011b60(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 11011b60-11011b73
 */

uint __cdecl FUN_11011b60(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 0xc;
  return param_3 & 0xffffff00;
}


