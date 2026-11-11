
/* ==== FUN_11008c50 @ 11008c50 ==== 
 * signature: uint __cdecl FUN_11008c50(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 11008c50-11008c63
 */

uint __cdecl FUN_11008c50(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 0x18;
  return param_3 & 0xffffff00;
}


