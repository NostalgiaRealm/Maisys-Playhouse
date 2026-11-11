
/* ==== FUN_12007120 @ 12007120 ==== 
 * signature: undefined4 __cdecl FUN_12007120(undefined4 * param_1, undefined4 * param_2)
 * body: 12007120-1200719d
 */

undefined4 __cdecl FUN_12007120(undefined4 *param_1,undefined4 *param_2)

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
  return 0;
}


