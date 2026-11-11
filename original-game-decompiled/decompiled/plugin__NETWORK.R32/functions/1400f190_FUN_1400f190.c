
/* ==== FUN_1400f190 @ 1400f190 ==== 
 * signature: int __cdecl FUN_1400f190(int param_1, int param_2)
 * body: 1400f190-1400fa02
 */

int __cdecl FUN_1400f190(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  uint *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  char local_149;
  int local_148;
  short local_144;
  int local_142;
  byte *local_13e;
  int iStack_134;
  undefined2 uStack_130;
  short sStack_12e;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined4 local_128;
  int local_124;
  undefined2 local_120;
  uint local_11e;
  uint local_11a;
  int iStack_114;
  int iStack_110;
  undefined2 local_10c;
  uint local_10a;
  uint local_106;
  uint local_100 [5];
  undefined2 local_ec;
  undefined4 local_ea;
  undefined4 local_e6;
  undefined4 local_e2;
  undefined4 local_de;
  undefined2 uStack_da;
  undefined4 uStack_d8;
  undefined2 uStack_ac;
  int iStack_aa;
  undefined1 auStack_80 [2];
  undefined4 uStack_7e;
  undefined1 auStack_54 [84];
  
  local_149 = '\0';
  bVar3 = false;
  bVar4 = false;
  bVar2 = false;
  puVar8 = local_100;
  for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  local_100[1] = 0xaa55a5a5;
  uVar5 = FUN_14010280(param_1,param_2,10,&local_144,(int *)0x0);
  if (((char)uVar5 == '\0') || (local_142 != 4)) {
    local_100[0] = *(uint *)(param_1 + 0x2c);
  }
  else {
    local_100[0] = ((int)(char)local_13e[2] | (int)(char)*local_13e << 0x10) << 8 |
                   (int)(char)local_13e[1] << 0x10 | (int)(char)local_13e[3];
  }
  local_100[3] = 1;
  local_100[4] = 0;
  uVar5 = FUN_14010280(param_1,param_2,0x28,&local_144,(int *)0x0);
  if (((char)uVar5 == '\0') || (local_142 != 4)) {
    uVar5 = FUN_14010280(param_1,param_2,0x2a,&local_144,(int *)0x0);
    if (((char)uVar5 == '\0') || (local_142 != 8)) {
      uVar5 = FUN_14010280(param_1,param_2,0x29,&local_144,(int *)0x0);
      if ((char)uVar5 == '\0') {
        pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,2,&local_148);
        DAT_14028e48 = (*pcVar6)(local_148,param_1,*(undefined4 *)(param_1 + 0x50),&local_120);
        if (DAT_14028e48 != 0) {
          return 0x10000;
        }
      }
      else {
        pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,2,&local_148);
        DAT_14028e48 = (*pcVar6)(local_148,param_1,local_13e,&local_120);
        if (DAT_14028e48 != 0) {
          return DAT_14028e48;
        }
      }
    }
    else {
      local_11e = ((uint)local_13e[2] | (uint)*local_13e << 0x10) << 8 | (uint)local_13e[1] << 0x10
                  | (uint)local_13e[3];
      local_11a = ((uint)local_13e[4] << 0x10 | (uint)local_13e[6]) << 8 |
                  (uint)local_13e[5] << 0x10 | (uint)local_13e[7];
      local_120 = 0x17;
      local_100[3] = local_11e;
      local_100[4] = local_11a;
    }
  }
  else {
    local_120 = 0x17;
    local_11e = ((uint)local_13e[2] | (uint)*local_13e << 0x10) << 8 | (uint)local_13e[1] << 0x10 |
                (uint)local_13e[3];
    local_11a = local_100[4];
    local_100[3] = local_11e;
  }
  uVar5 = FUN_14010280(param_1,param_2,0x1e,&local_144,(int *)0x0);
  if (((char)uVar5 == '\0') || (local_142 != 8)) {
    uVar5 = FUN_14010280(param_1,param_2,0x1f,&local_144,(int *)0x0);
    if ((char)uVar5 == '\0') {
      if ((*(int *)(param_1 + 0x3a) == 0) || (*(int *)(param_1 + 0x3e) == 0)) {
        return 0x10000;
      }
      iVar7 = FUN_140120a0(param_1,*(int *)(param_1 + 0x3e),&local_128);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
    else {
      iVar7 = FUN_140120a0(param_1,local_13e,&local_128);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
  }
  else {
    local_10a = ((uint)local_13e[2] | (uint)*local_13e << 0x10) << 8 | (uint)local_13e[1] << 0x10 |
                (uint)local_13e[3];
    local_106 = ((uint)local_13e[4] << 0x10 | (uint)local_13e[6]) << 8 | (uint)local_13e[5] << 0x10
                | (uint)local_13e[7];
    if (((uint)local_13e[5] << 0x10 & 0x40000) == 0) {
      return 0x10000;
    }
    local_10c = 100;
    iVar7 = FUN_14012230(param_1,(int)&local_10c,&local_128);
    if (iVar7 != 0) {
      return iVar7;
    }
  }
  local_e6 = 0;
  local_e2 = 0;
  local_de = 0;
  local_ec = 0x69;
  piVar1 = (int *)(param_1 + 0x4fc);
  local_ea = local_128;
  **(undefined1 **)(param_1 + 0x512) = 0;
  **(undefined1 **)(param_1 + 0x500) = **(undefined1 **)(param_1 + 0x512);
  *piVar1 = 0;
  uVar5 = FUN_14010280(param_1,param_2,0x15,&local_144,(int *)0x0);
  if ((char)uVar5 != '\0') {
    pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_148);
    DAT_14028e48 = (*pcVar6)(local_148,*(undefined4 *)(param_1 + 0x500),local_13e);
    pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_134);
    DAT_14028e48 = (*pcVar6)(iStack_134,piVar1,local_13e);
    *(undefined1 *)(*piVar1 + *(int *)(param_1 + 0x500)) = 0;
    pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,7,(int *)&uStack_12c);
    DAT_14028e48 = (*pcVar6)(CONCAT22(uStack_12a,uStack_12c),&iStack_110,local_13e,0x2f);
    *(int *)(param_1 + 0x50e) = iStack_110 - (int)local_13e;
    pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,(int *)&uStack_130);
    DAT_14028e48 = (*pcVar6)(CONCAT22(sStack_12e,uStack_130),*(undefined4 *)(param_1 + 0x512),
                             local_13e,*(undefined4 *)(param_1 + 0x50e));
    *(undefined1 *)(*(int *)(param_1 + 0x50e) + *(int *)(param_1 + 0x512)) = 0;
  }
  local_124 = 0;
  do {
    iVar7 = FUN_140103b0(param_1,param_2,&local_124,&local_144);
    if (iVar7 != 0) goto LAB_1400f6cc;
  } while ((local_144 < 0x32) || (0x3e < local_144));
  bVar2 = true;
LAB_1400f6cc:
  if (bVar2) {
    if (local_144 == 0x3d) {
      iVar7 = FUN_14011790(param_1,param_2,&uStack_da,&local_124,CONCAT11(*local_13e,local_13e[1]));
      if (iVar7 != 0) {
        return iVar7;
      }
      bVar4 = true;
    }
    else if (local_144 == 0x3a) {
      sStack_12e = CONCAT11(local_13e[2],local_13e[3]);
      iVar7 = FUN_14011230(param_1,param_2,&uStack_da,&iStack_114,&local_124,
                           CONCAT11(*local_13e,local_13e[1]),sStack_12e);
      if (iVar7 != 0) {
        return iVar7;
      }
      bVar3 = true;
    }
    else {
      iVar7 = FUN_14010a70(param_1,param_2,&uStack_da,&local_144,&local_149);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
  }
  else {
    uStack_da = 0;
  }
  pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x16,&local_148);
  puVar13 = auStack_54;
  puVar11 = &uStack_da;
  puVar10 = &local_120;
  puVar9 = &local_ec;
  uVar12 = local_100[0];
  uVar5 = FUN_14008a80(param_1);
  DAT_14028e48 = (*pcVar6)(local_148,uVar5,puVar9,puVar10,puVar11,uVar12,puVar13);
  pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x17,&iStack_134);
  puVar13 = auStack_54;
  uVar5 = FUN_14008a80(param_1);
  DAT_14028e48 = (*pcVar6)(iStack_134,uVar5,puVar13);
  pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,(int *)&uStack_12c);
  DAT_14028e48 = (*pcVar6)(CONCAT22(uStack_12a,uStack_12c),*(undefined4 *)(param_2 + 0x50));
  if (bVar3) {
    if ((local_149 != '\0') && (iVar7 = 1, 0 < sStack_12e)) {
      do {
        uStack_ac = 1;
        iStack_aa = iVar7;
        pcVar6 = (code *)FUN_14008ab0(iStack_114,0,0x16,&local_148);
        DAT_14028e48 = (*pcVar6)(local_148,s_insert_14026798,&uStack_ac,auStack_80);
        if (DAT_14028e48 != 0) {
          return DAT_14028e48;
        }
        iVar7 = iVar7 + 1;
        pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,&iStack_134);
        DAT_14028e48 = (*pcVar6)(iStack_134,uStack_7e);
      } while (iVar7 <= sStack_12e);
    }
    pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x23,&local_148);
    DAT_14028e48 = (*pcVar6)(local_148,iStack_114);
    return 0;
  }
  if (local_149 != '\0') {
    pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,&local_148);
    DAT_14028e48 = (*pcVar6)(local_148,uStack_d8);
    return 0;
  }
  if (bVar4) {
    FUN_14011d90(param_1,(int)&uStack_da);
  }
  return 0;
}


