
/* ==== FUN_140113c0 @ 140113c0 ==== 
 * signature: int __cdecl FUN_140113c0(undefined4 param_1, int param_2, char * param_3, undefined1 * param_4, int * param_5, undefined4 param_6, int * param_7, int * param_8)
 * body: 140113c0-140116f3
 */

int __cdecl
FUN_140113c0(undefined4 param_1,int param_2,char *param_3,undefined1 *param_4,int *param_5,
            undefined4 param_6,int *param_7,int *param_8)

{
  char cVar1;
  code *pcVar2;
  size_t sVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 uStack_1aa;
  undefined1 uStack_1a9;
  int local_1a8;
  undefined2 uStack_1a4;
  char *pcStack_1a2;
  char *pcStack_19e;
  int local_198;
  undefined2 local_194;
  int local_192;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  short sStack_16c;
  char *pcStack_16a;
  char *pcStack_166;
  undefined4 uStack_162;
  undefined4 uStack_15e;
  undefined1 auStack_140 [20];
  undefined2 uStack_12c;
  int iStack_12a;
  char acStack_100 [256];
  
  iVar4 = -1;
  pcVar6 = param_3;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_194 = 1;
  local_192 = 0;
  local_1a8 = 0x10;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_198);
  DAT_14028e48 = (*pcVar2)(local_198,*(undefined4 *)(param_2 + 6),s_count_140267dc,0,&local_194);
  if ((DAT_14028e48 != 0) || (local_192 < 1)) {
    return 0;
  }
  uStack_1a9 = (undefined1)local_192;
  uStack_1aa = (undefined1)((uint)local_192 >> 8);
  sVar3 = (size_t)(short)(~(ushort)iVar4 - 1);
  *param_5 = *param_5 + sVar3 + 10;
  FUN_140101b0(param_1,param_4,0x3d,2,(undefined4 *)&uStack_1aa,sVar3,param_3,'\0');
  iStack_188 = 1;
  puVar5 = (undefined1 *)(*param_5 + *param_8);
  do {
    pcStack_1a2 = acStack_100;
    iStack_12a = iStack_188;
    pcStack_19e = (char *)0x0;
    uStack_12c = 1;
    uStack_1a4 = 0x75;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_1a8),1,5,&local_198);
    DAT_14028e48 = (*pcVar2)(local_198,*(undefined4 *)(param_2 + 6),s_value_14026664,&uStack_12c,
                             &uStack_1a4);
    if (DAT_14028e48 != 0) {
      return 0;
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,5,&iStack_184);
    DAT_14028e48 = (*pcVar2)(iStack_184,pcStack_19e,&iStack_18c);
    if ((DAT_14028e48 == 0) && (iStack_18c != 0)) {
      pcVar2 = (code *)FUN_14008ab0(iStack_18c,0,1,&iStack_180);
      DAT_14028e48 = (*pcVar2)(iStack_180,auStack_140);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&iStack_17c);
      DAT_14028e48 = (*pcVar2)(iStack_17c,&iStack_178,auStack_140,s_ListMod_1402681c);
      if (iStack_178 != 0) {
        return 0x10000;
      }
      pcStack_16a = pcStack_19e;
      pcStack_166 = (char *)0x0;
      uStack_162 = 0;
      uStack_15e = 0;
      sStack_16c = 0x69;
      iVar4 = FUN_14010ee0(param_1,(int)&sStack_16c,pcStack_1a2,puVar5,param_5,param_6,param_7,
                           param_8);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    else {
      sStack_16c = 0x6a;
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_1a8),1,5,&iStack_174);
      DAT_14028e48 = (*pcVar2)(iStack_174,pcStack_19e,s_value_14026664,0,&sStack_16c);
      if (DAT_14028e48 != 0) {
        return DAT_14028e48;
      }
      if (sStack_16c == 0x75) {
        pcStack_16a = pcStack_1a2;
        pcStack_166 = pcStack_19e;
        sStack_16c = 0x75;
        iVar4 = FUN_140113c0(param_1,(int)&sStack_16c,pcStack_1a2,puVar5,param_5,param_6,param_7,
                             param_8);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      else {
        iVar4 = FUN_140104c0(param_1,&sStack_16c,pcStack_1a2,puVar5,param_5,0,param_6,param_7,
                             param_8);
        if (iVar4 != 0) {
          return iVar4;
        }
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_1a8),1,0x1a,&iStack_170);
        DAT_14028e48 = (*pcVar2)(iStack_170,param_1,&sStack_16c);
      }
    }
    iStack_188 = iStack_188 + 1;
    puVar5 = (undefined1 *)(*param_5 + *param_8);
  } while( true );
}


