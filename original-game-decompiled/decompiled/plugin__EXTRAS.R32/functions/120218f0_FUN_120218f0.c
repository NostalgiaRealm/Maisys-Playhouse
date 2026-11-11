
/* ==== FUN_120218f0 @ 120218f0 ==== 
 * signature: undefined4 __cdecl FUN_120218f0(undefined4 * param_1, undefined4 * param_2)
 * body: 120218f0-12021944
 */

undefined4 __cdecl FUN_120218f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar1 = *(undefined2 *)(param_2 + 7);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
  *(undefined2 *)(param_1 + 7) = uVar1;
  return 0;
}


