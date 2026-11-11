
/* ==== FUN_120022e0 @ 120022e0 ==== 
 * signature: undefined4 __cdecl FUN_120022e0(undefined2 * param_1)
 * body: 120022e0-12002350
 */

undefined4 __cdecl FUN_120022e0(undefined2 *param_1)

{
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 1) = 0x7d1;
  *(undefined4 *)(param_1 + 6) = 0x7d2;
  param_1[10] = 1;
  param_1[0xd] = 1;
  *(undefined4 *)(param_1 + 0xe) = 100;
  param_1[5] = 0x17;
  FUN_12027790(0,param_1 + 0x10,0x120370fc);
  param_1[0x19] = 1;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 600;
  param_1[0x2a] = 9;
  *(undefined4 *)(param_1 + 0x2d) = 1;
  return 0;
}


