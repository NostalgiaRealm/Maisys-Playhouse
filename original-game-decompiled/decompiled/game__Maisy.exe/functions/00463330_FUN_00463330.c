
/* ==== FUN_00463330 @ 00463330 ==== 
 * signature: char __thiscall FUN_00463330(void * this, int * param_1)
 * body: 00463330-00463555
 */

char __thiscall FUN_00463330(void *this,int *param_1)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  int *piVar7;
  undefined4 uVar8;
  short *psVar9;
  short sVar10;
  short *psVar11;
  short sVar12;
  short local_ec [24];
  short local_bc [24];
  short local_8c [24];
  short local_5c [24];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  code *local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)this + 0x390))(&local_1c,1);
  local_8 = *param_1;
  (**(code **)(local_8 + 0x390))(&local_14,1);
  sVar6 = (**(code **)(*(int *)this + 0x2d4))();
  if ((((sVar6 != 3) || (sVar6 = (**(code **)(local_8 + 0x2d4))(), sVar6 != 3)) ||
      ((*(byte *)((int)this + 0x9c) & 2) == 0)) || ((*(byte *)(param_1 + 0x27) & 2) == 0)) {
    return '\0';
  }
  sVar6 = local_14._2_2_;
  if (local_14._2_2_ <= local_1c._2_2_) {
    sVar6 = local_1c._2_2_;
  }
  sVar10 = local_10._2_2_;
  if (local_18._2_2_ <= local_10._2_2_) {
    sVar10 = local_18._2_2_;
  }
  sVar12 = (short)local_14;
  if ((short)local_14 <= (short)local_1c) {
    sVar12 = (short)local_1c;
  }
  sVar1 = (short)local_10;
  if ((short)local_18 <= (short)local_10) {
    sVar1 = (short)local_18;
  }
  if ((sVar1 <= sVar12) || (bVar3 = true, sVar10 <= sVar6)) {
    bVar3 = false;
  }
  if (bVar3) {
    local_24 = local_1c;
    local_20 = local_18;
    local_2c = local_14;
    local_28 = local_10;
    local_c = *(code **)(*(int *)this + 0x3c0);
    piVar7 = (int *)(*local_c)();
    (**(code **)(*piVar7 + 0x27c))(local_8c);
    pcVar2 = *(code **)(local_8 + 0x3c0);
    piVar7 = (int *)(*pcVar2)();
    (**(code **)(*piVar7 + 0x27c))(local_5c);
    uVar8 = FUN_004632e0(&local_24,local_8c,&local_2c,local_5c);
    cVar4 = (char)uVar8;
    local_8._3_1_ = cVar4;
    if (cVar4 != '\0') {
      piVar7 = (int *)(*local_c)();
      cVar4 = (**(code **)(*piVar7 + 0x304))(local_ec);
      piVar7 = (int *)(*pcVar2)();
      cVar5 = (**(code **)(*piVar7 + 0x304))(local_bc);
      if ((cVar4 != '\0') || (cVar5 != '\0')) {
        psVar9 = local_ec;
        if (cVar4 == '\0') {
          psVar9 = local_8c;
        }
        psVar11 = local_bc;
        if (cVar5 == '\0') {
          psVar11 = local_5c;
        }
        uVar8 = FUN_004632e0(&local_24,psVar9,&local_2c,psVar11);
        local_8._3_1_ = (char)uVar8;
      }
      piVar7 = (int *)(*local_c)();
      (**(code **)(*piVar7 + 0x280))();
      piVar7 = (int *)(*pcVar2)();
      (**(code **)(*piVar7 + 0x280))();
      return local_8._3_1_;
    }
    piVar7 = (int *)(*local_c)();
    (**(code **)(*piVar7 + 0x280))();
    piVar7 = (int *)(*pcVar2)();
    (**(code **)(*piVar7 + 0x280))();
    return '\0';
  }
  return '\0';
}


