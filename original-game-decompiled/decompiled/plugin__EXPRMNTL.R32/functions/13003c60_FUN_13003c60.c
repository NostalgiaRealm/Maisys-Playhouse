
/* ==== FUN_13003c60 @ 13003c60 ==== 
 * signature: undefined __cdecl FUN_13003c60(int param_1, short param_2, short param_3, short param_4, undefined4 param_5)
 * body: 13003c60-13003c8f
 */

void __cdecl FUN_13003c60(int param_1,short param_2,short param_3,short param_4,undefined4 param_5)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x24 + param_3 * 4);
  *(undefined4 *)(*piVar1 + param_4 * 8) = param_5;
  *(int *)(*piVar1 + 4 + param_4 * 8) = (int)param_2;
  return;
}


