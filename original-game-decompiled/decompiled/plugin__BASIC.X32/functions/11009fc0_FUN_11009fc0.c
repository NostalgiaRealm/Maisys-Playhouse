
/* ==== FUN_11009fc0 @ 11009fc0 ==== 
 * signature: undefined __cdecl FUN_11009fc0(int param_1, undefined4 * param_2)
 * body: 11009fc0-1100a015
 */

void __cdecl FUN_11009fc0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  param_2[1] = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)param_2 + 0x4e) = *(undefined4 *)(param_1 + 0x14);
  param_2[2] = *(undefined4 *)(param_1 + 0x18);
  param_2[3] = *(undefined4 *)(param_1 + 0x1c);
  param_2[4] = *(undefined4 *)(param_1 + 0x20);
  param_2[5] = *(undefined4 *)(param_1 + 0x24);
  param_2[6] = *(undefined4 *)(param_1 + 0x28);
  param_2[7] = *(undefined4 *)(param_1 + 0x2c);
  FUN_11002670((short *)(param_1 + 0x30),(short *)(param_2 + 8));
  return;
}


