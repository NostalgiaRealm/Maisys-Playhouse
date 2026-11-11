
/* ==== FUN_11010050 @ 11010050 ==== 
 * signature: uint __cdecl FUN_11010050(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 11010050-11010063
 */

uint __cdecl FUN_11010050(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 1;
  *(undefined4 *)(param_3 + 8) = 0x1c;
  return param_3 & 0xffffff00;
}


