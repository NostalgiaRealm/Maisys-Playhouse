
/* ==== FUN_0042da80 @ 0042da80 ==== 
 * signature: undefined __thiscall FUN_0042da80(void * this, void * param_1, uint param_2, undefined4 * param_3)
 * body: 0042da80-0042dd5b
 */

void __thiscall FUN_0042da80(void *this,void *param_1,uint param_2,undefined4 *param_3)

{
  short sVar1;
  void *pvVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  int *piVar8;
  char local_148 [256];
  void *local_48;
  undefined4 *local_44;
  undefined2 local_3c;
  char local_36;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_26;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined4 local_1a;
  undefined2 local_16;
  short local_10;
  undefined4 local_e;
  short local_8;
  char local_5;
  
  bVar7 = (param_2 & 0x40) != 0;
  local_8 = 0;
  local_5 = '\x01' - ((*(uint *)((int)param_3 + 6) & 0x2000) == 0);
  if (*(short *)(param_3 + 1) < 1000) {
    FUN_00486dd0(param_1,&local_34,param_3,0x2a);
    if (bVar7) {
      if (*(int *)((int)this + 0x48) != local_34) {
        FUN_00486db0(param_1,(int)param_3);
        return;
      }
    }
    else {
      *(undefined4 *)((int)this + 0xc) = local_26;
      *(int *)((int)this + 0x48) = local_34;
      iVar5 = CONCAT22(uStack_1e,local_20);
      *(int *)((int)this + 0x2a) = iVar5;
      pvVar2 = (void *)FUN_00466a80(*(int *)((int)this + 4));
      uVar3 = FUN_004504e0(pvVar2,iVar5);
      *(short *)((int)this + 0x36) = (short)uVar3;
      local_8 = local_e._2_2_;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)(*(int *)((int)this + 4) + 8);
      local_e = CONCAT22(*(undefined2 *)(param_3 + 1),(undefined2)local_e);
    }
  }
  else if (*(short *)(param_3 + 1) < 2000) {
    FUN_00486dd0(param_1,&local_2c,param_3,0x22);
    if (bVar7) {
      if (*(int *)((int)this + 0x48) != local_2c) {
        FUN_00486db0(param_1,(int)param_3);
        return;
      }
    }
    else {
      *(uint *)((int)this + 0xc) = CONCAT22(uStack_1c,uStack_1e);
      *(int *)((int)this + 0x48) = local_2c;
      *(undefined2 *)((int)this + 0x36) = local_16;
      local_8 = local_e._2_2_;
      *(undefined4 *)((int)this + 0x2a) = local_1a;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)(*(int *)((int)this + 4) + 8);
      local_e = CONCAT22(*(short *)(param_3 + 1) + -1000,(undefined2)local_e);
    }
  }
  else {
    FUN_00486dd0(param_1,&local_30,param_3,0x26);
    if (bVar7) {
      if (*(int *)((int)this + 0x48) != local_30) {
        FUN_00486db0(param_1,(int)param_3);
        return;
      }
    }
    else {
      *(uint *)((int)this + 0xc) = CONCAT22(local_20,uStack_22);
      *(int *)((int)this + 0x48) = local_30;
      (**(code **)(*(int *)this + 0x124))(local_e,1);
      *(undefined2 *)((int)this + 0x36) = (undefined2)local_1a;
      *(uint *)((int)this + 0x2a) = CONCAT22(uStack_1c,uStack_1e);
      local_8 = local_10;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)(*(int *)((int)this + 4) + 8);
      local_e = CONCAT22(*(short *)(param_3 + 1) + -2000,(undefined2)local_e);
    }
  }
  if (bVar7) {
    if (local_8 != 0) {
      FUN_00486d40(param_1,(int)local_8);
    }
  }
  else if (local_8 == 0) {
    *(undefined4 *)((int)this + 0x2e) = 0;
  }
  else {
    FUN_00486d60(param_1,local_148,(int)local_8);
    pcVar4 = FUN_0043f650(local_148);
    *(char **)((int)this + 0x2e) = pcVar4;
  }
  local_3c = local_e._2_2_;
  local_48 = param_1;
  local_44 = param_3;
  local_36 = '\0';
  if (((bVar7) && (*(int *)((int)this + 0x2a) != 0)) && (*(int *)((int)this + 4) != 0)) {
    iVar5 = FUN_00466a80(*(int *)((int)this + 4));
    if (iVar5 != 0) {
      iVar5 = *(int *)((int)this + 0x2a);
      pvVar2 = (void *)FUN_00466a80(*(int *)((int)this + 4));
      uVar3 = FUN_004504e0(pvVar2,iVar5);
      sVar1 = (short)uVar3;
      pvVar2 = (void *)FUN_00466a80(*(int *)((int)this + 4));
      piVar6 = (int *)FUN_00450230(pvVar2,sVar1);
      if ((piVar6 != (int *)0x0) && ((*(byte *)((int)piVar6 + 0x1e) & 0x10) != 0)) {
        (**(code **)(*piVar6 + 0x26c))(param_1,&local_48);
      }
      goto LAB_0042dcfe;
    }
  }
  (**(code **)(*(int *)this + 0x26c))(param_1,&local_48);
LAB_0042dcfe:
  if (local_36 == '\0') {
    FUN_00486db0(param_1,(int)param_3);
  }
  if (((!bVar7) && (*(int *)((int)this + 0x2a) != 0)) && (*(int *)((int)this + 4) != 0)) {
    iVar5 = FUN_00466a80(*(int *)((int)this + 4));
    if (iVar5 != 0) {
      piVar8 = (int *)0x0;
      iVar5 = *(int *)(*(int *)((int)this + 4) + 8);
      piVar6 = this;
      pvVar2 = (void *)FUN_00466a80(*(int *)((int)this + 4));
      FUN_00450310(pvVar2,iVar5,piVar6,piVar8);
    }
  }
  (**(code **)(*(int *)this + 0x1c))(0);
  if (local_5 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x800;
  }
  return;
}


