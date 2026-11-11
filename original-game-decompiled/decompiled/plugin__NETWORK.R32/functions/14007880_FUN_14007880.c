
/* ==== FUN_14007880 @ 14007880 ==== 
 * signature: int __cdecl FUN_14007880(int * param_1, int param_2, undefined4 * param_3, undefined4 param_4, undefined4 param_5, uint * param_6, int param_7, char * param_8, int param_9)
 * body: 14007880-14007d01
 */

int __cdecl
FUN_14007880(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
            uint *param_6,int param_7,char *param_8,int param_9)

{
  code *pcVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int local_1b0;
  uint local_1ac;
  int iStack_1a8;
  uint uStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  undefined1 auStack_190 [4];
  char acStack_18c [64];
  int iStack_14c;
  undefined2 uStack_148;
  undefined1 auStack_144 [64];
  int iStack_104;
  undefined4 uStack_100;
  char cStack_fc;
  undefined4 uStack_fa;
  undefined4 auStack_f4 [12];
  undefined4 uStack_c2;
  char acStack_be [64];
  uint uStack_7e;
  undefined1 auStack_58 [88];
  
  local_1a0 = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_1b0);
  DAT_14028e48 = (*pcVar1)(local_1b0,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                           &local_1ac);
  if ((local_1ac != 0) && (uVar5 = 1, local_1ac != 0)) {
    do {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_1b0);
      DAT_14028e48 = (*pcVar1)(local_1b0,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                               uVar5,auStack_f4);
      if (uStack_7e != 0) {
        if (acStack_be[0] == '\0') {
          FUN_14007260(uStack_7e,acStack_be);
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&iStack_1a8);
        DAT_14028e48 = (*pcVar1)(iStack_1a8,&iStack_19c,param_3 + 1,auStack_58);
        if (iStack_19c == 0) {
          puVar4 = &uStack_c2;
          puVar6 = param_3;
          for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          *param_8 = '\x01';
          iVar2 = FUN_14006490(param_1,param_2,(int)param_3,auStack_f4,param_6,param_7,
                               (int)(param_3 + 1),param_9);
          return iVar2;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= local_1ac);
  }
  iVar2 = FUN_1400d540(CONCAT31((int3)((uint)&iStack_104 >> 8),*(undefined1 *)(param_2 + 0x72)),
                       param_3 + 1,&uStack_100,&iStack_104);
  if (iVar2 != 0) {
    return 0x10000;
  }
  uStack_148 = *(undefined2 *)(param_3 + 0x12);
  uStack_194 = param_4;
  uStack_fa = param_5;
  iStack_14c = 0;
  acStack_18c[0] = '\0';
  cStack_fc = '\0';
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_1b0);
  DAT_14028e48 = (*pcVar1)(local_1b0,auStack_144,param_3 + 1);
  *param_6 = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_1a8);
  DAT_14028e48 = (*pcVar1)(iStack_1a8,*(undefined4 *)(param_2 + 0x20),&uStack_194);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&iStack_198);
  DAT_14028e48 = (*pcVar1)(iStack_198,*(undefined4 *)(param_2 + 0x20),&local_1ac);
  iVar2 = FUN_1400d610();
  if (iVar2 == 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_1b0);
    uVar7 = (*pcVar1)(local_1b0,*(undefined4 *)(param_2 + 0x20),local_1ac,&uStack_194);
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    DAT_14028e48 = (undefined4)uVar7;
    *param_8 = cStack_fc;
    if (cStack_fc != '\0') {
      if ((iStack_14c == 0) && (acStack_18c[0] == '\0')) {
        *param_6 = 0;
      }
      else {
        iVar2 = FUN_14006490(param_1,param_2,(int)auStack_190,auStack_f4,&uStack_1a4,param_7,
                             (int)auStack_144,param_9);
        uVar3 = extraout_EDX_00;
        if (iVar2 == 0) {
          *param_6 = uStack_1a4;
        }
        else {
          local_1a0 = 0x10000;
        }
      }
      FUN_1400d5d0(CONCAT31((int3)((uint)uVar3 >> 8),*(undefined1 *)(param_2 + 0x72)),uStack_100);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&local_1b0);
      DAT_14028e48 = (*pcVar1)(local_1b0,*(undefined4 *)(param_2 + 0x20),local_1ac);
      *(short *)(param_2 + 0xe) = *(short *)(param_2 + 0xe) + -1;
      if ((uStack_1a4 != 0) && (*(int *)(param_7 + 2) != 0)) {
        FUN_14007300((int)param_1,*(int *)(param_7 + 2),0x89a,(int)acStack_18c);
      }
    }
    return local_1a0;
  }
  FUN_1400d5d0(CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(param_2 + 0x72)),uStack_100)
  ;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&local_1b0);
  DAT_14028e48 = (*pcVar1)(local_1b0,*(undefined4 *)(param_2 + 0x20),local_1ac);
  return 0x10000;
}


