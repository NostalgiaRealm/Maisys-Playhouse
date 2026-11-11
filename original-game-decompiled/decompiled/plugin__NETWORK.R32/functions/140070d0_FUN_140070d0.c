
/* ==== FUN_140070d0 @ 140070d0 ==== 
 * signature: uint __cdecl FUN_140070d0(char * param_1, int * param_2, short * param_3)
 * body: 140070d0-1400725a
 */

uint __cdecl FUN_140070d0(char *param_1,int *param_2,short *param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  code *pcVar5;
  short sVar6;
  short sVar7;
  int local_1c;
  int local_18;
  int iStack_14;
  int local_10 [4];
  
  sVar7 = 0;
  local_1c = 0;
  pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,local_10);
  DAT_14028e48 = (*pcVar5)(local_10[0],&local_18,param_1);
  *param_3 = 0;
  pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,7,&iStack_14);
  DAT_14028e48 = (*pcVar5)(iStack_14,&local_1c,param_1,0x3a);
  if (local_1c != 0) {
    local_18 = local_1c - (int)param_1;
    pcVar2 = (char *)(local_1c + 1);
    cVar3 = *pcVar2;
    while (cVar3 != '\0') {
      cVar3 = *pcVar2;
      if ((cVar3 < '0') || ('9' < cVar3)) {
        return 0x10000;
      }
      pcVar2 = pcVar2 + 1;
      *param_3 = *param_3 * 10 + (short)cVar3 + -0x30;
      cVar3 = *pcVar2;
    }
    param_1[local_18] = '\0';
  }
  sVar6 = 0;
  do {
    cVar3 = *param_1;
    piVar1 = local_10 + sVar6;
    *piVar1 = 0;
    for (; ((cVar3 != '.' && (cVar4 = *param_1, cVar4 != ':')) && (sVar7 < local_18));
        sVar7 = sVar7 + 1) {
      if ((cVar4 < '0') || ('9' < cVar4)) {
        return 0x10000;
      }
      param_1 = param_1 + 1;
      cVar3 = *param_1;
      *piVar1 = (int)cVar4 + *piVar1 * 10 + -0x30;
    }
    if (sVar6 < 3) {
      sVar7 = sVar7 + 1;
      param_1 = param_1 + 1;
    }
    sVar6 = sVar6 + 1;
  } while (sVar6 < 4);
  *param_2 = ((local_10[0] * 0x100 + local_10[1]) * 0x100 + local_10[2]) * 0x100 + local_10[3];
  return (*param_1 == '\0') - 1 & 0x10000;
}


