
/* ==== FUN_10008f28 @ 10008f28 ==== 
 * signature: undefined __cdecl FUN_10008f28(int param_1, short param_2, short param_3, short param_4, undefined4 param_5)
 * body: 10008f28-10008f5e
 */

void __cdecl FUN_10008f28(int param_1,short param_2,short param_3,short param_4,undefined4 param_5)

{
  *(undefined4 *)(*(int *)(param_1 + 0x24 + param_3 * 4) + param_4 * 8) = param_5;
  *(int *)(*(int *)(param_1 + 0x24 + param_3 * 4) + 4 + param_4 * 8) = (int)param_2;
  return;
}


