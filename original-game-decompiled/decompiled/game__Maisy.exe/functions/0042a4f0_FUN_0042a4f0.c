
/* ==== FUN_0042a4f0 @ 0042a4f0 ==== 
 * signature: undefined __thiscall FUN_0042a4f0(void * this, int * param_1, uint param_2)
 * body: 0042a4f0-0042a914
 */

void __thiscall FUN_0042a4f0(void *this,int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_EBP;
  char *pcVar8;
  char *pcVar9;
  short sVar10;
  char local_184 [256];
  uint local_84;
  undefined2 local_80;
  uint local_7e;
  uint local_7a;
  undefined1 local_76 [16];
  uint local_66;
  uint local_62;
  undefined2 local_5e;
  undefined2 local_5c;
  uint local_5a;
  undefined2 local_52;
  uint local_50;
  uint local_4c;
  undefined2 local_48;
  uint local_46;
  uint local_42;
  undefined2 local_3e;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  code *local_2c;
  int *local_28;
  uint *local_24;
  int local_20;
  undefined2 uStack_1c;
  undefined4 local_1a;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_6;
  uint local_5;
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((uint)unaff_EBP >> 0x18);
  local_5 = CONCAT31((int3)unaff_EBP,(char)param_2) & 0xffffff01;
  uVar5 = 0;
  local_c = CONCAT13((char)param_2,(undefined3)local_c) & 0x80ffffff;
  local_6 = (char)((param_2 & 0x40) >> 6);
  local_10 = CONCAT22(-(ushort)(*(int *)((int)this + 0x3e) == 0) & 2 |
                      (ushort)((param_2 & 0x80) >> 1),(undefined2)local_10) | 0x200000;
  if (*(char **)((int)this + 0x2e) != (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar8 = *(char **)((int)this + 0x2e);
    do {
      pcVar9 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar9 + -uVar6;
    pcVar9 = local_184;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar8 = local_184;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (~uVar6 < 0x100) {
      iVar2 = -1;
      pcVar8 = local_184;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~(ushort)iVar2;
    }
    else {
      uVar5 = 0x100;
    }
  }
  if (((*(int *)((int)this + 0x2a) != 0) && ((param_2 & 0x200) == 0)) && (local_c._3_1_ == '\0')) {
    uVar6 = (**(code **)(*(int *)this + 0x128))();
    local_2c = (code *)FUN_0044ae60((char)local_5,uVar6);
    local_3e = FUN_0044aea0((char)local_5,*(undefined2 *)((int)this + 0x36));
    local_3c = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0x2a));
    local_38 = FUN_0044ae60((char)local_5,*(uint *)((int)this + 8));
    local_30 = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0xc));
    local_c = 0;
    local_34 = FUN_0044af90((char)local_5,0);
    local_48 = FUN_0044aea0((char)local_5,4);
    local_46 = FUN_0044ae60((char)local_5,(int)local_10._2_2_);
    local_4c = FUN_0044ae60((char)local_5,0x27);
    local_42 = FUN_0044ae60((char)local_5,0x24);
    (**(code **)(*param_1 + 0x158))(&local_4c,0x24);
    goto LAB_0042a8fd;
  }
  local_14 = param_2 & 2;
  if (((local_14 == 0) || (uVar5 == 0)) || (local_c._3_1_ != '\0')) {
    uVar5 = 0;
    local_52 = 0;
  }
  else {
    local_52 = FUN_0044aea0((char)local_5,uVar5);
  }
  uVar6 = (**(code **)(*(int *)this + 0x128))();
  local_50 = FUN_0044ae60((char)local_5,uVar6);
  local_66 = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0xc));
  local_62 = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0x2a));
  local_5e = FUN_0044aea0((char)local_5,*(undefined2 *)((int)this + 0x36));
  local_5a = FUN_0044ae60((char)local_5,*(uint *)((int)this + 8));
  local_2c = *(code **)(*(int *)this + 0x24c);
  local_1a = param_2;
  cVar1 = (*local_2c)();
  if (((cVar1 == '\0') || (local_c._3_1_ == '\0')) ||
     ((*(int *)((int)this + 0x2a) == 0 || (*(int *)((int)this + 4) == 0)))) {
LAB_0042a7b4:
    iVar2 = *(int *)this;
LAB_0042a7c0:
    (**(code **)(iVar2 + 0x268))(param_1,&local_28);
  }
  else {
    iVar2 = FUN_00466a80(*(int *)((int)this + 4));
    if (iVar2 == 0) goto LAB_0042a7b4;
    sVar10 = *(short *)((int)this + 0x36);
    if (sVar10 == 0) {
      iVar2 = *(int *)((int)this + 0x2a);
      pvVar3 = (void *)FUN_00466a80(*(int *)((int)this + 4));
      uVar6 = FUN_004504e0(pvVar3,iVar2);
      sVar10 = (short)uVar6;
    }
    pvVar3 = (void *)FUN_00466a80(*(int *)((int)this + 4));
    piVar4 = (int *)FUN_00450230(pvVar3,sVar10);
    if ((piVar4 != (int *)0x0) && ((*(byte *)((int)piVar4 + 0x1e) & 0x10) != 0)) {
      iVar2 = *piVar4;
      goto LAB_0042a7c0;
    }
  }
  if ((*(byte *)((int)this + 0x27) & 8) != 0) {
    local_10 = local_10 | 0x20000000;
  }
  local_80 = FUN_0044aea0((char)local_5,0x7d1);
  local_5c = FUN_0044aea0((char)local_5,uStack_1c);
  local_7e = FUN_0044ae60((char)local_5,(int)local_10._2_2_);
  local_84 = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0x48));
  local_10 = (uint)(short)uVar5;
  local_7a = FUN_0044ae60((char)local_5,local_20 + local_10 + 0x38);
  (**(code **)(*(int *)this + 0x118))(local_76);
  (**(code **)(*param_1 + 0x158))(&local_84,0x38);
  if ((local_14 != 0) && (uVar5 != 0)) {
    FUN_00486d80(param_1,local_184,local_10);
  }
  local_24 = &local_84;
  local_28 = param_1;
  local_1a = param_2;
  cVar1 = (*local_2c)();
  if ((((cVar1 == '\0') || (local_c._3_1_ == '\0')) || (*(int *)((int)this + 0x2a) == 0)) ||
     (*(int *)((int)this + 4) == 0)) {
LAB_0042a8ee:
    iVar2 = *(int *)this;
  }
  else {
    iVar2 = FUN_00466a80(*(int *)((int)this + 4));
    if (iVar2 == 0) goto LAB_0042a8ee;
    sVar10 = *(short *)((int)this + 0x36);
    if (sVar10 == 0) {
      iVar2 = *(int *)((int)this + 0x2a);
      pvVar3 = (void *)FUN_00466a80(*(int *)((int)this + 4));
      uVar6 = FUN_004504e0(pvVar3,iVar2);
      sVar10 = (short)uVar6;
    }
    pvVar3 = (void *)FUN_00466a80(*(int *)((int)this + 4));
    piVar4 = (int *)FUN_00450230(pvVar3,sVar10);
    if ((piVar4 == (int *)0x0) || ((*(byte *)((int)piVar4 + 0x1e) & 0x10) == 0)) goto LAB_0042a8fd;
    iVar2 = *piVar4;
  }
  (**(code **)(iVar2 + 0x270))(param_1,&local_28);
LAB_0042a8fd:
  if (local_6 == '\0') {
    (**(code **)(*(int *)this + 0x1c))(0);
  }
  return;
}


