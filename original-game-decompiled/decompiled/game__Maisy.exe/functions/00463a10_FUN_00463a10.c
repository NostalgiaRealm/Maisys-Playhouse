
/* ==== FUN_00463a10 @ 00463a10 ==== 
 * signature: undefined __thiscall FUN_00463a10(void * this, int param_1)
 * body: 00463a10-00463c28
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00463a10(void *this,int param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 local_80 [8];
  undefined4 local_78 [3];
  int local_6c;
  undefined2 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x3a) == 0) {
    return;
  }
  FUN_00408460(*(int *)((int)this + 0x3a));
  FUN_00404120(*(void **)((int)this + 0x3a),param_1);
  (**(code **)(*(int *)this + 0x38c))(&local_24,1);
  (**(code **)(*(int *)this + 0x3a0))(&local_14,1);
  (**(code **)(*(int *)this + 0x3a8))(&local_1c,local_80);
  FUN_00404190(*(void **)((int)this + 0x3a),param_1);
  if ((DAT_004dc228 == (short)param_1) && (DAT_004dc22a == param_1._2_2_)) {
    local_8 = local_8 & 0xffffff;
  }
  else {
    local_8 = CONCAT13(1,(undefined3)local_8);
  }
  if ((((short)local_14 <= (short)param_1) && ((short)param_1 < (short)local_10)) &&
     (local_14._2_2_ <= param_1._2_2_)) {
    bVar5 = true;
    if (param_1._2_2_ < local_10._2_2_) goto LAB_00463ab9;
  }
  bVar5 = false;
LAB_00463ab9:
  cVar1 = '\0';
  if (bVar5) {
    cVar1 = (**(code **)(*(int *)this + 0x45c))(param_1);
  }
  FUN_004142c0(local_78,0,0,0,0);
  local_4c = local_24;
  local_48 = local_20;
  local_3c = local_14;
  local_38 = local_10;
  local_50 = param_1;
  local_34 = *(undefined4 *)((int)this + 0xc2);
  local_30 = local_1c;
  local_2c = local_18;
  local_28 = 1;
  local_54 = 7;
  if (cVar1 == DAT_004dc230) {
    if ((local_8._3_1_ != '\0') || (DVar2 = timeGetTime(), DAT_004dc240 < (DVar2 * 6) / 100)) {
      local_c._2_2_ = (short)((uint)_DAT_004dc238 >> 0x10);
      local_8._0_2_ = (short)DAT_004dc23c;
      local_8._2_2_ = (short)((uint)DAT_004dc23c >> 0x10);
      local_c = CONCAT22(local_c._2_2_ + (param_1._2_2_ - DAT_004dc22e),
                         DAT_004dc238 + ((short)param_1 - DAT_004dc22c));
      local_8 = CONCAT22(local_8._2_2_ + (param_1._2_2_ - DAT_004dc22e),
                         (short)local_8 + ((short)param_1 - DAT_004dc22c));
      local_6c = 0x133;
      local_3c = local_c;
      local_38 = local_8;
      FUN_0046b770(this,(int)local_78);
      DVar2 = timeGetTime();
      DAT_004dc240 = DAT_004e1bf4 + (DVar2 * 6) / 100;
      iVar3 = (**(code **)(*(int *)this + 0x10))();
      FUN_0045a200(iVar3);
      _DAT_004dc228 = param_1;
    }
  }
  else {
    local_6c = (cVar1 == '\0') + 0x131;
    FUN_0046b770(this,(int)local_78);
  }
  DAT_004dc230 = cVar1;
  uVar4 = FUN_00409630(*(void **)((int)this + 0x3a),this);
  if ((char)uVar4 == '\0') {
    FUN_00407a20(*(void **)((int)this + 0x3a),1);
  }
  return;
}


