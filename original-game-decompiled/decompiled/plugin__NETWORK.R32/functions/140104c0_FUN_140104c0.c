
/* ==== FUN_140104c0 @ 140104c0 ==== 
 * signature: int __cdecl FUN_140104c0(undefined4 param_1, short * param_2, char * param_3, undefined1 * param_4, int * param_5, uint param_6, undefined4 param_7, int * param_8, int * param_9)
 * body: 140104c0-14010a60
 */

int __cdecl
FUN_140104c0(undefined4 param_1,short *param_2,char *param_3,undefined1 *param_4,int *param_5,
            uint param_6,undefined4 param_7,int *param_8,int *param_9)

{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar6;
  char cVar7;
  code *pcVar4;
  int iVar5;
  char cVar8;
  uint uVar9;
  char *pcVar10;
  short sVar11;
  size_t sVar12;
  int *piVar13;
  short local_126;
  int local_124;
  undefined4 local_120;
  undefined1 local_11c [8];
  size_t local_114;
  int local_110;
  size_t local_10c;
  int local_108;
  undefined4 *puStack_104;
  int local_100 [64];
  
  uVar9 = 0xffffffff;
  pcVar10 = param_3;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar6 != '\0');
  uVar9 = ~uVar9;
  sVar1 = uVar9 - 1;
  sVar11 = *param_2;
  if (sVar11 == 1) {
    if ((param_6 & 0x100000) != 0) {
      uVar2 = *(undefined4 *)(param_2 + 1);
      local_110 = 8;
      pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,5,&local_124);
      DAT_14028e48 = (*pcVar4)(local_124,uVar2,&local_10c);
      iVar5 = FUN_140119a0(param_1,*param_5,local_10c + sVar1 + 8,param_7,param_8,param_9);
      if (iVar5 != 0) {
        return iVar5;
      }
      pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_110),1,6,&local_124);
      DAT_14028e48 = (*pcVar4)(local_124,uVar2,&puStack_104);
      if (DAT_14028e48 == 0) {
        iVar5 = *param_5;
        iVar3 = *param_9;
        *param_5 = *param_5 + sVar1 + local_10c + 8;
        FUN_140101b0(param_1,(undefined1 *)(iVar5 + iVar3),0x3c,local_10c,puStack_104,sVar1,param_3,
                     '\0');
        pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_110),1,7,&local_124);
        DAT_14028e48 = (*pcVar4)(local_124,uVar2);
        return 0;
      }
      return DAT_14028e48;
    }
    local_108 = *(int *)(param_2 + 1);
    cVar6 = '\x01';
    piVar13 = &local_108;
    *param_5 = *param_5 + uVar9 + 0xb;
    sVar11 = 0x32;
    sVar12 = 4;
  }
  else if (sVar11 == 0x66) {
    iVar5 = *(int *)(param_2 + 5);
    *(undefined1 *)(*(int *)(param_2 + 7) + iVar5) = 0;
    local_114 = iVar5 + 1;
    iVar5 = FUN_140119a0(param_1,*param_5,local_114 + sVar1 + 8,param_7,param_8,param_9);
    if (iVar5 != 0) {
      return iVar5;
    }
    cVar6 = '\0';
    param_4 = (undefined1 *)(*param_9 + *param_5);
    *param_5 = *param_5 + sVar1 + local_114 + 8;
    piVar13 = *(int **)(param_2 + 7);
    sVar11 = 0x33;
    sVar12 = local_114;
  }
  else if (sVar11 == 0x14) {
    local_126 = param_2[1];
    piVar13 = (int *)&local_126;
    cVar6 = '\x01';
    *param_5 = *param_5 + uVar9 + 9;
    sVar12 = 2;
    sVar11 = 0x35;
  }
  else if (sVar11 == 0xb) {
    uVar2 = *(undefined4 *)(param_2 + 1);
    local_124 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    uVar2 = *(undefined4 *)(param_2 + 3);
    cVar6 = '\0';
    local_120 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    piVar13 = &local_124;
    *param_5 = *param_5 + uVar9 + 0xf;
    sVar12 = 8;
    sVar11 = 0x36;
  }
  else if (sVar11 == 10) {
    cVar6 = (char)((ushort)param_2[1] >> 8);
    cVar7 = cVar6 >> 7;
    local_124 = CONCAT31(CONCAT21(CONCAT11((char)param_2[1],cVar6),cVar7),cVar7);
    cVar7 = (char)((ushort)param_2[2] >> 8);
    cVar6 = '\0';
    cVar8 = cVar7 >> 7;
    local_120 = CONCAT31(CONCAT21(CONCAT11((char)param_2[2],cVar7),cVar8),cVar8);
    piVar13 = &local_124;
    *param_5 = *param_5 + uVar9 + 0xf;
    sVar12 = 8;
    sVar11 = 0x37;
  }
  else if (sVar11 == 0xf) {
    local_120 = *(undefined4 *)(param_2 + 3);
    local_124 = *(int *)(param_2 + 1);
    cVar6 = '\x01';
    piVar13 = &local_124;
    sVar12 = 8;
    *param_5 = *param_5 + uVar9 + 0xf;
    sVar11 = 0x38;
  }
  else if (sVar11 == 0x10) {
    FUN_14010490((int)&local_124,(int)(param_2 + 1));
    FUN_14010490((int)local_11c,(int)(param_2 + 5));
    cVar6 = '\0';
    piVar13 = &local_124;
    *param_5 = *param_5 + uVar9 + 0x17;
    sVar12 = 0x10;
    sVar11 = 0x39;
  }
  else if (sVar11 == 100) {
    uVar2 = *(undefined4 *)(param_2 + 1);
    local_124 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    uVar2 = *(undefined4 *)(param_2 + 3);
    cVar6 = '\0';
    local_120 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    piVar13 = &local_124;
    *param_5 = *param_5 + uVar9 + 0xf;
    sVar12 = 8;
    sVar11 = 0x3e;
  }
  else if (sVar11 == 9) {
    uVar2 = *(undefined4 *)(param_2 + 1);
    local_124 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    uVar2 = *(undefined4 *)(param_2 + 5);
    cVar6 = '\0';
    local_120 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    piVar13 = &local_124;
    *param_5 = *param_5 + uVar9 + 0x13;
    sVar12 = 0xc;
    sVar11 = 0x3b;
  }
  else {
    if (sVar11 != 0x69) {
      return 0;
    }
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,1,&local_124);
    DAT_14028e48 = (*pcVar4)(local_124,*(undefined4 *)(param_2 + 1),0x2f,local_100,0);
    if (DAT_14028e48 != 0) {
      return DAT_14028e48;
    }
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_124);
    DAT_14028e48 = (*pcVar4)(local_124,&local_114,local_100);
    sVar12 = local_114 + 1;
    cVar6 = '\0';
    piVar13 = local_100;
    *param_5 = *param_5 + sVar12 + sVar1 + 8;
    sVar11 = 0x34;
    local_114 = sVar12;
  }
  FUN_140101b0(param_1,param_4,sVar11,sVar12,piVar13,sVar1,param_3,cVar6);
  return 0;
}


