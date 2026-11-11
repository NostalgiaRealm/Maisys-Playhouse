
/* ==== FUN_004afcc5 @ 004afcc5 ==== 
 * signature: undefined __fastcall FUN_004afcc5(int * param_1)
 * body: 004afcc5-004afcdf
 */

void __fastcall FUN_004afcc5(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = (**(code **)(iVar1 + 0x94))();
  if (iVar2 != 0) {
    (**(code **)(iVar1 + 0x80))();
  }
  return;
}


