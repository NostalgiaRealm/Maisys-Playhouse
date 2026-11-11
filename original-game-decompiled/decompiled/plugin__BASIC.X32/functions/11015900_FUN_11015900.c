
/* ==== FUN_11015900 @ 11015900 ==== 
 * signature: uint __cdecl FUN_11015900(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 11015900-11015913
 */

uint __cdecl FUN_11015900(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 0x1c;
  return param_3 & 0xffffff00;
}


