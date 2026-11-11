
/* ==== FUN_00408a39 @ 00408a39 ==== 
 * signature: undefined __cdecl FUN_00408a39(char * param_1, int param_2)
 * body: 00408a39-00408bcc
 */

void __cdecl FUN_00408a39(char *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  LPCSTR pCVar6;
  CHAR local_348 [256];
  CHAR local_248 [568];
  char local_10 [16];
  
  pcVar3 = _strchr(param_1,0x7e);
  if (((pcVar3 != (char *)0x0) || (param_2 == 0)) && (DAT_00413834 != 0)) {
    pcVar3 = _strchr(param_1,0x5c);
    if (pcVar3 == (char *)0x0) {
      lstrcpyA(local_348,param_1);
      FUN_0040ab70(param_1,0x100);
      iVar4 = lstrlenA(param_1);
      if (param_1[iVar4 + -1] != '\\') {
        lstrcatA(param_1,&DAT_004100cc);
      }
      lstrcatA(param_1,local_348);
    }
    if (DAT_0041103c < 2) {
      uVar5 = *(ushort *)(PTR_DAT_00410e30 + *param_1 * 2) & 0x103;
    }
    else {
      uVar5 = FUN_0040a3b0((int)*param_1,0x103);
    }
    if ((uVar5 != 0) && (param_1[1] == ':')) {
      uVar5 = FUN_0040a1b0((int)*param_1);
      *param_1 = (char)uVar5;
    }
    pcVar3 = param_1;
    if (*param_1 != '\\') goto LAB_00408b27;
    if (param_1[1] != '\\') goto LAB_00408b27;
    for (pcVar3 = param_1 + 2; (*pcVar3 != '\0' && (*pcVar3 != '\\')); pcVar3 = pcVar3 + 1) {
    }
    if (*pcVar3 != '\\') goto LAB_00408b27;
    do {
      pcVar3 = pcVar3 + 1;
LAB_00408b27:
    } while ((*pcVar3 != '\0') && (*pcVar3 != '\\'));
    while( true ) {
      if (*pcVar3 == '\\') {
        pcVar3 = pcVar3 + 1;
      }
      cVar1 = *pcVar3;
      pCVar6 = pcVar3;
      if (cVar1 == '\0') break;
      while ((cVar1 != '\0' && (cVar1 != '\\'))) {
        cVar1 = pCVar6[1];
        pCVar6 = pCVar6 + 1;
      }
      lstrcpyA(local_348,pCVar6);
      *pCVar6 = '\0';
      bVar2 = FUN_004089a3(param_1,0x17,local_248);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        if ((param_2 != 0) || (pCVar6 = local_10, (bool)local_10[0] == bVar2)) {
          pCVar6 = local_248;
        }
        lstrcpyA(pcVar3,pCVar6);
        FUN_00408a22((int)local_248);
      }
      iVar4 = lstrlenA(param_1);
      pcVar3 = param_1 + iVar4;
      lstrcatA(param_1,local_348);
    }
  }
  return;
}


