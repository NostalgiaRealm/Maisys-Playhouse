
/* ==== FUN_11027fe0 @ 11027fe0 ==== 
 * signature: undefined __cdecl FUN_11027fe0(int param_1, undefined4 * param_2)
 * body: 11027fe0-1102801d
 */

void __cdecl FUN_11027fe0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  *(undefined4 *)(param_1 + 0x14) = param_2[0x19];
  FUN_110025f0((short *)(param_2 + 2),(short *)(param_1 + 0x18));
  FUN_110025f0((short *)((int)param_2 + 0x36),(short *)(param_1 + 0x46));
  return;
}


