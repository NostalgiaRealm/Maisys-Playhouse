
/* ==== FUN_00463780 @ 00463780 ==== 
 * signature: undefined __thiscall FUN_00463780(void * this, int param_1)
 * body: 00463780-004638c4
 */

void __thiscall FUN_00463780(void *this,int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 local_78 [8];
  undefined4 local_70 [3];
  undefined4 local_64;
  undefined2 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x3a) != 0) {
    FUN_00408460(*(int *)((int)this + 0x3a));
    iVar1 = *(int *)this;
    (**(code **)(iVar1 + 0x38c))(&local_1c,1);
    (**(code **)(iVar1 + 0x3a0))(&local_c,1);
    (**(code **)(iVar1 + 0x3a8))(&local_14,local_78);
    if (((((short)param_1 < (short)local_c) || ((short)local_8 <= (short)param_1)) ||
        (param_1._2_2_ < local_c._2_2_)) || (bVar4 = true, local_8._2_2_ <= param_1._2_2_)) {
      bVar4 = false;
    }
    cVar2 = '\0';
    if (bVar4) {
      cVar2 = (**(code **)(iVar1 + 0x45c))(param_1);
    }
    (**(code **)(**(int **)((int)this + 0x5a) + 0x2a0))(&local_c);
    FUN_004142c0(local_70,0x12e,0,0,0);
    local_44 = local_1c;
    local_34 = local_c;
    local_40 = local_18;
    local_30 = local_8;
    local_48 = param_1;
    local_28 = local_14;
    local_2c = *(undefined4 *)((int)this + 0xc2);
    local_24 = local_10;
    local_4c = 7;
    local_20 = cVar2;
    FUN_0046b770(this,(int)local_70);
    local_64 = 0x135;
    if (cVar2 == '\0') {
      local_64 = 0x136;
    }
    FUN_0046b770(this,(int)local_70);
    uVar3 = FUN_00409630(*(void **)((int)this + 0x3a),this);
    if ((char)uVar3 == '\0') {
      FUN_00407a20(*(void **)((int)this + 0x3a),1);
    }
    FUN_004296b0((void *)0x0);
    FUN_00404190(*(void **)((int)this + 0x3a),param_1);
  }
  DAT_004dc230 = 0;
  return;
}


