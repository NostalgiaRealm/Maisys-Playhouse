
/* ==== FUN_00407fba @ 00407fba ==== 
 * signature: undefined4 __cdecl FUN_00407fba(char * param_1, LPCSTR param_2, int param_3)
 * body: 00407fba-0040812a
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl FUN_00407fba(char *param_1,LPCSTR param_2,int param_3)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  CHAR local_34c [256];
  byte local_24c;
  char acStack_105 [257];
  
  pcVar2 = _strchr(param_1,0x2a);
  if ((pcVar2 == (char *)0x0) && (pcVar2 = _strchr(param_1,0x3f), pcVar2 == (char *)0x0)) {
    FUN_0040812b(param_1);
    if ((param_3 != 0) && (*param_2 != '\0')) {
      FUN_0040959c(param_2,param_1);
    }
  }
  else {
    iVar3 = lstrlenA(param_1);
    if ((2 < iVar3) && (iVar3 = lstrcmpA(param_1 + iVar3 + -3,&DAT_004105d8), iVar3 == 0)) {
      iVar3 = lstrlenA(param_1);
      if (iVar3 < 4) {
        return 0;
      }
      GetWindowsDirectoryA((LPSTR)((int)acStack_105 + 1),0x100);
      iVar3 = lstrcmpiA(param_1,(LPCSTR)((int)acStack_105 + 1));
      if (iVar3 == 0) {
        return 0;
      }
      GetSystemDirectoryA((LPSTR)((int)acStack_105 + 1),0x100);
      iVar3 = lstrcmpiA(param_1,(LPCSTR)((int)acStack_105 + 1));
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = lstrcmpiA(param_1,DAT_0041389c);
      if (iVar3 == 0) {
        return 0;
      }
    }
    lstrcpyA((LPSTR)((int)acStack_105 + 1),param_1);
    iVar3 = lstrlenA((LPCSTR)((int)acStack_105 + 1));
    for (pcVar2 = acStack_105 + iVar3; (uint)((int)acStack_105 + 1U) < pcVar2; pcVar2 = pcVar2 + -1)
    {
      if (*pcVar2 == '\\') goto LAB_004080ca;
    }
    if (*pcVar2 == '\\') {
LAB_004080ca:
      pcVar2 = pcVar2 + 1;
    }
    bVar1 = FUN_004089a3((LPCSTR)((int)acStack_105 + 1),7,local_34c);
    iVar3 = CONCAT31(extraout_var,bVar1);
    while (iVar3 == 0) {
      if ((local_24c & 0x10) == 0) {
        lstrcpyA(pcVar2,local_34c);
        FUN_0040812b((LPCSTR)((int)acStack_105 + 1));
      }
      bVar1 = FUN_004089e5(local_34c);
      iVar3 = CONCAT31(extraout_var_00,bVar1);
    }
    FUN_00408a22((int)local_34c);
  }
  return 1;
}


