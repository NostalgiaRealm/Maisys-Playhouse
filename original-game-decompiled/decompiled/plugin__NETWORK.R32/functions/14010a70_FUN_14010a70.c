
/* ==== FUN_14010a70 @ 14010a70 ==== 
 * signature: int __cdecl FUN_14010a70(undefined4 param_1, undefined4 param_2, undefined2 * param_3, short * param_4, undefined1 * param_5)
 * body: 14010a70-14010ed3
 */

int __cdecl
FUN_14010a70(undefined4 param_1,undefined4 param_2,undefined2 *param_3,short *param_4,
            undefined1 *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  short sVar17;
  byte *pbVar18;
  int iVar19;
  code *pcVar20;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  sVar17 = *param_4;
  if ((sVar17 == 0x32) && (*(int *)(param_4 + 1) == 4)) {
    pbVar18 = *(byte **)(param_4 + 3);
    bVar1 = pbVar18[2];
    bVar2 = *pbVar18;
    bVar3 = pbVar18[1];
    bVar4 = pbVar18[3];
    *param_3 = 1;
    *(uint *)(param_3 + 1) =
         ((uint)bVar1 | (uint)bVar2 << 0x10) << 8 | (uint)bVar3 << 0x10 | (uint)bVar4;
    return 0;
  }
  if (sVar17 == 0x33) {
    *param_3 = 0x66;
    *(undefined4 *)(param_3 + 1) = param_1;
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_4 + 1);
    *(int *)(param_3 + 5) = *(int *)(param_4 + 1) + -1;
    *(undefined4 *)(param_3 + 7) = *(undefined4 *)(param_4 + 3);
    return 0;
  }
  if (sVar17 == 0x34) {
    *param_3 = 0x6a;
    iVar19 = FUN_140120a0(param_1,*(undefined4 *)(param_4 + 3),&local_4);
    if (iVar19 == 0) {
      *param_3 = 0x69;
      *(undefined4 *)(param_3 + 3) = 0;
      *(undefined4 *)(param_3 + 5) = 0;
      *(undefined4 *)(param_3 + 1) = local_4;
      *(undefined4 *)(param_3 + 7) = 0;
      return 0;
    }
  }
  else {
    if (sVar17 == 0x35) {
      uVar5 = **(undefined1 **)(param_4 + 3);
      uVar6 = (*(undefined1 **)(param_4 + 3))[1];
      *param_3 = 0x14;
      param_3[1] = CONCAT11(uVar5,uVar6);
      return 0;
    }
    if (sVar17 == 0x36) {
      pbVar18 = *(byte **)(param_4 + 3);
      bVar1 = pbVar18[2];
      bVar2 = *pbVar18;
      bVar3 = pbVar18[1];
      bVar4 = pbVar18[3];
      bVar7 = pbVar18[6];
      bVar8 = pbVar18[4];
      bVar9 = pbVar18[5];
      bVar10 = pbVar18[7];
      *param_3 = 0xb;
      *(uint *)(param_3 + 1) =
           ((uint)bVar1 | (uint)bVar2 << 0x10) << 8 | (uint)bVar3 << 0x10 | (uint)bVar4;
      *(uint *)(param_3 + 3) =
           ((uint)bVar8 << 0x10 | (uint)bVar7) << 8 | (uint)bVar9 << 0x10 | (uint)bVar10;
      return 0;
    }
    if (sVar17 == 0x37) {
      iVar19 = *(int *)(param_4 + 3);
      uVar5 = *(undefined1 *)(iVar19 + 2);
      uVar6 = *(undefined1 *)(iVar19 + 3);
      uVar11 = *(undefined1 *)(iVar19 + 6);
      uVar12 = *(undefined1 *)(iVar19 + 7);
      *param_3 = 10;
      param_3[2] = CONCAT11(uVar11,uVar12);
      param_3[1] = CONCAT11(uVar5,uVar6);
      return 0;
    }
    if ((sVar17 == 0x38) && (*(int *)(param_4 + 1) == 8)) {
      FUN_14010490((int)&local_18,*(int *)(param_4 + 3));
      *param_3 = 0xf;
      *(undefined4 *)(param_3 + 3) = local_14;
      *(int *)(param_3 + 1) = local_18;
      return 0;
    }
    if (sVar17 == 0x39) {
      FUN_14010490((int)&local_18,*(int *)(param_4 + 3));
      FUN_14010490((int)&local_c,*(int *)(param_4 + 3) + 8);
      *param_3 = 0x10;
      *(undefined4 *)(param_3 + 3) = local_14;
      *(undefined4 *)(param_3 + 7) = local_8;
      *(int *)(param_3 + 1) = local_18;
      *(undefined4 *)(param_3 + 9) = 0;
      *(undefined4 *)(param_3 + 0xb) = 0x408f4000;
      *(void **)(param_3 + 5) = local_c;
      return 0;
    }
    if (sVar17 == 0x3e) {
      pbVar18 = *(byte **)(param_4 + 3);
      bVar1 = pbVar18[2];
      bVar2 = *pbVar18;
      bVar3 = pbVar18[1];
      bVar4 = pbVar18[3];
      bVar7 = pbVar18[6];
      bVar8 = pbVar18[4];
      bVar9 = pbVar18[5];
      bVar10 = pbVar18[7];
      *param_3 = 100;
      *(uint *)(param_3 + 1) =
           ((uint)bVar1 | (uint)bVar2 << 0x10) << 8 | (uint)bVar3 << 0x10 | (uint)bVar4;
      *(uint *)(param_3 + 3) =
           ((uint)bVar8 << 0x10 | (uint)bVar7) << 8 | (uint)bVar9 << 0x10 | (uint)bVar10;
      return 0;
    }
    if (sVar17 == 0x3b) {
      pbVar18 = *(byte **)(param_4 + 3);
      bVar1 = pbVar18[2];
      bVar2 = *pbVar18;
      bVar3 = pbVar18[1];
      bVar4 = pbVar18[3];
      bVar7 = pbVar18[6];
      bVar8 = pbVar18[4];
      bVar9 = pbVar18[5];
      bVar10 = pbVar18[7];
      bVar13 = pbVar18[10];
      bVar14 = pbVar18[8];
      bVar15 = pbVar18[9];
      bVar16 = pbVar18[0xb];
      *param_3 = 9;
      *(uint *)(param_3 + 1) =
           ((uint)bVar1 | (uint)bVar2 << 0x10) << 8 | (uint)bVar3 << 0x10 | (uint)bVar4;
      *(uint *)(param_3 + 3) =
           ((uint)bVar8 << 0x10 | (uint)bVar7) << 8 | (uint)bVar9 << 0x10 | (uint)bVar10;
      *(uint *)(param_3 + 5) =
           ((uint)bVar14 << 0x10 | (uint)bVar13) << 8 | (uint)bVar15 << 0x10 | (uint)bVar16;
      return 0;
    }
    if (sVar17 == 0x3c) {
      *param_5 = 1;
      pcVar20 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,2,&local_18);
      iVar19 = (*pcVar20)(local_18,*(undefined4 *)(param_4 + 1),&local_10);
      DAT_14028e48 = iVar19;
      if (iVar19 == 0) {
        pcVar20 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_18);
        iVar19 = (*pcVar20)(local_18,local_10,&local_c);
        DAT_14028e48 = iVar19;
        if (iVar19 == 0) {
          FID_conflict__memcpy(local_c,*(void **)(param_4 + 3),*(size_t *)(param_4 + 1));
          pcVar20 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_18);
          DAT_14028e48 = (*pcVar20)(local_18,local_10);
          *param_3 = 1;
          *(undefined4 *)(param_3 + 1) = local_10;
          return 0;
        }
      }
    }
    else {
      iVar19 = 0x10000;
    }
  }
  return iVar19;
}


