
/* ==== FUN_14011d90 @ 14011d90 ==== 
 * signature: int __cdecl FUN_14011d90(undefined4 param_1, int param_2)
 * body: 14011d90-14012004
 */

int __cdecl FUN_14011d90(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_184;
  undefined2 local_180;
  int local_17e;
  undefined2 uStack_178;
  undefined1 *puStack_176;
  int iStack_172;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  short sStack_158;
  int iStack_156;
  undefined4 uStack_152;
  undefined4 uStack_14e;
  undefined4 uStack_14a;
  undefined2 uStack_12c;
  int iStack_12a;
  undefined1 auStack_100 [256];
  
  local_180 = 1;
  local_17e = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_184);
  DAT_14028e48 = (*pcVar1)(local_184,*(undefined4 *)(param_2 + 2),s_count_140267dc,0,&local_180);
  if ((DAT_14028e48 != 0) || (local_17e < 1)) {
    return 0;
  }
  DAT_14028e48 = 0;
  iVar3 = local_17e;
  do {
    if (iVar3 < 1) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,1,&local_184);
      DAT_14028e48 = (*pcVar1)(local_184,*(undefined4 *)(param_2 + 2));
      return 0;
    }
    puStack_176 = auStack_100;
    uStack_12c = 1;
    uStack_178 = 0x75;
    iStack_172 = 0;
    iStack_12a = iVar3;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_184);
    DAT_14028e48 = (*pcVar1)(local_184,*(undefined4 *)(param_2 + 2),s_value_14026664,&uStack_12c,
                             &uStack_178);
    if (DAT_14028e48 != 0) {
      return 0;
    }
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,5,&iStack_168);
    DAT_14028e48 = (*pcVar1)(iStack_168,iStack_172,&iStack_16c);
    if ((DAT_14028e48 == 0) && (iStack_16c != 0)) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x23,&iStack_164);
      iVar2 = iStack_164;
      iVar4 = iStack_16c;
LAB_14011f95:
      DAT_14028e48 = (*pcVar1)(iVar2,iVar4);
    }
    else {
      sStack_158 = 0x6a;
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&iStack_160);
      DAT_14028e48 = (*pcVar1)(iStack_160,iStack_172,s_value_14026664,0,&sStack_158);
      if (DAT_14028e48 != 0) {
        return DAT_14028e48;
      }
      if (sStack_158 != 0x75) {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,1,&iStack_15c);
        iVar2 = iStack_15c;
        iVar4 = iStack_172;
        goto LAB_14011f95;
      }
      uStack_152 = 0;
      uStack_14e = 0;
      iStack_156 = iStack_172;
      sStack_158 = 0x69;
      uStack_14a = 0;
      FUN_14011d90(param_1,(int)&sStack_158);
    }
    iVar3 = iVar3 + -1;
  } while( true );
}


