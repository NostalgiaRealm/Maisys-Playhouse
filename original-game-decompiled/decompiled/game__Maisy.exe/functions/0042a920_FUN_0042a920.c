
/* ==== FUN_0042a920 @ 0042a920 ==== 
 * signature: undefined __thiscall FUN_0042a920(void * this, void * param_1, uint param_2, int param_3)
 * body: 0042a920-0042ac04
 */

void __thiscall FUN_0042a920(void *this,void *param_1,uint param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  short sVar9;
  undefined4 uVar10;
  char local_188 [270];
  undefined4 local_7a [4];
  undefined4 local_6a;
  undefined4 local_66;
  undefined2 local_62;
  undefined2 local_60;
  short local_56;
  undefined4 local_46 [4];
  undefined4 local_36;
  undefined4 local_32;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_26;
  short local_22;
  undefined4 local_20;
  uint local_1c;
  void *local_18;
  int local_14;
  undefined2 local_c;
  uint local_a;
  undefined1 local_6;
  
  bVar8 = (param_2 & 0x40) == 0;
  local_1c = -(uint)!bVar8 & 0x80;
  if (*(short *)(param_3 + 4) < 1000) {
    FUN_00486d60(param_1,&local_2c,0x10);
    if (bVar8) {
      *(undefined4 *)((int)this + 0xc) = local_2c;
      *(undefined4 *)((int)this + 0x2a) = local_26;
      *(undefined4 *)((int)this + 0x48) = 0xffffffff;
    }
    if (local_20._2_2_ == 0) {
LAB_0042a9b1:
      *(undefined4 *)((int)this + 0x2e) = 0;
    }
    else {
      FUN_00486d60(param_1,local_188,(int)local_20._2_2_);
      if (local_20._2_2_ == 0) goto LAB_0042a9b1;
      pcVar2 = FUN_0043f650(local_188);
      *(char **)((int)this + 0x2e) = pcVar2;
    }
    local_c = *(undefined2 *)(param_3 + 4);
  }
  else if (*(short *)(param_3 + 4) < 2000) {
    local_20 = CONCAT13('\x01' - ((*(uint *)(param_3 + 6) & 0x2000) == 0),(undefined3)local_20);
    if (bVar8) {
      uVar10 = 0x16;
      puVar3 = &local_6a;
    }
    else {
      uVar10 = 0x26;
      puVar3 = local_7a;
    }
    FUN_00486d60(param_1,puVar3,uVar10);
    if (bVar8) {
      *(undefined2 *)((int)this + 0x36) = local_62;
      *(undefined4 *)((int)this + 0xc) = local_6a;
      *(undefined4 *)((int)this + 0x2a) = local_66;
      *(undefined4 *)((int)this + 0x48) = 0xffffffff;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)(*(int *)((int)this + 4) + 8);
    }
    if (local_56 != 0) {
      FUN_00486d60(param_1,local_188,(int)local_56);
    }
    if (bVar8) {
      if (local_56 == 0) {
        *(undefined4 *)((int)this + 0x2e) = 0;
      }
      else {
        pcVar2 = FUN_0043f650(local_188);
        *(char **)((int)this + 0x2e) = pcVar2;
      }
    }
    local_c = local_60;
    local_a = local_1c;
    if (local_20._3_1_ != '\0') {
      *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x800;
    }
  }
  else {
    if (bVar8) {
      uVar10 = 0x1a;
      puVar3 = &local_36;
    }
    else {
      uVar10 = 0x2a;
      puVar3 = local_46;
    }
    FUN_00486d60(param_1,puVar3,uVar10);
    if (bVar8) {
      *(undefined4 *)((int)this + 0xc) = local_36;
      *(undefined4 *)((int)this + 0x48) = 0xffffffff;
      (**(code **)(*(int *)this + 0x124))(local_20,1);
      *(undefined2 *)((int)this + 0x36) = local_2e;
      *(undefined4 *)((int)this + 0x2a) = local_32;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)(*(int *)((int)this + 4) + 8);
    }
    if (local_22 != 0) {
      FUN_00486d60(param_1,local_188,(int)local_22);
    }
    if (bVar8) {
      if (local_22 == 0) {
        *(undefined4 *)((int)this + 0x2e) = 0;
      }
      else {
        pcVar2 = FUN_0043f650(local_188);
        *(char **)((int)this + 0x2e) = pcVar2;
      }
    }
    local_c = (undefined2)local_2c;
    local_a = local_1c;
  }
  local_6 = 0;
  local_14 = param_3;
  local_18 = param_1;
  if (bVar8) {
LAB_0042abba:
    iVar4 = *(int *)this;
  }
  else {
    cVar1 = (**(code **)(*(int *)this + 0x24c))();
    if (((cVar1 == '\0') || (*(int *)((int)this + 0x2a) == 0)) || (*(int *)((int)this + 4) == 0))
    goto LAB_0042abba;
    iVar4 = FUN_00466a80(*(int *)((int)this + 4));
    if (iVar4 == 0) goto LAB_0042abba;
    sVar9 = *(short *)((int)this + 0x36);
    if (sVar9 == 0) {
      iVar4 = *(int *)((int)this + 0x2a);
      pvVar5 = (void *)FUN_00466a80(*(int *)((int)this + 4));
      uVar6 = FUN_004504e0(pvVar5,iVar4);
      sVar9 = (short)uVar6;
    }
    pvVar5 = (void *)FUN_00466a80(*(int *)((int)this + 4));
    piVar7 = (int *)FUN_00450230(pvVar5,sVar9);
    if ((piVar7 == (int *)0x0) || ((*(byte *)((int)piVar7 + 0x1e) & 0x10) == 0)) goto LAB_0042abcc;
    iVar4 = *piVar7;
  }
  (**(code **)(iVar4 + 0x26c))(param_1,&local_18);
LAB_0042abcc:
  if (((bVar8) && (*(int *)((int)this + 0x2a) != 0)) && (*(int *)((int)this + 4) != 0)) {
    iVar4 = FUN_00466a80(*(int *)((int)this + 4));
    if (iVar4 != 0) {
      piVar7 = (int *)0x0;
      iVar4 = *(int *)(*(int *)((int)this + 4) + 8);
      pvVar5 = (void *)FUN_00466a80(*(int *)((int)this + 4));
      FUN_00450310(pvVar5,iVar4,this,piVar7);
    }
  }
  return;
}


