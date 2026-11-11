
/* ==== FUN_14004760 @ 14004760 ==== 
 * signature: undefined4 __cdecl FUN_14004760(int param_1)
 * body: 14004760-14004b29
 */

undefined4 __cdecl FUN_14004760(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cStack_7d;
  uint uStack_7c;
  int local_78;
  uint uStack_74;
  uint local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 auStack_40 [64];
  
  local_78 = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_6c);
  DAT_14028e48 = (*pcVar1)(local_6c,*(undefined4 *)(param_1 + 0x6a),&local_70);
  if (local_70 == 0) {
    FUN_14005eb0(param_1,0);
    return 0;
  }
  uStack_74 = 1;
  if (local_70 != 0) {
    do {
      cStack_7d = '\0';
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_6c);
      DAT_14028e48 = (*pcVar1)(local_6c,*(undefined4 *)(param_1 + 0x6a),uStack_74,param_1 + 0x72);
      if (*(int *)(param_1 + 0x4a4) == 0) {
        if (*(short *)(param_1 + 0x49e) == 0) {
          if (*(int *)(param_1 + 0x4a0) == 0) {
            cStack_7d = '\x01';
          }
          else {
            local_78 = FUN_140055d0(param_1,param_1 + 0x72,*(int *)(param_1 + 0x4a0),param_1 + 0xc0,
                                    &cStack_7d);
          }
        }
        else {
          local_78 = 0x10000;
          cStack_7d = '\0';
        }
      }
      else {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&iStack_68);
        DAT_14028e48 = (*pcVar1)(iStack_68,*(undefined4 *)(param_1 + 0x4a4),&uStack_7c);
        uVar3 = 1;
        if (uStack_7c != 0) {
          do {
            pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&iStack_64);
            DAT_14028e48 = (*pcVar1)(iStack_64,*(undefined4 *)(param_1 + 0x4a4),uVar3,&iStack_44);
            if (iStack_44 == 0) {
              pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&iStack_5c);
              uVar5 = *(undefined4 *)(param_1 + 0x4a4);
              iVar2 = iStack_5c;
LAB_1400497f:
              uVar4 = uVar3 - 1;
              DAT_14028e48 = (*pcVar1)(iVar2,uVar5,uVar3);
              uStack_7c = uStack_7c - 1;
            }
            else {
              local_78 = FUN_140055d0(param_1,param_1 + 0x72,iStack_44,auStack_40,&cStack_7d);
              if ((local_78 == 0) || (uVar4 = uVar3, cStack_7d != '\0')) {
                pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&iStack_60);
                uVar5 = *(undefined4 *)(param_1 + 0x4a4);
                iVar2 = iStack_60;
                goto LAB_1400497f;
              }
            }
            uVar3 = uVar4 + 1;
          } while (uVar3 <= uStack_7c);
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&iStack_58);
        DAT_14028e48 = (*pcVar1)(iStack_58,*(undefined4 *)(param_1 + 0x4a4),&uStack_7c);
        if ((uStack_7c == 0) && (*(short *)(param_1 + 0x49e) < 1)) {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&iStack_54);
          DAT_14028e48 = (*pcVar1)(iStack_54,*(undefined4 *)(param_1 + 0x4a4));
          cStack_7d = '\x01';
        }
        else {
          local_78 = 0x10000;
          cStack_7d = '\0';
        }
      }
      if ((local_78 == 0) || (cStack_7d != '\0')) {
        if (*(int *)(param_1 + 0x478) != 0) {
          FUN_14008dc0(*(int *)(param_1 + 0x478));
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&iStack_50);
          DAT_14028e48 = (*pcVar1)(iStack_50,*(undefined4 *)(param_1 + 0x478));
        }
        if (*(int *)(param_1 + 0x492) != 0) {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,&iStack_4c);
          DAT_14028e48 = (*pcVar1)(iStack_4c,*(undefined4 *)(param_1 + 0x492));
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&iStack_48);
        DAT_14028e48 = (*pcVar1)(iStack_48,*(undefined4 *)(param_1 + 0x6a),uStack_74);
        local_70 = local_70 - 1;
        uStack_74 = uStack_74 - 1;
      }
      uStack_74 = uStack_74 + 1;
    } while (uStack_74 <= local_70);
  }
  if (local_70 == 0) {
    FUN_14005eb0(param_1,0);
  }
  return 0;
}


