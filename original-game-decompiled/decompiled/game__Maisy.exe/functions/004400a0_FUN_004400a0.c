
/* ==== FUN_004400a0 @ 004400a0 ==== 
 * signature: undefined __fastcall FUN_004400a0(int * param_1)
 * body: 004400a0-004400d8
 */

void __fastcall FUN_004400a0(int *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x7e) != 0) {
    iVar1 = FUN_0048ced3();
    if (iVar1 == 0) {
      FUN_00440140((int)param_1);
      FUN_0048d0a7();
      FUN_00440170(param_1);
    }
  }
  return;
}


