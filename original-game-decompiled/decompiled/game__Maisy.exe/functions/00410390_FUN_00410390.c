
/* ==== FUN_00410390 @ 00410390 ==== 
 * signature: undefined __fastcall FUN_00410390(int * param_1)
 * body: 00410390-004103b4
 */

void __fastcall FUN_00410390(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x10c))();
  (**(code **)(iVar1 + 0x128))();
  if ((*(byte *)((int)param_1 + 0x4a) & 2) != 0) {
    FUN_0045f210();
  }
  return;
}


