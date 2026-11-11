
/* ==== FUN_110289d0 @ 110289d0 ==== 
 * signature: undefined __cdecl FUN_110289d0(undefined4 param_1, int param_2, undefined4 * param_3)
 * body: 110289d0-110289e9
 */

void __cdecl FUN_110289d0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 0xc) = *param_3;
  *(undefined4 *)(param_2 + 0x10) = param_3[1];
  *(undefined4 *)(param_2 + 0x14) = param_3[2];
  return;
}


