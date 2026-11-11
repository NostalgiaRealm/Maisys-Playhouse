
/* ==== FUN_12020860 @ 12020860 ==== 
 * signature: undefined4 __cdecl FUN_12020860(undefined2 * param_1, int param_2)
 * body: 12020860-120208da
 */

undefined4 __cdecl FUN_12020860(undefined2 *param_1,int param_2)

{
  FUN_120273e0(0,param_1,param_2);
  FUN_120273e0(0,param_1 + 9,param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x28);
  param_1[0x16] = *(undefined2 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x2e);
  param_1[0x19] = *(undefined2 *)(param_2 + 0x32);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x34);
  param_1[0x1c] = *(undefined2 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x3a);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x3e);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x42);
  return 0;
}


