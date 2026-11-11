
/* ==== FUN_120118c0 @ 120118c0 ==== 
 * signature: undefined4 __cdecl FUN_120118c0(undefined2 * param_1)
 * body: 120118c0-1201194f
 */

undefined4 __cdecl FUN_120118c0(undefined2 *param_1)

{
  *param_1 = 100;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0x1c] = 1;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x1d) = 7;
  *(undefined4 *)(param_1 + 0x20) = 0xc9;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[5] = 1;
  *(undefined4 *)(param_1 + 6) = 1;
  param_1[8] = 1;
  *(undefined4 *)(param_1 + 9) = 1;
  *(undefined4 *)(param_1 + 0x22) = 5;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x14] = 1;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x15) = 1;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x17] = 0x17;
  param_1[0x1f] = 100;
  param_1[0xb] = 0x66;
  return 0;
}


