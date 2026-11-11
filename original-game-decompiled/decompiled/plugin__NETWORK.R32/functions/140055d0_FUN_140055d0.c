
/* ==== FUN_140055d0 @ 140055d0 ==== 
 * signature: int __cdecl FUN_140055d0(int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined1 * param_5)
 * body: 140055d0-14005dc7
 */

int __cdecl
FUN_140055d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 *param_5)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_158;
  int local_154;
  int iStack_150;
  int local_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  undefined1 local_13c [4];
  char cStack_138;
  char cStack_137;
  char cStack_136;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_118;
  undefined1 auStack_114 [4];
  short sStack_110;
  undefined1 auStack_106 [64];
  int iStack_c6;
  undefined1 auStack_be [22];
  int iStack_a8;
  undefined2 *puStack_a4;
  undefined1 auStack_a0 [64];
  undefined4 auStack_60 [6];
  int iStack_48;
  undefined2 *puStack_44;
  undefined1 auStack_40 [64];
  
  local_14c = 0;
  local_154 = 0x30;
  piVar1 = (int *)(param_2 + 0x92);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_158);
  DAT_14028e48 = (*pcVar2)(local_158,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),param_3,
                           local_13c);
  if (iStack_c6 == 0) {
    *param_5 = 1;
    return 0x10000;
  }
  if (iStack_124 == -1) {
    iStack_124 = *piVar1;
  }
  else if (*piVar1 != iStack_124) {
    return 0x10000;
  }
  if ((cStack_138 != '\0') && (cStack_136 != '\0')) {
    if ((iStack_12c == 0) && (iStack_128 == 0)) {
      iStack_12c = *(int *)(param_2 + 0x424);
      iStack_124 = *piVar1;
    }
    if (*(int *)(param_2 + 0x420) == 0) {
      local_158 = 0;
    }
    else {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_158);
      DAT_14028e48 = (*pcVar2)(local_158,*(undefined4 *)(param_2 + 0x420),&iStack_148);
      local_158 = FUN_1400d4d0((int)auStack_be,iStack_148 + iStack_128,iStack_12c - iStack_128,
                               &local_14c);
      iStack_128 = iStack_128 + local_14c;
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_150);
      DAT_14028e48 = (*pcVar2)(iStack_150,*(undefined4 *)(param_2 + 0x420));
      sVar5 = 0;
      do {
        iVar3 = (int)sVar5;
        sVar5 = sVar5 + 1;
        puVar6 = (undefined4 *)(param_2 + 0x40a + iVar3 * 0x16);
        puVar7 = (undefined4 *)((int)auStack_60 + iVar3 * 0x16);
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
      } while (sVar5 < 1);
    }
    if ((local_158 != 0) && (local_158 != 0x2733)) {
      FUN_140074e0(param_1,(int)local_13c);
      FUN_1400d500((int)auStack_be);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_154),1,7,&local_158);
      DAT_14028e48 = (*pcVar2)(local_158,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),param_3,
                               local_13c);
      return 0x10000;
    }
    if (iStack_128 == iStack_12c) {
      if (iStack_a8 == 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_154),1,0,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,0x48,&iStack_a8);
        if (DAT_14028e48 != 0) {
          return DAT_14028e48;
        }
      }
      if (cStack_137 == '\0') {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,0,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,&iStack_48);
      }
      else {
        cStack_137 = '\0';
        iStack_48 = iStack_118;
      }
      if ((*(int *)(param_2 + 0x406) == 0) || (*(int *)(*(int *)(param_2 + 0x406) + 2) == 0)) {
        puStack_44 = (undefined2 *)0x0;
      }
      else {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,0x12,&puStack_44);
        if (DAT_14028e48 != 0) {
          return DAT_14028e48;
        }
        *puStack_44 = 0x69;
        *(undefined4 *)(puStack_44 + 3) = 0;
        *(undefined4 *)(puStack_44 + 5) = 0;
        *(undefined4 *)(puStack_44 + 1) = 0;
        *(undefined4 *)(puStack_44 + 7) = 0;
        FUN_14008d10(puStack_44,*(undefined2 **)(param_2 + 0x406));
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,8,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,puStack_44);
      }
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_158);
      DAT_14028e48 = (*pcVar2)(local_158,auStack_40,param_4);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_154),1,2,&iStack_150);
      DAT_14028e48 = (*pcVar2)(iStack_150,iStack_a8,&iStack_48);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,0,&iStack_144);
      DAT_14028e48 = (*pcVar2)(iStack_144,auStack_114);
      sStack_110 = sStack_110 + -1;
      iStack_128 = 0;
      iStack_12c = 0;
      iStack_124 = -1;
      cStack_136 = 1;
      if (puStack_a4 != (undefined2 *)0x0) {
        FUN_14008dc0((int)puStack_a4);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,puStack_a4);
        puStack_a4 = (undefined2 *)0x0;
      }
      iVar3 = 0;
    }
    else {
      cStack_136 = local_158 != 0x2733;
      if (((*(int *)(param_2 + 0x406) != 0) && (*(int *)(*(int *)(param_2 + 0x406) + 2) != 0)) &&
         (puStack_a4 == (undefined2 *)0x0)) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,0x12,&puStack_a4);
        if (DAT_14028e48 != 0) {
          return DAT_14028e48;
        }
        *puStack_a4 = 0x69;
        *(undefined4 *)(puStack_a4 + 3) = 0;
        *(undefined4 *)(puStack_a4 + 5) = 0;
        *(undefined4 *)(puStack_a4 + 1) = 0;
        *(undefined4 *)(puStack_a4 + 7) = 0;
        FUN_14008d10(puStack_a4,*(undefined2 **)(param_2 + 0x406));
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,8,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,puStack_a4);
      }
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_158);
      DAT_14028e48 = (*pcVar2)(local_158,auStack_a0,param_4);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,0,&iStack_150);
      iVar3 = 0x10000;
      DAT_14028e48 = (*pcVar2)(iStack_150,&iStack_118);
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_154),1,7,&local_158);
    DAT_14028e48 = (*pcVar2)(local_158,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),param_3,
                             local_13c);
    return iVar3;
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,0,&local_158);
  DAT_14028e48 = (*pcVar2)(local_158,&iStack_140);
  if (*(int *)(param_1 + 0x62) * 1000 < iStack_140 - iStack_118) {
    *param_5 = 1;
    if (*(int *)(param_2 + 0x406) != 0) {
      FUN_14007300(param_1,*(int *)(*(int *)(param_2 + 0x406) + 2),0x89d,(int)auStack_106);
    }
    FUN_1400d500((int)auStack_be);
    FUN_140074e0(param_1,(int)local_13c);
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_154),1,7,&local_158);
  DAT_14028e48 = (*pcVar2)(local_158,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),param_3,
                           local_13c);
  return 0x10000;
}


