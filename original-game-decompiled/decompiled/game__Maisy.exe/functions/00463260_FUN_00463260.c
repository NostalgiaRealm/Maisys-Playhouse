
/* ==== FUN_00463260 @ 00463260 ==== 
 * signature: undefined __fastcall FUN_00463260(int * param_1)
 * body: 00463260-004632db
 */

void __fastcall FUN_00463260(int *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  param_1[0x48] = DAT_004da338;
  sVar3 = 0;
  param_1[0x49] = DAT_004da334;
  iVar1 = DAT_004da338;
  *(undefined2 *)(param_1 + 0x4b) = 0;
  param_1[0x4a] = iVar1;
  *(undefined4 *)((int)param_1 + 0x13e) = 0;
  *(undefined4 *)((int)param_1 + 0x13a) = 0;
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x314))(0);
  do {
    iVar2 = (int)sVar3;
    sVar3 = sVar3 + 1;
    *(undefined4 *)((int)param_1 + iVar2 * 4 + 0x12e) = 0;
  } while (sVar3 < 2);
  *(undefined4 *)((int)param_1 + 0x136) = 0;
  (**(code **)(**(int **)((int)param_1 + 0x5a) + 0x218))();
  (**(code **)(iVar1 + 0x380))();
  return;
}


