
/* ==== FUN_11001200 @ 11001200 ==== 
 * signature: undefined __cdecl FUN_11001200(int param_1, undefined2 * param_2)
 * body: 11001200-11001263
 */

void __cdecl FUN_11001200(int param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x13);
  FUN_110025f0(param_2 + 0x15,(short *)(param_1 + 0x38));
  return;
}


