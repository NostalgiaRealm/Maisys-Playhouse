
/* ==== FUN_00415410 @ 00415410 ==== 
 * signature: undefined __fastcall FUN_00415410(int param_1)
 * body: 00415410-00415433
 */

void __fastcall FUN_00415410(int param_1)

{
  int *piVar1;
  
  if (DAT_004da3dc == '\0') {
    piVar1 = (int *)FUN_00414e80(param_1);
    (**(code **)(*piVar1 + 300))();
  }
  FUN_00414f30();
  return;
}


