
/* ==== FUN_0042d660 @ 0042d660 ==== 
 * signature: undefined __thiscall FUN_0042d660(void * this, int * param_1, uint param_2)
 * body: 0042d660-0042da4f
 */

void __thiscall FUN_0042d660(void *this,int *param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 unaff_EBP;
  char *pcVar9;
  char *pcVar10;
  char local_15c [256];
  uint local_5c;
  undefined2 local_58;
  uint local_56;
  uint local_52;
  uint local_4e;
  uint local_4a;
  undefined2 local_46;
  uint local_44;
  undefined2 local_3c;
  uint local_3a;
  uint local_34;
  undefined2 local_30;
  uint local_2e;
  uint local_2a;
  undefined2 local_26;
  int *local_24;
  uint *local_20;
  int local_1c;
  short local_18;
  undefined4 uStack_16;
  undefined2 uStack_12;
  uint local_10;
  uint local_c;
  char local_6;
  uint local_5;
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((uint)unaff_EBP >> 0x18);
  local_5 = CONCAT31((int3)unaff_EBP,(char)param_2) & 0xffffff01;
  local_6 = (char)((param_2 & 0x40) >> 6);
  local_c = param_2 & 0x80;
  local_10 = -(uint)(*(int *)((int)this + 0x3e) == 0) & 2 | (local_c == 0) - 1 & 0x40 | 0x20;
  if (((*(int *)((int)this + 0x2a) != 0) && ((param_2 & 0x200) == 0)) && (local_c == 0)) {
    uVar3 = (**(code **)(*(int *)this + 0x128))();
    uVar3 = FUN_0044ae60((char)local_5,uVar3);
    uStack_16._2_2_ = (undefined2)uVar3;
    uStack_12 = (undefined2)(uVar3 >> 0x10);
    local_26 = FUN_0044aea0((char)local_5,*(undefined2 *)((int)this + 0x36));
    local_24 = (int *)FUN_0044ae60((char)local_5,*(uint *)((int)this + 0x2a));
    local_20 = (uint *)FUN_0044ae60((char)local_5,*(uint *)((int)this + 8));
    uVar3 = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0xc));
    local_c = 0;
    local_18 = (short)uVar3;
    uStack_16._0_2_ = (undefined2)(uVar3 >> 0x10);
    local_1c = FUN_0044af90((char)local_5,0);
    local_30 = FUN_0044aea0((char)local_5,4);
    local_2e = FUN_0044ae60((char)local_5,local_10);
    local_34 = FUN_0044ae60((char)local_5,0x27);
    local_2a = FUN_0044ae60((char)local_5,0x24);
    (**(code **)(*param_1 + 0x158))(&local_34,0x24);
    goto LAB_0042da38;
  }
  if (*(char **)((int)this + 0x2e) == (char *)0x0) {
    (**(code **)(*(int *)this + 0x70))(local_15c);
    uVar3 = 0xffffffff;
    pcVar9 = local_15c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (0xff < ~uVar3) goto LAB_0042d81a;
LAB_0042d820:
    iVar4 = -1;
    pcVar9 = local_15c;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~(ushort)iVar4;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar9 = *(char **)((int)this + 0x2e);
    do {
      pcVar10 = pcVar9;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar9 = pcVar10 + -uVar3;
    pcVar10 = local_15c;
    for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar9 = local_15c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 < 0x100) goto LAB_0042d820;
LAB_0042d81a:
    uVar7 = 0x100;
  }
  if (((param_2 & 2) == 0) || (uVar7 == 0)) {
    local_3c = 0;
  }
  else {
    local_3c = FUN_0044aea0((char)local_5,uVar7);
  }
  uVar3 = (**(code **)(*(int *)this + 0x128))();
  local_3a = FUN_0044ae60((char)local_5,uVar3);
  local_4e = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0xc));
  local_4a = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0x2a));
  local_46 = FUN_0044aea0((char)local_5,*(undefined2 *)((int)this + 0x36));
  local_44 = FUN_0044ae60((char)local_5,*(uint *)((int)this + 8));
  uStack_16 = param_2;
  if (((local_c == 0) || (*(int *)((int)this + 0x2a) == 0)) || (*(int *)((int)this + 4) == 0)) {
LAB_0042d91f:
    iVar4 = *(int *)this;
LAB_0042d92b:
    (**(code **)(iVar4 + 0x268))(param_1,&local_24);
  }
  else {
    iVar4 = FUN_00466a80(*(int *)((int)this + 4));
    if (iVar4 == 0) goto LAB_0042d91f;
    iVar4 = *(int *)((int)this + 0x2a);
    pvVar5 = (void *)FUN_00466a80(*(int *)((int)this + 4));
    uVar3 = FUN_004504e0(pvVar5,iVar4);
    sVar2 = (short)uVar3;
    pvVar5 = (void *)FUN_00466a80(*(int *)((int)this + 4));
    piVar6 = (int *)FUN_00450230(pvVar5,sVar2);
    if ((piVar6 != (int *)0x0) && ((*(byte *)((int)piVar6 + 0x1e) & 0x10) != 0)) {
      iVar4 = *piVar6;
      goto LAB_0042d92b;
    }
  }
  local_58 = FUN_0044aea0((char)local_5,local_18 + 2000);
  local_56 = FUN_0044ae60((char)local_5,local_10);
  local_5c = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0x48));
  local_10 = (uint)(short)uVar7;
  local_52 = FUN_0044ae60((char)local_5,local_1c + local_10 + 0x26);
  (**(code **)(*param_1 + 0x158))(&local_5c,0x26);
  if (((param_2 & 2) != 0) && (uVar7 != 0)) {
    FUN_00486d80(param_1,local_15c,local_10);
  }
  local_20 = &local_5c;
  local_24 = param_1;
  if (((local_c == 0) || (*(int *)((int)this + 0x2a) == 0)) || (*(int *)((int)this + 4) == 0)) {
LAB_0042da26:
    iVar4 = *(int *)this;
    uStack_16 = param_2;
  }
  else {
    uStack_16 = param_2;
    iVar4 = FUN_00466a80(*(int *)((int)this + 4));
    param_2 = uStack_16;
    if (iVar4 == 0) goto LAB_0042da26;
    iVar4 = *(int *)((int)this + 0x2a);
    pvVar5 = (void *)FUN_00466a80(*(int *)((int)this + 4));
    uVar3 = FUN_004504e0(pvVar5,iVar4);
    sVar2 = (short)uVar3;
    pvVar5 = (void *)FUN_00466a80(*(int *)((int)this + 4));
    piVar6 = (int *)FUN_00450230(pvVar5,sVar2);
    if ((piVar6 == (int *)0x0) || ((*(byte *)((int)piVar6 + 0x1e) & 0x10) == 0)) goto LAB_0042da38;
    iVar4 = *piVar6;
  }
  (**(code **)(iVar4 + 0x270))(param_1,&local_24);
LAB_0042da38:
  if (local_6 == '\0') {
    (**(code **)(*(int *)this + 0x1c))(0);
  }
  return;
}


