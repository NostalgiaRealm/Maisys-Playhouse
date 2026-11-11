
/* ==== FUN_11018160 @ 11018160 ==== 
 * signature: uint __cdecl FUN_11018160(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 11018160-11018173
 */

uint __cdecl FUN_11018160(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 0x14;
  return param_3 & 0xffffff00;
}


