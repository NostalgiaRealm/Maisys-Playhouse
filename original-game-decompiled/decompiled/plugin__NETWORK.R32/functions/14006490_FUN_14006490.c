
/* ==== FUN_14006490 @ 14006490 ==== 
 * signature: int __cdecl FUN_14006490(int * param_1, int param_2, int param_3, undefined4 * param_4, uint * param_5, int param_6, int param_7, int param_8)
 * body: 14006490-14006ce3
 */

int __cdecl
FUN_14006490(int *param_1,int param_2,int param_3,undefined4 *param_4,uint *param_5,int param_6,
            int param_7,int param_8)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  short sStack_118;
  short local_116;
  int local_114;
  uint local_110;
  int local_10c;
  uint local_108;
  uint local_104;
  int local_100;
  int local_fc;
  int iStack_f8;
  undefined1 auStack_f4 [128];
  char *pcStack_74;
  undefined4 uStack_68;
  
  local_110 = 0;
  local_fc = 0;
  bVar9 = param_3 == 0;
  local_108 = local_108 & 0xffffff00;
  local_100 = 0xfffffff;
  if (param_3 != 0) {
    piVar1 = (int *)(param_3 + 0x44);
    if (*piVar1 == 0) {
      uVar3 = FUN_140070d0((char *)(param_3 + 4),piVar1,&local_116);
      if ((uVar3 != 0) || (*piVar1 == 0)) {
        return 0x10000;
      }
      if (*(short *)(param_3 + 0x48) == 0) {
        *(short *)(param_3 + 0x48) = local_116;
      }
    }
    if (param_3 == 0) goto LAB_14006543;
    if ((*(uint *)(param_3 + 0x44) != 0) && (*(char *)(param_3 + 4) == '\0')) {
      FUN_14007260(*(uint *)(param_3 + 0x44),(char *)(param_3 + 4));
    }
  }
  if (param_3 != 0) {
    if (*(short *)(param_3 + 0x48) == 0) {
      *(short *)(param_3 + 0x48) = (short)*(undefined4 *)((int)param_1 + 0x56);
    }
    else {
      local_108 = CONCAT31(local_108._1_3_,1);
    }
  }
LAB_14006543:
  local_10c = 0x30;
  pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_114);
  uVar3 = 2;
  DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),&local_104);
  if (1 < local_104) {
    do {
      pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
      DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),uVar3,param_4);
      if (((!bVar9) && (*(int *)(param_3 + 0x44) == *(int *)((int)param_4 + 0x76))) &&
         (((char)local_108 == '\0' ||
          ((*(short *)(param_3 + 0x48) == *(short *)((int)param_4 + 0x7a) ||
           ((char)local_108 == '\0')))))) {
        *param_5 = uVar3;
        *(short *)(param_4 + 0xb) = *(short *)(param_4 + 0xb) + 1;
        pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,7,&local_114);
        DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),uVar3,param_4);
        return 0;
      }
      if ((*(int *)((int)param_4 + 0x76) == 0) && (local_110 == 0)) {
        local_110 = uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= local_104);
  }
  if (param_1[0x17] == 0) {
    param_1[0x17] = *(int *)(*(int *)((int)param_1 + 0x516) + 0x14);
  }
  if (local_110 == 0) {
    if ((uint)param_1[0x17] < local_104) {
      uVar3 = 2;
      if (1 < local_104) {
        do {
          pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
          DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),uVar3,param_4);
          if (param_4[0x25] != 0) {
            pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,9,(int *)&local_108);
            DAT_14028e48 = (*pcVar4)(local_108,param_4[0x25],&local_fc);
          }
          if ((((*(short *)(param_4 + 0xb) == 0) && (local_fc == 0)) && (param_4[2] == 0)) &&
             ((int)param_4[10] < local_100)) {
            local_110 = uVar3;
            local_100 = param_4[10];
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 <= local_104);
      }
      if (local_110 == 0) {
        if (bVar9) {
          pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
          DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),1,auStack_f4);
          FUN_140099e0(pcStack_74);
        }
        if ((param_6 != 0) && (*(int *)(param_6 + 2) != 0)) {
          FUN_14007300((int)param_1,*(int *)(param_6 + 2),0x89e,param_7);
        }
        return 0x10000;
      }
      if (local_110 != local_104) {
        pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
        DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),local_110,param_4);
      }
      FUN_1400d500((int)param_4 + 0x7e);
    }
    else {
      puVar7 = param_4;
      for (iVar5 = 0x3c; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      *(undefined1 *)((int)param_4 + 2) = 1;
      param_4[8] = 0x400;
      if (param_8 != 0) {
        sVar2 = 0;
        do {
          iVar5 = (int)sVar2;
          sVar2 = sVar2 + 1;
          puVar7 = (undefined4 *)(iVar5 * 0x16 + param_8);
          puVar8 = (undefined4 *)((int)param_4 + iVar5 * 0x16 + 0xdc);
          for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          *(undefined2 *)puVar8 = *(undefined2 *)puVar7;
        } while (sVar2 < 1);
      }
      pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,2,&local_114);
      DAT_14028e48 = (*pcVar4)(local_114,param_4[8],param_4 + 7);
      if (DAT_14028e48 != 0) {
        return DAT_14028e48;
      }
      param_4[0x24] = 0;
    }
  }
  else if (local_110 != local_104) {
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
    DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),local_110,param_4);
  }
  if (bVar9) {
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
    DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),1,auStack_f4);
    uVar3 = FUN_14009800((int)param_4 + 0x7e,pcStack_74);
    if (uVar3 != 0) {
      FUN_14009a60();
      return 0x10000;
    }
    FUN_140070d0((char *)((int)param_4 + 0x36),(int *)((int)param_4 + 0x76),&sStack_118);
    *(undefined1 *)(param_4 + 1) = 1;
  }
  else {
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
    DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),1,auStack_f4);
    param_4[0x23] = uStack_68;
    iVar5 = FUN_1400d2b0();
    if ((iVar5 != 0) && (iVar5 != 0x2733)) {
      if (iVar5 == -2) {
        FUN_14007300((int)param_1,*param_1,0x835,0);
      }
      return 0x10000;
    }
    *(undefined1 *)(param_4 + 1) = 0;
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_114);
    DAT_14028e48 = (*pcVar4)(local_114,&iStack_f8,param_3 + 4);
    *(undefined4 *)((int)param_4 + 0x76) = *(undefined4 *)(param_3 + 0x44);
    *(undefined2 *)((int)param_4 + 0x7a) = *(undefined2 *)(param_3 + 0x48);
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,(int *)&local_108);
    DAT_14028e48 = (*pcVar4)(local_108,param_4 + 0x27,param_7);
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_100);
    DAT_14028e48 = (*pcVar4)(local_100,(int)param_4 + 0x36,param_3 + 4);
    *(undefined1 *)(iStack_f8 + 0x36 + (int)param_4) = 0;
    *(short *)(param_4 + 0xb) = *(short *)(param_4 + 0xb) + 1;
  }
  piVar1 = param_4 + 0x26;
  pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&local_114);
  DAT_14028e48 = (*pcVar4)(local_114,0x12,piVar1);
  *(undefined2 *)*piVar1 = 0x69;
  if (param_6 == 0) {
    *(undefined4 *)(*piVar1 + 6) = 0;
    *(undefined4 *)(*piVar1 + 10) = 0;
    *(int *)(*piVar1 + 2) = *param_1;
    *(undefined4 *)(*piVar1 + 0xe) = 0;
  }
  else {
    *(undefined4 *)(*piVar1 + 6) = 0;
    *(undefined4 *)(*piVar1 + 10) = 0;
    *(undefined4 *)(*piVar1 + 2) = *(undefined4 *)(param_6 + 2);
    *(undefined4 *)(*piVar1 + 0xe) = 0;
  }
  *(int **)((int)param_4 + 0xde) = param_1;
  *(undefined2 *)((int)param_4 + 0xe2) = 1;
  *(undefined2 *)(param_4 + 0x39) = 3;
  pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,0,&local_114);
  DAT_14028e48 = (*pcVar4)(local_114,param_4 + 9);
  param_4[6] = 0xffffffff;
  *(undefined1 *)((int)param_4 + 6) = 1;
  if (local_110 == 0) {
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,2,&local_114);
    DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),param_4);
    sVar2 = *(short *)(param_2 + 0x24) + 1;
    *(short *)(param_2 + 0x24) = sVar2;
    *param_5 = (int)sVar2;
  }
  else {
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,7,&local_114);
    DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),local_110,param_4);
    *param_5 = local_110;
  }
  return 0;
}


