
/* ==== FUN_13001370 @ 13001370 ==== 
 * signature: undefined4 __cdecl FUN_13001370(undefined4 * param_1, undefined4 * param_2)
 * body: 13001370-130013fd
 */

undefined4 __cdecl FUN_13001370(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x7d1;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[4] = 0;
  param_1[3] = 1;
  *(undefined2 *)((int)param_1 + 10) = 0x17;
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 1;
  *(undefined2 *)(param_1 + 5) = 0x17;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 1;
  return 0;
}


