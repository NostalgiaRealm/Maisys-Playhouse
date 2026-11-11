
/* ==== FUN_00465560 @ 00465560 ==== 
 * signature: undefined __fastcall FUN_00465560(int * param_1)
 * body: 00465560-004655b1
 */

void __fastcall FUN_00465560(int *param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)param_1 + 0xc2) = 0;
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x380))();
  (**(code **)(iVar1 + 0x314))(0);
  (**(code **)(**(int **)((int)param_1 + 0x5a) + 0x254))(0);
  *(undefined4 *)((int)param_1 + 0x13a) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  FUN_0046ad70(param_1);
  return;
}


