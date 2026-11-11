
/* ==== FUN_11025770 @ 11025770 ==== 
 * signature: undefined __cdecl FUN_11025770(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11025770-110257e0
 */

void __cdecl FUN_11025770(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 0xc) = *param_3;
  *(undefined4 *)(param_2 + 0x10) = param_3[1];
  *(undefined4 *)(param_2 + 0x14) = param_3[2];
  *(undefined4 *)(param_2 + 0x18) = param_3[3];
  *(undefined4 *)(param_2 + 0x1c) = param_3[4];
  *(undefined4 *)(param_2 + 0x20) = param_3[5];
  *(undefined4 *)(param_2 + 0x24) = param_3[6];
  *(undefined4 *)(param_2 + 0x28) = param_3[7];
  *(undefined4 *)(param_2 + 0x2c) = param_3[8];
  FUN_110025f0((short *)(param_3 + 9),(short *)(param_2 + 0x30));
  if (*(LPVOID *)(param_2 + 0x62) != (LPVOID)0x0) {
    FUN_11013d10(param_1,*(LPVOID *)(param_2 + 0x62));
  }
  *(undefined4 *)(param_2 + 0x62) = *(undefined4 *)((int)param_3 + 0x56);
  return;
}


