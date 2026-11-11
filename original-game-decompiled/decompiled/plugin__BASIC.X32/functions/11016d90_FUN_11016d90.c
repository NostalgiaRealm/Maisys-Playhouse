
/* ==== FUN_11016d90 @ 11016d90 ==== 
 * signature: uint __cdecl FUN_11016d90(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 11016d90-11016da3
 */

uint __cdecl FUN_11016d90(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 8;
  return param_3 & 0xffffff00;
}


