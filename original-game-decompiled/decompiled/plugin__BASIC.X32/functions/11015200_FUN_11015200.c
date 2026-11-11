
/* ==== FUN_11015200 @ 11015200 ==== 
 * signature: uint __cdecl FUN_11015200(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 11015200-11015213
 */

uint __cdecl FUN_11015200(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 1;
  *(undefined4 *)(param_3 + 8) = 0x18;
  return param_3 & 0xffffff00;
}


