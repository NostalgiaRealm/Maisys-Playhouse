
/* ==== FUN_11007410 @ 11007410 ==== 
 * signature: uint __cdecl FUN_11007410(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 11007410-11007423
 */

uint __cdecl FUN_11007410(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 1;
  *(undefined4 *)(param_3 + 8) = 0x14;
  return param_3 & 0xffffff00;
}


