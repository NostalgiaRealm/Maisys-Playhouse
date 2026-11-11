
/* ==== FUN_11004ad0 @ 11004ad0 ==== 
 * signature: uint __cdecl FUN_11004ad0(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 11004ad0-11004ae3
 */

uint __cdecl FUN_11004ad0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 0xc;
  return param_3 & 0xffffff00;
}


