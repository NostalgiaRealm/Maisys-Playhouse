
/* ==== FUN_11025060 @ 11025060 ==== 
 * signature: uint __cdecl FUN_11025060(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 11025060-11025073
 */

uint __cdecl FUN_11025060(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 2;
  return param_3 & 0xffffff00;
}


