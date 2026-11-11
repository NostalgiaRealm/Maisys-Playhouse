
/* ==== FUN_004ba055 @ 004ba055 ==== 
 * signature: undefined4 __fastcall FUN_004ba055(int param_1)
 * body: 004ba055-004ba095
 */

undefined4 __fastcall FUN_004ba055(int param_1)

{
  if (DAT_004dd434 != 0) {
    if (*(int *)(param_1 + 0x78) == 0) {
      *(int *)(param_1 + 0x78) = DAT_004dd434;
    }
    DAT_004dd434 = 0;
  }
  if (*(int **)(param_1 + 0x78) == (int *)0x0) {
    DAT_004dd430 = 0;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x78) + 0x14))(0);
  }
  return 1;
}


