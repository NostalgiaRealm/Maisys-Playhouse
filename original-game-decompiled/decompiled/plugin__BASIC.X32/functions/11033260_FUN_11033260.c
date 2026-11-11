
/* ==== FUN_11033260 @ 11033260 ==== 
 * signature: undefined4 __cdecl FUN_11033260(uchar * param_1, int param_2)
 * body: 11033260-110334a9
 */

undefined4 __cdecl FUN_11033260(uchar *param_1,int param_2)

{
  uchar uVar1;
  int iVar2;
  int *piVar3;
  uchar *puVar4;
  int iVar5;
  int *piVar6;
  uchar *puVar7;
  uint uVar8;
  uint uVar9;
  uchar *puVar10;
  uchar *puVar11;
  bool bVar12;
  
  if (((param_1 == (uchar *)0x0) || (puVar4 = __mbschr(param_1,0x3d), puVar4 == (uchar *)0x0)) ||
     (param_1 == puVar4)) {
    return 0xffffffff;
  }
  bVar12 = puVar4[1] == '\0';
  if (DAT_110365e4 == DAT_110365e0) {
    DAT_110365e0 = copy_environ(DAT_110365e0);
  }
  if (DAT_110365e0 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_110365e8 == (undefined4 *)0x0)) {
      if (bVar12) {
        return 0;
      }
      DAT_110365e0 = (int *)FUN_11029420(4);
      if (DAT_110365e0 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_110365e0 = 0;
      if (DAT_110365e8 == (undefined4 *)0x0) {
        DAT_110365e8 = (undefined4 *)FUN_11029420(4);
        if (DAT_110365e8 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_110365e8 = 0;
      }
    }
    else {
      iVar5 = ___wtomb_environ();
      if (iVar5 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar6 = DAT_110365e0;
  iVar5 = FUN_110334b0(param_1,(int)puVar4 - (int)param_1);
  if ((iVar5 < 0) || (*piVar6 == 0)) {
    if (bVar12) {
      return 0;
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    piVar6 = FUN_11033580(piVar6,iVar5 * 4 + 8);
    if (piVar6 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar6[iVar5] = (int)param_1;
    (piVar6 + iVar5)[1] = 0;
  }
  else {
    if (!bVar12) {
      piVar6[iVar5] = (int)param_1;
      goto LAB_1103341d;
    }
    piVar3 = piVar6 + iVar5;
    FUN_11029180((LPVOID)*piVar3);
    iVar2 = *piVar3;
    while (iVar2 != 0) {
      iVar5 = iVar5 + 1;
      *piVar3 = piVar3[1];
      iVar2 = piVar3[1];
      piVar3 = piVar3 + 1;
    }
    piVar6 = FUN_11033580(piVar6,iVar5 << 2);
    if (piVar6 == (int *)0x0) goto LAB_1103341d;
  }
  DAT_110365e0 = piVar6;
LAB_1103341d:
  if (param_2 != 0) {
    uVar8 = 0xffffffff;
    puVar7 = param_1;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (uVar1 != '\0');
    puVar7 = (uchar *)FUN_11029420(~uVar8 + 1);
    if (puVar7 != (uchar *)0x0) {
      uVar8 = 0xffffffff;
      puVar10 = param_1;
      do {
        puVar11 = puVar10;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        puVar11 = puVar10 + 1;
        uVar1 = *puVar10;
        puVar10 = puVar11;
      } while (uVar1 != '\0');
      uVar8 = ~uVar8;
      puVar10 = puVar11 + -uVar8;
      puVar11 = puVar7;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
        puVar10 = puVar10 + 4;
        puVar11 = puVar11 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar7[(int)puVar4 - (int)param_1] = '\0';
      SetEnvironmentVariableA
                ((LPCSTR)puVar7,
                 (LPCSTR)(-(uint)!bVar12 & (uint)(puVar7 + ((int)puVar4 - (int)param_1) + 1)));
      FUN_11029180(puVar7);
    }
  }
  return 0;
}


