
/* ==== FUN_120208e0 @ 120208e0 ==== 
 * signature: undefined4 __cdecl FUN_120208e0(undefined2 * param_1, int param_2)
 * body: 120208e0-120209b3
 */

undefined4 __cdecl FUN_120208e0(undefined2 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  FUN_12027790(0,param_1,*(int *)(param_2 + 0xe));
  FUN_12027790(0,param_1 + 9,*(int *)(param_2 + 0x20));
  param_1[0x12] = 100;
  *(undefined4 *)(param_1 + 0x13) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x28);
  param_1[0x16] = *(undefined2 *)(param_2 + 0x2c);
  param_1[0x17] = 10;
  param_1[0x19] = 200;
  param_1[0x18] = 200;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x2e);
  param_1[0x19] = *(undefined2 *)(param_2 + 0x32);
  param_1[0x1a] = 10;
  param_1[0x1c] = 0x32;
  param_1[0x1b] = 0x32;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x34);
  uVar1 = *(undefined2 *)(param_2 + 0x38);
  param_1[0x1d] = 0x14;
  param_1[0x1c] = uVar1;
  param_1[0x1e] = 1;
  uVar2 = *(undefined4 *)(param_2 + 0x3a);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x1d) = uVar2;
  param_1[0x1f] = 0x14;
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x3e);
  param_1[0x21] = 0x14;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x42);
  return 0;
}


