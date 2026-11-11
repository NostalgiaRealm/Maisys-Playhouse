
/* ==== FUN_1100db50 @ 1100db50 ==== 
 * signature: uint __cdecl FUN_1100db50(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 1100db50-1100db63
 */

uint __cdecl FUN_1100db50(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 0x2c;
  return param_3 & 0xffffff00;
}


