
/* ==== FUN_14010ee0 @ 14010ee0 ==== 
 * signature: int __cdecl FUN_14010ee0(undefined4 param_1, int param_2, char * param_3, undefined1 * param_4, int * param_5, undefined4 param_6, int * param_7, int * param_8)
 * body: 14010ee0-14011221
 */

int __cdecl
FUN_14010ee0(undefined4 param_1,int param_2,char *param_3,undefined1 *param_4,int *param_5,
            undefined4 param_6,int *param_7,int *param_8)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int local_7c;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined2 local_74;
  int local_72;
  undefined4 local_6c;
  undefined2 local_68;
  undefined4 local_66;
  int iStack_60;
  int iStack_5c;
  short asStack_58 [22];
  undefined2 uStack_2c;
  int iStack_2a;
  
  local_6c = *(undefined4 *)(param_2 + 2);
  local_66 = 0;
  local_68 = 1;
  local_74 = 1;
  local_72 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_7c);
  iVar3 = (*pcVar2)(local_7c,local_6c,s_listtype_140267f0,0,&local_68);
  DAT_14028e48 = iVar3;
  if (iVar3 != 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_7c);
    DAT_14028e48 = (*pcVar2)(local_7c,param_6);
    return iVar3;
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_7c);
  iVar3 = (*pcVar2)(local_7c,local_6c,s_count_140267dc,0,&local_74);
  DAT_14028e48 = iVar3;
  if (iVar3 != 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_7c);
    DAT_14028e48 = (*pcVar2)(local_7c,param_6);
    return iVar3;
  }
  uVar5 = 0xffffffff;
  uStack_77 = (undefined1)local_66;
  uStack_78 = (undefined1)((uint)local_66 >> 8);
  uStack_75 = (undefined1)local_72;
  uStack_76 = (undefined1)((uint)local_72 >> 8);
  pcVar7 = param_3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  *param_5 = *param_5 + ~uVar5 + 0xb;
  uVar5 = 0xffffffff;
  pcVar7 = param_3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar3 = 1;
  FUN_140101b0(param_1,param_4,0x3a,4,(undefined4 *)&uStack_78,~uVar5 - 1,param_3,'\0');
  puVar6 = (undefined1 *)(*param_8 + *param_5);
  if (0 < local_72) {
    do {
      uStack_2c = 1;
      asStack_58[0] = 0x6a;
      iStack_2a = iVar3;
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_7c);
      DAT_14028e48 = (*pcVar2)(local_7c,local_6c,s_value_14026664,&uStack_2c,asStack_58);
      iStack_5c = DAT_14028e48;
      if (DAT_14028e48 != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_7c);
        DAT_14028e48 = (*pcVar2)(local_7c,param_6);
        return iStack_5c;
      }
      iVar4 = FUN_140104c0(param_1,asStack_58,&DAT_140267ac,puVar6,param_5,0,param_6,param_7,param_8
                          );
      if (iVar4 != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_7c);
        DAT_14028e48 = (*pcVar2)(local_7c,param_6);
        return iVar4;
      }
      iVar3 = iVar3 + 1;
      puVar6 = (undefined1 *)(*param_8 + *param_5);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_60);
      DAT_14028e48 = (*pcVar2)(iStack_60,param_1,asStack_58);
    } while (iVar3 <= local_72);
  }
  return 0;
}


