
/* ==== FUN_00424f70 @ 00424f70 ==== 
 * signature: undefined __stdcall FUN_00424f70(int * param_1, uint param_2, undefined4 * param_3)
 * body: 00424f70-004253b8
 */

void FUN_00424f70(int *param_1,uint param_2,undefined4 *param_3)

{
  bool bVar1;
  short sVar2;
  void *pvVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  short sVar8;
  undefined4 *unaff_FS_OFFSET;
  int iVar9;
  int *piVar10;
  char local_200 [256];
  int local_100 [4];
  int local_f0;
  int local_ea;
  short local_d6;
  short local_d4;
  int local_d0 [4];
  int local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  short local_ae;
  short local_ac;
  undefined4 local_aa;
  int local_a4 [4];
  int local_94;
  undefined4 local_90;
  undefined2 local_8c;
  short local_82;
  short local_80;
  undefined2 local_7c [3];
  int local_76;
  int local_72;
  int *local_5c;
  undefined4 *local_58;
  char local_4a;
  int local_48 [4];
  AFX_EXCEPTION_LINK local_38 [16];
  int *local_28;
  undefined4 local_24;
  char local_20;
  int *local_1c;
  short local_18;
  undefined1 local_16;
  char local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004253ca;
  *unaff_FS_OFFSET = &local_10;
  local_15 = (param_2 & 0x40) == 0;
  local_14 = &stack0xfffffdf4;
  if (*(short *)(param_3 + 1) == 0) {
    local_14 = &stack0xfffffdf4;
    FUN_00486dd0(param_1,local_100,param_3,0x2e);
    piVar7 = local_1c + 1;
    local_1c[3] = local_f0;
    local_1c[0x12] = local_100[0];
    *(int *)((int)local_1c + 0x2a) = local_ea;
    pvVar3 = (void *)FUN_00466a80(*piVar7);
    uVar4 = FUN_004504e0(pvVar3,local_ea);
    *(short *)((int)local_1c + 0x36) = (short)uVar4;
    local_1c[2] = *(int *)(*piVar7 + 8);
    sVar8 = local_d4;
  }
  else if (*(short *)(param_3 + 1) == 1) {
    local_20 = '\x01' - ((*(uint *)((int)param_3 + 6) & 0x2000) == 0);
    local_14 = &stack0xfffffdf4;
    FUN_00486dd0(param_1,local_a4,param_3,0x26);
    *(undefined2 *)((int)local_1c + 0x36) = local_8c;
    local_1c[3] = local_94;
    local_1c[0x12] = local_a4[0];
    *(undefined4 *)((int)local_1c + 0x2a) = local_90;
    local_1c[2] = *(int *)(local_1c[1] + 8);
    sVar8 = local_80;
    local_d6 = local_82;
    if (local_20 != '\0') {
      *(uint *)((int)local_1c + 0x26) = *(uint *)((int)local_1c + 0x26) | 0x800;
    }
  }
  else {
    FUN_00486dd0(param_1,local_d0,param_3,0x2a);
    (**(code **)(*local_1c + 0x124))(local_aa,1);
    local_1c[3] = local_c0;
    local_1c[0x12] = local_d0[0];
    *(undefined4 *)((int)local_1c + 0x2a) = local_bc;
    *(undefined2 *)((int)local_1c + 0x36) = local_b8;
    local_1c[2] = *(int *)(local_1c[1] + 8);
    sVar8 = local_ac;
    local_d6 = local_ae;
  }
  if (local_d6 == 0) {
    if (local_15 != '\0') {
      *(undefined4 *)((int)local_1c + 0x2e) = 0;
    }
  }
  else {
    FUN_00486d60(param_1,local_200,(int)local_d6);
    pcVar5 = FUN_0043f650(local_200);
    *(char **)((int)local_1c + 0x2e) = pcVar5;
  }
  local_5c = param_1;
  local_4a = '\0';
  local_58 = param_3;
  if ((local_15 == '\0') && (local_28 = (int *)((int)local_1c + 0x2a), *local_28 != 0)) {
    piVar7 = local_1c + 1;
    if ((local_1c[1] != 0) && (iVar6 = FUN_00466a80(local_1c[1]), iVar6 != 0)) {
      iVar6 = *local_28;
      pvVar3 = (void *)FUN_00466a80(*piVar7);
      uVar4 = FUN_004504e0(pvVar3,iVar6);
      sVar2 = (short)uVar4;
      pvVar3 = (void *)FUN_00466a80(*piVar7);
      piVar7 = (int *)FUN_00450230(pvVar3,sVar2);
      if ((piVar7 != (int *)0x0) && ((*(byte *)((int)piVar7 + 0x1e) & 0x10) != 0)) {
        (**(code **)(*piVar7 + 0x26c))(param_1,&local_5c);
      }
      goto LAB_004251d7;
    }
  }
  FUN_0041f4c0(DAT_004da380,0,*(short *)((int)local_1c + 0x46),local_1c[0x13],0x1e,&local_5c,0x14);
LAB_004251d7:
  if (local_4a == '\0') {
    FUN_00486db0(param_1,(int)&param_3);
  }
  local_7c[0] = 1;
  bVar1 = FUN_0042d3f0(local_1c,0x19,local_7c,0x1e);
  if (bVar1) {
    local_1c[0x15] = local_76;
    local_1c[0x16] = local_72;
  }
  else {
    local_1c[0x15] = 0x7d1;
    local_1c[0x16] = 0;
  }
  local_7c[0] = 2;
  bVar1 = FUN_0042d3f0(local_1c,0x19,local_7c,0x1e);
  if (bVar1) {
    local_1c[0x17] = local_76;
    local_1c[0x18] = local_72;
  }
  else {
    local_1c[0x17] = 1;
    local_1c[0x18] = 0;
  }
  local_24 = 0;
  bVar1 = FUN_0042d3f0(local_1c,0x20,&local_24,4);
  if (bVar1) {
    *(byte *)(local_1c + 0x19) =
         ((byte)local_24 ^ *(byte *)(local_1c + 0x19)) & 1 ^ *(byte *)(local_1c + 0x19);
  }
  if (local_15 == '\0') {
    local_16 = 0;
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_38);
    local_8 = 1;
    piVar7 = (int *)FUN_004246a0((int)local_1c);
    local_18 = 0;
    if (0 < sVar8) {
      do {
        FUN_00486e50(param_1,local_48);
        if ((piVar7 == (int *)0x0) ||
           (iVar6 = (**(code **)(*piVar7 + 0x244))(), iVar6 != local_48[0])) {
          local_16 = 1;
          FUN_00486db0(param_1,(int)local_48);
        }
        else {
          (**(code **)(*piVar7 + 0xbc))(param_1,param_2,local_48);
        }
        if (piVar7 != (int *)0x0) {
          piVar7 = *(int **)((int)piVar7 + 0x3e);
        }
        local_18 = local_18 + 1;
      } while (local_18 < sVar8);
    }
    local_8 = 0xffffffff;
    FUN_004253d4();
  }
  else {
    if (0 < sVar8) {
      do {
        FUN_00486e50(param_1,local_48);
        piVar7 = FUN_00466ac0(param_1,param_2,local_48);
        if (piVar7 != (int *)0x0) {
          FUN_00424600(local_1c,piVar7,'\x01');
        }
        sVar8 = sVar8 + -1;
      } while (sVar8 != 0);
    }
    if (*(int *)((int)local_1c + 0x2a) != 0) {
      piVar7 = local_1c + 1;
      iVar6 = *piVar7;
      if ((iVar6 != 0) && (iVar6 = FUN_00466a80(iVar6), iVar6 != 0)) {
        iVar6 = *piVar7;
        piVar10 = (int *)0x0;
        iVar9 = *(int *)(iVar6 + 8);
        piVar7 = local_1c;
        pvVar3 = (void *)FUN_00466a80(iVar6);
        FUN_00450310(pvVar3,iVar9,piVar7,piVar10);
      }
    }
  }
  (**(code **)(*local_1c + 0x1c))(0);
  *unaff_FS_OFFSET = local_10;
  return;
}


