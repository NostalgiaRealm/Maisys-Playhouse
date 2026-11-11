
/* ==== FUN_00424a20 @ 00424a20 ==== 
 * signature: undefined __thiscall FUN_00424a20(void * this, int * param_1, uint param_2)
 * body: 00424a20-00424f60
 */

void __thiscall FUN_00424a20(void *this,int *param_1,uint param_2)

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
  char local_1a4 [256];
  undefined2 local_a4 [3];
  undefined4 local_9e;
  undefined4 local_9a;
  uint local_84;
  undefined2 local_80;
  uint local_7e;
  uint local_7a;
  undefined2 local_76;
  uint local_74;
  uint local_70;
  undefined2 local_6c;
  uint local_6a;
  undefined4 local_66;
  undefined2 local_62;
  undefined2 local_60;
  uint local_5e;
  uint local_58;
  undefined2 local_54;
  uint local_52;
  uint local_4e;
  undefined2 local_4a;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  undefined2 local_38;
  short sStack_36;
  ushort local_34;
  undefined2 uStack_32;
  int *local_30;
  uint *local_2c;
  int local_28;
  undefined2 uStack_24;
  undefined4 local_22;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_6;
  uint local_5;
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((uint)unaff_EBP >> 0x18);
  local_5 = CONCAT31((int3)unaff_EBP,(char)param_2) & 0xffffff01;
  sStack_36 = 0;
  local_6 = (char)((param_2 & 0x40) >> 6);
  local_14 = param_2 & 0x80;
  local_10 = CONCAT12(-(*(int *)((int)this + 0x3e) == 0) & 2U | (local_14 == 0) - 1U & 0x40,
                      (undefined2)local_10) | 0x200000;
  if (((*(int *)((int)this + 0x2a) != 0) && ((param_2 & 0x200) == 0)) && (local_14 == 0)) {
    uVar3 = (**(code **)(*(int *)this + 0x128))();
    uVar3 = FUN_0044ae60((char)local_5,uVar3);
    local_38 = (undefined2)uVar3;
    sStack_36 = (short)(uVar3 >> 0x10);
    local_4a = FUN_0044aea0((char)local_5,*(undefined2 *)((int)this + 0x36));
    local_48 = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0x2a));
    local_44 = FUN_0044ae60((char)local_5,*(uint *)((int)this + 8));
    local_3c = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0xc));
    local_c = 0;
    local_40 = FUN_0044af90((char)local_5,0);
    local_54 = FUN_0044aea0((char)local_5,4);
    local_52 = FUN_0044ae60((char)local_5,(int)local_10._2_2_);
    local_58 = FUN_0044ae60((char)local_5,0x27);
    local_4e = FUN_0044ae60((char)local_5,0x24);
    (**(code **)(*param_1 + 0x158))(&local_58,0x24);
    goto LAB_00424f49;
  }
  local_c = CONCAT13((param_2 & 0x100) == 0,(undefined3)local_c);
  for (iVar4 = *(int *)((int)this + 0x50); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x3e)) {
    sStack_36 = sStack_36 + 1;
  }
  if (*(char **)((int)this + 0x2e) == (char *)0x0) {
    (**(code **)(*(int *)this + 0x70))(local_1a4);
    uVar3 = 0xffffffff;
    pcVar9 = local_1a4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0x100;
    if (~uVar3 < 0x100) goto LAB_00424c0e;
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
    pcVar10 = local_1a4;
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
    pcVar9 = local_1a4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 < 0x100) {
LAB_00424c0e:
      iVar4 = -1;
      pcVar9 = local_1a4;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~(ushort)iVar4;
    }
    else {
      uVar7 = 0x100;
    }
  }
  local_9e = *(undefined4 *)((int)this + 0x54);
  local_9a = *(undefined4 *)((int)this + 0x58);
  local_a4[0] = 1;
  FUN_0041f4c0(DAT_004da380,0,*(short *)((int)this + 0x46),*(undefined4 *)((int)this + 0x4c),0x1f,
               local_a4,0x1e);
  local_9e = *(undefined4 *)((int)this + 0x5c);
  local_9a = *(undefined4 *)((int)this + 0x60);
  local_a4[0] = 2;
  FUN_0041f4c0(DAT_004da380,0,*(short *)((int)this + 0x46),*(undefined4 *)((int)this + 0x4c),0x1f,
               local_a4,0x1e);
  local_34 = *(byte *)((int)this + 100) & 1;
  uStack_32 = 0;
  FUN_0041f4c0(DAT_004da380,0,*(short *)((int)this + 0x46),*(undefined4 *)((int)this + 0x4c),0x21,
               &local_34,4);
  local_1c = param_2 & 2;
  if ((local_1c == 0) || (uVar7 == 0)) {
    local_62 = 0;
  }
  else {
    local_62 = FUN_0044aea0((char)local_5,uVar7);
  }
  uVar3 = (**(code **)(*(int *)this + 0x128))();
  local_5e = FUN_0044ae60((char)local_5,uVar3);
  local_74 = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0xc));
  local_70 = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0x2a));
  local_6c = FUN_0044aea0((char)local_5,*(undefined2 *)((int)this + 0x36));
  local_6a = FUN_0044ae60((char)local_5,*(uint *)((int)this + 8));
  local_18 = 0;
  local_66 = FUN_0044af90((char)local_5,0);
  local_60 = FUN_0044aea0((char)local_5,sStack_36);
  local_22 = param_2;
  if (((local_14 == 0) || (*(int *)((int)this + 0x2a) == 0)) || (*(int *)((int)this + 4) == 0)) {
LAB_00424de6:
    FUN_0041f4c0(DAT_004da380,0,*(short *)((int)this + 0x46),*(undefined4 *)((int)this + 0x4c),0x1c,
                 &local_30,0x14);
  }
  else {
    iVar4 = FUN_00466a80(*(int *)((int)this + 4));
    if (iVar4 == 0) goto LAB_00424de6;
    iVar4 = *(int *)((int)this + 0x2a);
    pvVar5 = (void *)FUN_00466a80(*(int *)((int)this + 4));
    uVar3 = FUN_004504e0(pvVar5,iVar4);
    sVar2 = (short)uVar3;
    pvVar5 = (void *)FUN_00466a80(*(int *)((int)this + 4));
    piVar6 = (int *)FUN_00450230(pvVar5,sVar2);
    if ((piVar6 != (int *)0x0) && ((*(byte *)((int)piVar6 + 0x1e) & 0x10) != 0)) {
      (**(code **)(*piVar6 + 0x268))(param_1,&local_30);
    }
  }
  local_76 = FUN_0044aea0((char)local_5,uStack_24);
  local_80 = FUN_0044aea0((char)local_5,2);
  local_7e = FUN_0044ae60((char)local_5,(int)local_10._2_2_);
  local_84 = FUN_0044ae60((char)local_5,*(uint *)((int)this + 0x48));
  local_10 = (uint)(short)uVar7;
  local_7a = FUN_0044ae60((char)local_5,local_28 + local_10 + 0x2a);
  (**(code **)(*param_1 + 0x158))(&local_84,0x2a);
  if ((local_1c != 0) && (uVar7 != 0)) {
    FUN_00486d80(param_1,local_1a4,local_10);
  }
  local_2c = &local_84;
  local_30 = param_1;
  local_22 = param_2;
  if (((local_14 == 0) || (*(int *)((int)this + 0x2a) == 0)) || (*(int *)((int)this + 4) == 0)) {
LAB_00424f08:
    FUN_0041f4c0(DAT_004da380,0,*(short *)((int)this + 0x46),*(undefined4 *)((int)this + 0x4c),0x1d,
                 &local_30,0x14);
  }
  else {
    iVar4 = FUN_00466a80(*(int *)((int)this + 4));
    if (iVar4 == 0) goto LAB_00424f08;
    iVar4 = *(int *)((int)this + 0x2a);
    pvVar5 = (void *)FUN_00466a80(*(int *)((int)this + 4));
    uVar3 = FUN_004504e0(pvVar5,iVar4);
    sVar2 = (short)uVar3;
    pvVar5 = (void *)FUN_00466a80(*(int *)((int)this + 4));
    piVar6 = (int *)FUN_00450230(pvVar5,sVar2);
    if ((piVar6 != (int *)0x0) && ((*(byte *)((int)piVar6 + 0x1e) & 0x10) != 0)) {
      (**(code **)(*piVar6 + 0x270))(param_1,&local_30);
    }
  }
  if (local_c._3_1_ != '\0') {
    for (piVar6 = *(int **)((int)this + 0x50); piVar6 != (int *)0x0;
        piVar6 = *(int **)((int)piVar6 + 0x3e)) {
      (**(code **)(*piVar6 + 0xb8))(param_1,param_2);
    }
  }
LAB_00424f49:
  if (local_6 == '\0') {
    (**(code **)(*(int *)this + 0x1c))(0);
  }
  return;
}


