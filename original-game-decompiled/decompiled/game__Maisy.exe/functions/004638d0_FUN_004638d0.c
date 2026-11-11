
/* ==== FUN_004638d0 @ 004638d0 ==== 
 * signature: undefined __fastcall FUN_004638d0(int * param_1)
 * body: 004638d0-00463a01
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004638d0(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined1 local_78 [8];
  undefined4 local_70 [9];
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)((int)param_1 + 0x3a) != 0) {
    DVar1 = timeGetTime();
    if (DAT_004dc240 < (DVar1 * 6) / 100) {
      local_c = _DAT_004dc238;
      local_8 = DAT_004dc23c;
      FUN_00408460(*(int *)((int)param_1 + 0x3a));
      iVar2 = *param_1;
      (**(code **)(iVar2 + 0x38c))(&local_1c,1);
      (**(code **)(iVar2 + 0x3a8))(&local_14,local_78);
      local_c = CONCAT22(local_c._2_2_ + (DAT_004dc22a - DAT_004dc22e),
                         (short)local_c + (DAT_004dc228 - DAT_004dc22c));
      local_8 = CONCAT22(local_8._2_2_ + (DAT_004dc22a - DAT_004dc22e),
                         (short)local_8 + (DAT_004dc228 - DAT_004dc22c));
      FUN_004142c0(local_70,0x133,0,0,0);
      local_44 = local_1c;
      local_40 = local_18;
      local_34 = local_c;
      local_30 = local_8;
      local_48 = _DAT_004dc228;
      local_2c = *(undefined4 *)((int)param_1 + 0xc2);
      local_28 = local_14;
      local_24 = local_10;
      local_20 = 1;
      local_4c = 7;
      FUN_0046b770(param_1,(int)local_70);
      DVar1 = timeGetTime();
      DAT_004dc240 = DAT_004e1bf4 + (DVar1 * 6) / 100;
      iVar2 = (**(code **)(iVar2 + 0x10))();
      FUN_0045a200(iVar2);
    }
  }
  return;
}


