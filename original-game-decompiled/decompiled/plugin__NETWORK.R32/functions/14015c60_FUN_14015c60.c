
/* ==== FUN_14015c60 @ 14015c60 ==== 
 * signature: undefined __cdecl FUN_14015c60(char * param_1)
 * body: 14015c60-14015ce1
 */

void __cdecl FUN_14015c60(char *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  short sVar4;
  int local_8;
  int local_4;
  
  if (*param_1 == '\"') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_4);
    DAT_14028e48 = (*pcVar2)(local_4,&local_8,param_1);
    sVar4 = 0;
    iVar1 = local_8 + -1;
    if (0 < iVar1) {
      do {
        iVar3 = (int)sVar4;
        sVar4 = sVar4 + 1;
        param_1[iVar3] = (param_1 + iVar3)[1];
      } while (sVar4 < iVar1);
    }
    if (param_1[iVar1] == '\"') {
      iVar1 = local_8 + -2;
    }
    local_8 = iVar1;
    param_1[local_8] = '\0';
  }
  return;
}


