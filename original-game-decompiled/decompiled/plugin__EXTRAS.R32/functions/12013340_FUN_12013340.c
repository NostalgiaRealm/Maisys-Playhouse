
/* ==== FUN_12013340 @ 12013340 ==== 
 * signature: undefined4 __cdecl FUN_12013340(undefined4 * param_1, undefined4 * param_2)
 * body: 12013340-1201345e
 */

undefined4 __cdecl FUN_12013340(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x7d1;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 10) = 0x17;
  param_1[3] = 0x7d2;
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  *(undefined4 *)((int)param_1 + 0x16) = 0xffffffff;
  *(undefined2 *)(param_1 + 5) = 0x66;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  FUN_120273e0(0,(undefined2 *)(param_1 + 5),(int)(param_2 + 5));
  *(undefined2 *)((int)param_1 + 0x26) = 0x66;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_120273e0(0,(undefined2 *)((int)param_1 + 0x26),(int)param_2 + 0x26);
  *(undefined2 *)(param_1 + 0xe) = 0x66;
  *(undefined4 *)((int)param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  FUN_120273e0(0,(undefined2 *)(param_1 + 0xe),(int)(param_2 + 0xe));
  *(undefined2 *)((int)param_1 + 0x4a) = 0x66;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_120273e0(0,(undefined2 *)((int)param_1 + 0x4a),(int)param_2 + 0x4a);
  *(undefined2 *)(param_1 + 0x17) = 1;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  param_1[0x17] = param_2[0x17];
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x6d) = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x72) = 0;
  *(undefined2 *)((int)param_1 + 0x62) = 1;
  *(undefined1 *)((int)param_1 + 0x73) = 0;
  return 0;
}


