
/* ==== FUN_00408180 @ 00408180 ==== 
 * signature: undefined __fastcall FUN_00408180(int * param_1)
 * body: 00408180-004081a5
 */

void __fastcall FUN_00408180(int *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x96) == 0) {
    FUN_00405e90(param_1);
    return;
  }
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x96) + 0x6a);
  *(int *)((int)param_1 + 0x96) = iVar1;
  if (iVar1 != 0) {
    FUN_00408080(param_1);
    return;
  }
  FUN_00405e90(param_1);
  return;
}


