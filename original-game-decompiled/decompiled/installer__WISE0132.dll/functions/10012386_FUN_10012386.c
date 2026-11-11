
/* ==== FUN_10012386 @ 10012386 ==== 
 * signature: undefined __cdecl FUN_10012386(LPCSTR param_1, int param_2)
 * body: 10012386-10012538
 */

void __cdecl FUN_10012386(LPCSTR param_1,int param_2)

{
  CHAR CVar1;
  LPCSTR pCVar2;
  uint uVar3;
  LPCSTR pCVar4;
  int iVar5;
  CHAR local_34c [568];
  char local_114 [16];
  CHAR local_104 [256];
  
  if (((*param_1 == '\0') || (param_1[1] != ':')) || (param_1[2] != '\0')) {
    pCVar2 = FUN_100147fa(param_1,0x5c);
    if (pCVar2 == (LPCSTR)0x0) {
      lstrcpyA(local_104,param_1);
      FUN_100162e0(param_1,0x100);
      OemToCharA(param_1,param_1);
      CVar1 = FUN_10014819(param_1);
      if (CVar1 != '\\') {
        lstrcatA(param_1,&DAT_1001f314);
      }
      lstrcatA(param_1,local_104);
    }
    if (DAT_100200d4 < 2) {
      uVar3 = *(ushort *)(PTR_DAT_1001fec8 + *param_1 * 2) & 0x103;
    }
    else {
      uVar3 = FUN_10015ac0((int)*param_1,0x103);
    }
    if ((uVar3 != 0) && (param_1[1] == ':')) {
      uVar3 = FUN_10015b60((int)*param_1);
      *param_1 = (CHAR)uVar3;
    }
    pCVar2 = param_1;
    if ((*param_1 == '\\') && (param_1[1] == '\\')) {
      pCVar2 = param_1 + 2;
      pCVar4 = FUN_100147fa(pCVar2,0x5c);
      if (pCVar4 == (LPCSTR)0x0) {
        iVar5 = lstrlenA(pCVar2);
        pCVar2 = pCVar2 + iVar5;
      }
      else {
        pCVar2 = pCVar4 + 1;
      }
    }
    pCVar4 = FUN_100147fa(pCVar2,0x5c);
    if (pCVar4 == (LPCSTR)0x0) {
      iVar5 = lstrlenA(pCVar2);
      pCVar2 = pCVar2 + iVar5;
    }
    else {
      pCVar2 = pCVar4 + 1;
    }
    while (*pCVar2 != '\0') {
      pCVar4 = FUN_100147fa(pCVar2,0x5c);
      if (pCVar4 == (LPCSTR)0x0) {
        iVar5 = lstrlenA(pCVar2);
        pCVar4 = pCVar2 + iVar5;
      }
      lstrcpyA(local_104,pCVar4);
      *pCVar4 = '\0';
      iVar5 = FUN_100120c5(param_1,0x17,local_34c);
      if (iVar5 == 0) {
        if (((param_2 != 0) || (DAT_100241e8 == 0)) || (pCVar4 = local_114, local_114[0] == '\0')) {
          pCVar4 = local_34c;
        }
        lstrcpyA(pCVar2,pCVar4);
      }
      FUN_1001221a((int)local_34c);
      iVar5 = lstrlenA(param_1);
      pCVar2 = param_1 + iVar5;
      lstrcatA(param_1,local_104);
      if (*pCVar2 == '\\') {
        pCVar2 = pCVar2 + 1;
      }
    }
  }
  return;
}


