
/* ==== FUN_11021810 @ 11021810 ==== 
 * signature: undefined __cdecl FUN_11021810(int param_1, undefined4 * param_2)
 * body: 11021810-11021871
 */

void __cdecl FUN_11021810(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  *(undefined4 *)(param_1 + 0x14) = param_2[2];
  *(undefined4 *)(param_1 + 0x18) = param_2[3];
  *(undefined4 *)(param_1 + 0x1c) = param_2[4];
  *(undefined4 *)(param_1 + 0x20) = param_2[5];
  *(undefined4 *)(param_1 + 0x24) = param_2[6];
  *(undefined4 *)(param_1 + 0x28) = param_2[7];
  *(undefined4 *)(param_1 + 0x2c) = param_2[8];
  *(undefined4 *)(param_1 + 0x30) = param_2[9];
  *(undefined4 *)(param_1 + 0x34) = param_2[10];
  FUN_110025f0((short *)(param_2 + 0xb),(short *)(param_1 + 0x38));
  return;
}


