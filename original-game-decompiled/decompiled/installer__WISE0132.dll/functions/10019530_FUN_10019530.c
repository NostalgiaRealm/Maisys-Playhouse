
/* ==== FUN_10019530 @ 10019530 ==== 
 * signature: undefined4 __cdecl FUN_10019530(uint * param_1, int param_2)
 * body: 10019530-10019732
 */

undefined4 __cdecl FUN_10019530(uint *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  LPWSTR pWVar5;
  int *piVar6;
  LPCSTR lpName;
  uint uVar7;
  uint uVar8;
  CHAR *pCVar9;
  LPCSTR pCVar10;
  bool bVar11;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar3 = FUN_1001acf0(param_1,0x3d);
  if (puVar3 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar3) {
    return 0xffffffff;
  }
  bVar11 = *(char *)((int)puVar3 + 1) == '\0';
  if (DAT_100233b0 == DAT_100233b4) {
    DAT_100233b0 = FUN_100197c0(DAT_100233b0);
  }
  if (DAT_100233b0 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_100233b8 == (undefined4 *)0x0)) {
      if (bVar11) {
        return 0;
      }
      DAT_100233b0 = (int *)FUN_10015d50(4);
      if (DAT_100233b0 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_100233b0 = 0;
      if (DAT_100233b8 == (undefined4 *)0x0) {
        DAT_100233b8 = (undefined4 *)FUN_10015d50(4);
        if (DAT_100233b8 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_100233b8 = 0;
      }
    }
    else {
      iVar4 = FUN_10016fe0();
      if (iVar4 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar6 = DAT_100233b0;
  pWVar5 = (LPWSTR)((int)puVar3 - (int)param_1);
  iVar4 = FUN_10019740((byte *)param_1,pWVar5);
  if ((iVar4 < 0) || (*piVar6 == 0)) {
    if (bVar11) {
      return 0;
    }
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    piVar6 = FUN_1001ab40(piVar6,iVar4 * 4 + 8);
    if (piVar6 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar6[iVar4] = (int)param_1;
    piVar6[iVar4 + 1] = 0;
    DAT_100233b0 = piVar6;
  }
  else if (bVar11) {
    FUN_10015a50((undefined *)piVar6[iVar4]);
    iVar1 = piVar6[iVar4];
    piVar2 = piVar6 + iVar4;
    while (iVar1 != 0) {
      *piVar2 = piVar2[1];
      iVar4 = iVar4 + 1;
      iVar1 = piVar2[1];
      piVar2 = piVar2 + 1;
    }
    piVar6 = FUN_1001ab40(piVar6,iVar4 * 4);
    if (piVar6 != (int *)0x0) {
      DAT_100233b0 = piVar6;
    }
  }
  else {
    piVar6[iVar4] = (int)param_1;
  }
  if (param_2 != 0) {
    uVar7 = 0xffffffff;
    puVar3 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      uVar8 = *puVar3;
      puVar3 = (uint *)((int)puVar3 + 1);
    } while ((char)uVar8 != '\0');
    lpName = (LPCSTR)FUN_10015d50(~uVar7 + 1);
    if (lpName != (LPCSTR)0x0) {
      uVar7 = 0xffffffff;
      do {
        puVar3 = param_1;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        puVar3 = (uint *)((int)param_1 + 1);
        uVar8 = *param_1;
        param_1 = puVar3;
      } while ((char)uVar8 != '\0');
      uVar7 = ~uVar7;
      pCVar9 = (CHAR *)((int)puVar3 - uVar7);
      pCVar10 = lpName;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pCVar10 = *(undefined4 *)pCVar9;
        pCVar9 = pCVar9 + 4;
        pCVar10 = pCVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pCVar10 = *pCVar9;
        pCVar9 = pCVar9 + 1;
        pCVar10 = pCVar10 + 1;
      }
      lpName[(int)pWVar5] = '\0';
      SetEnvironmentVariableA(lpName,(LPCSTR)(~-(uint)bVar11 & (uint)(lpName + 1 + (int)pWVar5)));
      FUN_10015a50(lpName);
      return 0;
    }
  }
  return 0;
}


