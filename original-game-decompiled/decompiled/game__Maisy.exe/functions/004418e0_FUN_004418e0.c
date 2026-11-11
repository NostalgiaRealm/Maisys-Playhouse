
/* ==== FUN_004418e0 @ 004418e0 ==== 
 * signature: undefined __thiscall FUN_004418e0(void * this, char param_1)
 * body: 004418e0-00441a54
 */

void __thiscall FUN_004418e0(void *this,char param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  void *pvVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  undefined4 local_30 [7];
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  iVar3 = FUN_0043fd60((int)this);
  if ((iVar3 != 0) && (uVar4 = FUN_00441a60((int)this), (char)uVar4 != param_1)) {
    FUN_004401e0(this,0x400,param_1);
    FUN_004402c0(this,param_1);
    cVar2 = FUN_004413d0((int)this);
    if ((cVar2 != '\0') && (param_1 != '\0')) {
      puVar8 = local_30;
      pcVar1 = *(code **)(*(int *)this + 0x210);
      piVar5 = (int *)(*pcVar1)();
      uVar7 = 1;
      pvVar6 = (void *)FUN_0041ed90((int)this);
      FUN_00406bb0(pvVar6,uVar7,piVar5,puVar8);
      piVar5 = (int *)(*pcVar1)();
      puVar8 = (undefined4 *)0x0;
      (**(code **)(*piVar5 + 300))();
      piVar5 = (int *)(*pcVar1)(local_30);
      uVar7 = 0;
      pvVar6 = (void *)FUN_0041ed90((int)this);
      FUN_00406bb0(pvVar6,uVar7,piVar5,puVar8);
    }
    FUN_0043fd60((int)this);
    FUN_0048d4fe();
    FUN_00441e20(this,(undefined4 *)&local_14);
    pcVar1 = *(code **)(*(int *)this + 0x210);
    piVar5 = (int *)(*pcVar1)();
    (**(code **)(*piVar5 + 0x388))(&local_c);
    if (param_1 != '\0') {
      local_14 = -local_14;
    }
    local_c = local_c + local_14;
    if (param_1 == '\0') {
      local_10 = -local_10;
    }
    local_8 = local_8 + local_10;
    if (param_1 != '\0') {
      local_12 = -local_12;
    }
    local_a = local_a + local_12;
    if (param_1 == '\0') {
      local_e = -local_e;
    }
    local_6 = local_6 + local_e;
    piVar5 = (int *)(*pcVar1)();
    (**(code **)(*piVar5 + 900))(&local_c,0);
    piVar5 = (int *)(*pcVar1)();
    (**(code **)(*piVar5 + 0x314))(0);
    piVar5 = (int *)(*pcVar1)();
    (**(code **)(*piVar5 + 0x3e4))();
    piVar5 = (int *)(*pcVar1)();
    (**(code **)(*piVar5 + 0x290))(0);
    if (*(int *)((int)this + 0xc4) != 0) {
      FUN_00441290(this);
    }
  }
  return;
}


