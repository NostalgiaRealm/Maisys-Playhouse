
/* ==== FUN_12013290 @ 12013290 ==== 
 * signature: undefined4 __cdecl FUN_12013290(undefined2 * param_1)
 * body: 12013290-12013330
 */

undefined4 __cdecl FUN_12013290(undefined2 *param_1)

{
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = 0x7d1;
  *(undefined4 *)(param_1 + 6) = 0x7d2;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[5] = 0x17;
  param_1[10] = 0x66;
  FUN_12027790(0,param_1 + 0x13,0x12035838);
  FUN_12027790(0,param_1 + 0x1c,0x120357ec);
  FUN_12027790(0,param_1 + 0x25,0x120357f4);
  param_1[0x2e] = 1;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x31] = 1;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((int)param_1 + 0x73) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  return 0;
}


