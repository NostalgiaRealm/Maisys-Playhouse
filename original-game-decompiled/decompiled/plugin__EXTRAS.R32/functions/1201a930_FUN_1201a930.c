
/* ==== FUN_1201a930 @ 1201a930 ==== 
 * signature: undefined4 __cdecl FUN_1201a930(undefined4 * param_1, undefined4 * param_2)
 * body: 1201a930-1201a9da
 */

undefined4 __cdecl FUN_1201a930(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  uVar1 = *(undefined2 *)((int)param_2 + 0x12);
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined2 *)((int)param_1 + 0x12) = uVar1;
  *(uint *)((int)param_1 + 0x16) = *(uint *)((int)param_2 + 0x16) & 2;
  *(undefined4 *)((int)param_1 + 0x1a) = *(undefined4 *)((int)param_2 + 0x1a);
  *(undefined2 *)((int)param_1 + 0x1e) = *(undefined2 *)((int)param_2 + 0x1e);
  FUN_12027790(0,(undefined2 *)(param_1 + 8),0);
  FUN_120273e0(0,(undefined2 *)(param_1 + 8),(int)(param_2 + 8));
  *(undefined4 *)((int)param_1 + 0x32) = *(undefined4 *)((int)param_2 + 0x32);
  *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)((int)param_2 + 0x36);
  *(undefined4 *)((int)param_1 + 0x52) = *(undefined4 *)((int)param_2 + 0x52);
  *(undefined4 *)((int)param_1 + 0x56) = *(undefined4 *)((int)param_2 + 0x56);
  *(undefined4 *)((int)param_1 + 0x5a) = *(undefined4 *)((int)param_2 + 0x5a);
  *(undefined2 *)((int)param_1 + 0x5e) = *(undefined2 *)((int)param_2 + 0x5e);
  return 0;
}


