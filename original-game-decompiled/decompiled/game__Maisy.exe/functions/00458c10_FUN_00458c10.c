
/* ==== FUN_00458c10 @ 00458c10 ==== 
 * signature: uint __thiscall FUN_00458c10(void * this, byte * param_1, undefined2 * param_2)
 * body: 00458c10-00458e5d
 */

uint __thiscall FUN_00458c10(void *this,byte *param_1,undefined2 *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  undefined3 extraout_var;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  char local_138 [256];
  short local_38 [21];
  int *local_e;
  int *local_8;
  
  local_e = this;
  uVar7 = 0xffffffff;
  local_8 = (int *)0x0;
  pcVar12 = s__<project>_mPrefs__004dbe44;
  do {
    pcVar11 = pcVar12;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar12 = pcVar11 + -uVar7;
  pcVar11 = local_138;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar7 = 0xffffffff;
  pbVar6 = param_1;
  do {
    pbVar10 = pbVar6;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pbVar10 = pbVar6 + 1;
    bVar2 = *pbVar6;
    pbVar6 = pbVar10;
  } while (bVar2 != 0);
  uVar7 = ~uVar7;
  iVar9 = -1;
  pcVar12 = local_138;
  do {
    pcVar11 = pcVar12;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar11 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar11;
  } while (cVar1 != '\0');
  pbVar6 = pbVar10 + -uVar7;
  pbVar10 = (byte *)(pcVar11 + -1);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar6;
    pbVar6 = pbVar6 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar10 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    pbVar10 = pbVar10 + 1;
  }
  FUN_0048c8e0(local_e,'/',local_138,&local_8);
  if (local_8 == (int *)0x0) {
    piVar5 = (int *)FUN_0045a800((int)local_e);
    piVar4 = piVar5;
    for (; piVar5 != (int *)0x0; piVar5 = *(int **)((int)piVar5 + 0x3e)) {
      if ((*(uint *)((int)piVar5 + 0x1e) & 0x20000000) != 0) {
        pcVar12 = s_MPrefs_004dbe30;
        piVar4 = (int *)(**(code **)(*piVar5 + 0x94))();
        bVar3 = FUN_00437430(piVar4,(int *)pcVar12);
        piVar4 = (int *)0x0;
        if (CONCAT31(extraout_var,bVar3) != 0) {
          pcVar12 = (char *)0x0;
          pcVar11 = s_windowStyle_004d921c;
          pbVar6 = param_1;
          goto LAB_00458d5b;
        }
      }
    }
  }
  else {
    piVar4 = *(int **)((int)local_8 + 0x1e);
    if (((uint)piVar4 & 0x80) == 0) {
      if (((uint)piVar4 & 0x20000000) != 0) {
        iVar9 = (**(code **)(*local_8 + 0x98))(s_value_004d9864,0,param_2);
        return CONCAT31((int3)((uint)iVar9 >> 8),iVar9 == 0);
      }
    }
    else {
      piVar4 = (int *)FUN_00474bd0(local_8,local_8,local_38,0x17);
      if ((char)piVar4 != '\0') {
        uVar7 = FUN_004169e0(local_38,param_2,0);
        return uVar7;
      }
    }
  }
  return (uint)piVar4 & 0xffffff00;
  while( true ) {
    bVar2 = pbVar6[1];
    bVar3 = bVar2 < (byte)pcVar11[1];
    if (bVar2 != pcVar11[1]) goto LAB_00458d7b;
    pbVar6 = pbVar6 + 2;
    pcVar11 = pcVar11 + 2;
    if (bVar2 == 0) break;
LAB_00458d5b:
    bVar2 = *pbVar6;
    bVar3 = bVar2 < (byte)*pcVar11;
    if (bVar2 != *pcVar11) {
LAB_00458d7b:
      iVar9 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
      goto LAB_00458d80;
    }
    if (bVar2 == 0) break;
  }
  iVar9 = 0;
LAB_00458d80:
  if (iVar9 == 0) {
    pcVar12 = s_windowstyle_004dbe1c;
    uVar7 = 0;
  }
  else {
    pcVar11 = s_windowSize_004d9238;
    pbVar6 = param_1;
    do {
      bVar2 = *pbVar6;
      bVar3 = bVar2 < (byte)*pcVar11;
      if (bVar2 != *pcVar11) {
LAB_00458db5:
        iVar9 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
        goto LAB_00458dba;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar6[1];
      bVar3 = bVar2 < (byte)pcVar11[1];
      if (bVar2 != pcVar11[1]) goto LAB_00458db5;
      pbVar6 = pbVar6 + 2;
      pcVar11 = pcVar11 + 2;
    } while (bVar2 != 0);
    iVar9 = 0;
LAB_00458dba:
    if (iVar9 == 0) {
      pcVar12 = s_windowsize_004dbe08;
      uVar7 = 0;
    }
    else {
      pcVar11 = s_windowTitle_004d9244;
      pbVar6 = param_1;
      do {
        bVar2 = *pbVar6;
        bVar3 = bVar2 < (byte)*pcVar11;
        if (bVar2 != *pcVar11) {
LAB_00458dec:
          iVar9 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
          goto LAB_00458df1;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar3 = bVar2 < (byte)pcVar11[1];
        if (bVar2 != pcVar11[1]) goto LAB_00458dec;
        pbVar6 = pbVar6 + 2;
        pcVar11 = pcVar11 + 2;
      } while (bVar2 != 0);
      iVar9 = 0;
LAB_00458df1:
      if (iVar9 == 0) {
        pcVar12 = s_windowtitle_004dbdf4;
        uVar7 = 0;
      }
      else {
        pcVar11 = s_windowPosition_004d9228;
        do {
          bVar2 = *param_1;
          bVar3 = bVar2 < (byte)*pcVar11;
          if (bVar2 != *pcVar11) {
LAB_00458e21:
            uVar7 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
            goto LAB_00458e26;
          }
          if (bVar2 == 0) break;
          bVar2 = param_1[1];
          bVar3 = bVar2 < (byte)pcVar11[1];
          if (bVar2 != pcVar11[1]) goto LAB_00458e21;
          param_1 = param_1 + 2;
          pcVar11 = pcVar11 + 2;
        } while (bVar2 != 0);
        uVar7 = 0;
LAB_00458e26:
        if (uVar7 == 0) {
          pcVar12 = s_windowposition_004dbde0;
        }
      }
    }
  }
  if ((pcVar12 != (char *)0x0) &&
     (uVar7 = (**(code **)(*piVar5 + 0x98))(pcVar12,0,param_2), uVar7 == 0)) {
    return 1;
  }
  return uVar7 & 0xffffff00;
}


