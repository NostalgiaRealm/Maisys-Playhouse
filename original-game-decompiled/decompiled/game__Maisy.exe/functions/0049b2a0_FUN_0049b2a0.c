
/* ==== FUN_0049b2a0 @ 0049b2a0 ==== 
 * signature: LPWSTR __stdcall FUN_0049b2a0(void)
 * body: 0049b2a0-0049b49c
 */

LPWSTR FUN_0049b2a0(void)

{
  char cVar1;
  WCHAR WVar2;
  LPWSTR in_EAX;
  LPWCH pWVar3;
  LPWSTR pWVar4;
  int iVar5;
  uint uVar6;
  WCHAR *pWVar7;
  uint uVar9;
  LPWCH pWVar10;
  LPWSTR pWVar11;
  LPWCH pWVar12;
  int local_4;
  WCHAR *pWVar8;
  
  local_4 = 0;
  pWVar3 = (LPWCH)0x0;
  if (DAT_004defc8 == 0) {
    in_EAX = GetEnvironmentStringsW();
    if (in_EAX == (LPWCH)0x0) {
      in_EAX = (LPWSTR)GetEnvironmentStrings();
      if (in_EAX == (LPWCH)0x0) {
        return (LPWSTR)0x0;
      }
      DAT_004defc8 = 2;
      pWVar3 = in_EAX;
    }
    else {
      DAT_004defc8 = 1;
      pWVar3 = in_EAX;
    }
  }
  if (DAT_004defc8 == 1) {
    if ((pWVar3 == (LPWCH)0x0) && (pWVar3 = GetEnvironmentStringsW(), pWVar3 == (LPWCH)0x0)) {
      return (LPWSTR)0x0;
    }
    WVar2 = *pWVar3;
    pWVar7 = pWVar3;
    while (WVar2 != L'\0') {
      do {
        pWVar8 = pWVar7;
        pWVar7 = pWVar8 + 1;
      } while (*pWVar7 != L'\0');
      pWVar7 = pWVar8 + 2;
      WVar2 = *pWVar7;
    }
    uVar9 = (int)pWVar7 + (2 - (int)pWVar3);
    pWVar4 = (LPWSTR)FUN_00490210(uVar9);
    if (pWVar4 != (LPWSTR)0x0) {
      pWVar10 = pWVar3;
      pWVar11 = pWVar4;
      for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pWVar11 = *(undefined4 *)pWVar10;
        pWVar10 = pWVar10 + 2;
        pWVar11 = pWVar11 + 2;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)pWVar11 = (char)*pWVar10;
        pWVar10 = (LPWCH)((int)pWVar10 + 1);
        pWVar11 = (LPWSTR)((int)pWVar11 + 1);
      }
      FreeEnvironmentStringsW(pWVar3);
      return pWVar4;
    }
    FreeEnvironmentStringsW(pWVar3);
    return (LPWSTR)0x0;
  }
  if (DAT_004defc8 == 2) {
    if ((pWVar3 == (LPWCH)0x0) && (pWVar3 = (LPWCH)GetEnvironmentStrings(), pWVar3 == (LPWCH)0x0)) {
      return (LPWSTR)0x0;
    }
    cVar1 = (char)*pWVar3;
    pWVar10 = pWVar3;
    while (cVar1 != '\0') {
      iVar5 = MultiByteToWideChar(DAT_004de6b0,1,(LPCSTR)pWVar10,-1,(LPWSTR)0x0,0);
      if (iVar5 == 0) {
        return (LPWSTR)0x0;
      }
      uVar9 = 0xffffffff;
      local_4 = local_4 + iVar5;
      pWVar12 = pWVar10;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        WVar2 = *pWVar12;
        pWVar12 = (LPWCH)((int)pWVar12 + 1);
      } while ((char)WVar2 != '\0');
      pWVar10 = (LPWCH)((int)pWVar10 + ~uVar9);
      cVar1 = (char)*pWVar10;
    }
    in_EAX = (LPWSTR)FUN_00490210((local_4 + 1) * 2);
    if (in_EAX == (LPWSTR)0x0) {
      FreeEnvironmentStringsA((LPCH)pWVar3);
      return (LPWSTR)0x0;
    }
    cVar1 = (char)*pWVar3;
    pWVar4 = in_EAX;
    pWVar10 = pWVar3;
    while (cVar1 != '\0') {
      iVar5 = MultiByteToWideChar(DAT_004de6b0,1,(LPCSTR)pWVar10,-1,pWVar4,
                                  (local_4 + 1) - ((int)pWVar4 - (int)in_EAX >> 1));
      if (iVar5 == 0) {
        FUN_0048e750(in_EAX);
        FreeEnvironmentStringsA((LPCH)pWVar3);
        return (LPWSTR)0x0;
      }
      uVar9 = 0xffffffff;
      pWVar12 = pWVar10;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        WVar2 = *pWVar12;
        pWVar12 = (LPWCH)((int)pWVar12 + 1);
      } while ((char)WVar2 != '\0');
      pWVar10 = (LPWCH)((int)pWVar10 + ~uVar9);
      iVar5 = FUN_00492020(pWVar4);
      pWVar4 = pWVar4 + iVar5 + 1;
      cVar1 = (char)*pWVar10;
    }
    *pWVar4 = L'\0';
    FreeEnvironmentStringsA((LPCH)pWVar3);
  }
  return in_EAX;
}


