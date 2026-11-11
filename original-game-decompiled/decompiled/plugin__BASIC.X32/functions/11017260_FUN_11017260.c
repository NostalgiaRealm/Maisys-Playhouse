
/* ==== FUN_11017260 @ 11017260 ==== 
 * signature: undefined __cdecl FUN_11017260(undefined4 param_1, int param_2, undefined4 * param_3)
 * body: 11017260-110172bf
 */

void __cdecl FUN_11017260(undefined4 param_1,int param_2,undefined4 *param_3)

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
  *(undefined4 *)(param_2 + 0x30) = param_3[9];
  FUN_110025f0((short *)(param_3 + 10),(short *)(param_2 + 0x34));
  return;
}


