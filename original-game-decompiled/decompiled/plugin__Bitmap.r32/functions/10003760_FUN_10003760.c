
/* ==== FUN_10003760 @ 10003760 ==== 
 * signature: undefined4 __cdecl FUN_10003760(undefined4 * param_1, undefined4 * param_2)
 * body: 10003760-100037e8
 */

undefined4 __cdecl FUN_10003760(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_10003fb0((int)param_1,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)((int)param_2 + 0x36);
  *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)((int)param_2 + 0x3a);
  *(undefined4 *)((int)param_1 + 0x3e) = *(undefined4 *)((int)param_2 + 0x3e);
  *(undefined2 *)((int)param_1 + 0x42) = *(undefined2 *)((int)param_2 + 0x42);
  param_1[0x11] = param_2[0x11];
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  FUN_10003fb0((int)param_1,(undefined2 *)((int)param_1 + 0x4a),(int)param_2 + 0x4a);
  FUN_10003fb0((int)param_1,(undefined2 *)((int)param_1 + 0x76),(int)param_2 + 0x76);
  return 0;
}


