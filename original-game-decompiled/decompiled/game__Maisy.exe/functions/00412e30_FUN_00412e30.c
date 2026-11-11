
/* ==== FUN_00412e30 @ 00412e30 ==== 
 * signature: undefined __fastcall FUN_00412e30(int * param_1)
 * body: 00412e30-00412e3b
 */

void __fastcall FUN_00412e30(int *param_1)

{
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 8;
  (**(code **)(*param_1 + 4))();
  return;
}


