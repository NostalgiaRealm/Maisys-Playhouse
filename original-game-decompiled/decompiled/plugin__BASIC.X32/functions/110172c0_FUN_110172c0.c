
/* ==== FUN_110172c0 @ 110172c0 ==== 
 * signature: undefined __cdecl FUN_110172c0(undefined4 param_1, int param_2, undefined4 * param_3)
 * body: 110172c0-1101731f
 */

void __cdecl FUN_110172c0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_2 + 0xc);
  param_3[1] = *(undefined4 *)(param_2 + 0x10);
  param_3[2] = *(undefined4 *)(param_2 + 0x14);
  param_3[3] = *(undefined4 *)(param_2 + 0x18);
  param_3[4] = *(undefined4 *)(param_2 + 0x1c);
  param_3[5] = *(undefined4 *)(param_2 + 0x20);
  param_3[6] = *(undefined4 *)(param_2 + 0x24);
  param_3[7] = *(undefined4 *)(param_2 + 0x28);
  param_3[8] = *(undefined4 *)(param_2 + 0x2c);
  param_3[9] = *(undefined4 *)(param_2 + 0x30);
  FUN_11002670((short *)(param_2 + 0x34),(short *)(param_3 + 10));
  return;
}


