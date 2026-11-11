
/* ==== FUN_1201f570 @ 1201f570 ==== 
 * signature: undefined4 __cdecl FUN_1201f570(undefined4 * param_1, undefined4 * param_2)
 * body: 1201f570-1201f647
 */

undefined4 __cdecl FUN_1201f570(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
  FUN_12027790(0,(undefined2 *)(param_1 + 4),0);
  FUN_120273e0(0,(undefined2 *)(param_1 + 4),(int)(param_2 + 4));
  *(undefined4 *)((int)param_1 + 0x22) = *(undefined4 *)((int)param_2 + 0x22);
  *(undefined2 *)((int)param_1 + 0x26) = *(undefined2 *)((int)param_2 + 0x26);
  param_1[10] = param_2[10];
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0xb);
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)((int)param_2 + 0x2e);
  *(undefined4 *)((int)param_1 + 0x32) = *(undefined4 *)((int)param_2 + 0x32);
  *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)((int)param_2 + 0x36);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined4 *)((int)param_1 + 0x42) = *(undefined4 *)((int)param_2 + 0x42);
  *(undefined4 *)((int)param_1 + 0x46) = *(undefined4 *)((int)param_2 + 0x46);
  *(undefined2 *)((int)param_1 + 0x4a) = *(undefined2 *)((int)param_2 + 0x4a);
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(param_2 + 0x15);
  return 0;
}


