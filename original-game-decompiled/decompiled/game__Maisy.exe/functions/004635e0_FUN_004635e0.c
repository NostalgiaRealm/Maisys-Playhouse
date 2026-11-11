
/* ==== FUN_004635e0 @ 004635e0 ==== 
 * signature: undefined4 __thiscall FUN_004635e0(void * this, undefined4 param_1)
 * body: 004635e0-00463744
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004635e0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  uint3 uVar3;
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
  
  if (*(int *)((int)this + 0x3a) == 0) {
    uVar3 = (uint3)((uint)in_EAX >> 8);
    if (((((short)local_c <= (short)param_1) && ((short)param_1 < (short)local_8)) &&
        (local_c._2_2_ <= param_1._2_2_)) && (param_1._2_2_ < local_8._2_2_)) {
      return CONCAT31(uVar3,1);
    }
    return (uint)uVar3 << 8;
  }
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x38c))(&local_1c,1);
  (**(code **)(iVar1 + 0x3a0))(&local_c,1);
  (**(code **)(iVar1 + 0x3a8))(&local_14,local_78);
  DAT_004dc240 = 0;
  _DAT_004dc238 = local_c;
  DAT_004dc23c = local_8;
  FUN_00408460(*(int *)((int)this + 0x3a));
  FUN_004142c0(local_70,0x12d,0,0,0);
  local_44 = local_1c;
  local_40 = local_18;
  local_34 = local_c;
  local_30 = local_8;
  local_48 = param_1;
  local_2c = *(undefined4 *)((int)this + 0xc2);
  local_28 = local_14;
  local_24 = local_10;
  local_20 = 1;
  local_4c = 7;
  FUN_0046b770(this,(int)local_70);
  uVar2 = FUN_00409630(*(void **)((int)this + 0x3a),this);
  if ((char)uVar2 == '\0') {
    _DAT_004dc228 = param_1;
    _DAT_004dc22c = param_1;
    DAT_004dc230 = 1;
    uVar2 = FUN_00407a20(*(void **)((int)this + 0x3a),1);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  uVar3 = (uint3)((uint)uVar2 >> 8);
  if ((((short)local_c <= (short)param_1) && ((short)param_1 < (short)local_8)) &&
     ((local_c._2_2_ <= param_1._2_2_ && (param_1._2_2_ < local_8._2_2_)))) {
    return CONCAT31(uVar3,1);
  }
  return (uint)uVar3 << 8;
}


