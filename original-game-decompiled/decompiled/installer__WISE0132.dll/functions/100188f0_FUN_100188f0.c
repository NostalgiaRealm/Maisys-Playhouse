
/* ==== FUN_100188f0 @ 100188f0 ==== 
 * signature: undefined4 __cdecl FUN_100188f0(int param_1)
 * body: 100188f0-10018b1a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100188f0(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  BYTE *pBVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  _cpinfo local_14;
  
  FUN_10016e20(0x19);
  CodePage = FUN_10018b20(param_1);
  if (CodePage == DAT_10023730) {
    FUN_10016ea0(0x19);
    return 0;
  }
  if (CodePage == 0) {
    FUN_10018bd0();
    FUN_10018c10();
    FUN_10016ea0(0x19);
    return 0;
  }
  iVar10 = 0;
  pUVar5 = &DAT_100224d8;
  do {
    if (*pUVar5 == CodePage) {
      puVar14 = &DAT_10023528;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      uVar7 = 0;
      iVar10 = iVar10 * 0x30;
      pbVar12 = (byte *)(iVar10 + 0x100224e8);
      do {
        bVar3 = *pbVar12;
        for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
            pbVar13 = pbVar13 + 2) {
          uVar8 = (uint)*pbVar13;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100224d0)[uVar7];
            do {
              pbVar2 = (byte *)((int)&DAT_10023528 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          bVar3 = pbVar13[2];
        }
        uVar7 = uVar7 + 1;
        pbVar12 = pbVar12 + 8;
      } while (uVar7 < 4);
      _DAT_10025204 = 1;
      DAT_10023730 = CodePage;
      DAT_10023734 = FUN_10018b70(CodePage);
      _DAT_10023738 = *(undefined4 *)(iVar10 + 0x100224dc);
      _DAT_1002373c = *(undefined4 *)(iVar10 + 0x100224e0);
      _DAT_10023740 = *(undefined4 *)(iVar10 + 0x100224e4);
      goto LAB_10018a42;
    }
    pUVar5 = pUVar5 + 0xc;
    iVar10 = iVar10 + 1;
  } while (pUVar5 < &DAT_100225c8);
  BVar6 = GetCPInfo(CodePage,&local_14);
  if (BVar6 == 1) {
    puVar14 = &DAT_10023528;
    for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined1 *)puVar14 = 0;
    DAT_10023734 = 0;
    if (local_14.MaxCharSize < 2) {
      _DAT_10025204 = 0;
      DAT_10023730 = CodePage;
    }
    else {
      DAT_10023730 = CodePage;
      if (local_14.LeadByte[0] != '\0') {
        pBVar11 = local_14.LeadByte + 1;
        do {
          bVar3 = *pBVar11;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            *(byte *)((int)&DAT_10023528 + uVar7 + 1) =
                 *(byte *)((int)&DAT_10023528 + uVar7 + 1) | 4;
          }
          pBVar1 = pBVar11 + 1;
          pBVar11 = pBVar11 + 2;
        } while (*pBVar1 != 0);
      }
      uVar7 = 1;
      do {
        *(byte *)((int)&DAT_10023528 + uVar7 + 1) = *(byte *)((int)&DAT_10023528 + uVar7 + 1) | 8;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0xff);
      DAT_10023734 = FUN_10018b70(CodePage);
      _DAT_10025204 = 1;
    }
    _DAT_10023738 = 0;
    _DAT_1002373c = 0;
    _DAT_10023740 = 0;
  }
  else {
    if (DAT_10023744 == 0) {
      FUN_10016ea0(0x19);
      return 0xffffffff;
    }
    FUN_10018bd0();
  }
LAB_10018a42:
  FUN_10018c10();
  FUN_10016ea0(0x19);
  return 0;
}


