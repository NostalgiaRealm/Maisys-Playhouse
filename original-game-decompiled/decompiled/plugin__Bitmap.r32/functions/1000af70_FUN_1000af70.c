
/* ==== FUN_1000af70 @ 1000af70 ==== 
 * signature: undefined4 __cdecl FUN_1000af70(int param_1)
 * body: 1000af70-1000b18a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000af70(int param_1)

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
  
  FUN_1000a320(0x19);
  CodePage = FUN_1000b190(param_1);
  if (CodePage == DAT_10017224) {
    FUN_1000a3a0(0x19);
    return 0;
  }
  if (CodePage != 0) {
    iVar10 = 0;
    pUVar5 = &DAT_10013480;
    do {
      if (*pUVar5 == CodePage) {
        puVar14 = &DAT_10017120;
        for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        *(undefined1 *)puVar14 = 0;
        uVar7 = 0;
        iVar10 = iVar10 * 0x30;
        pbVar12 = (byte *)(iVar10 + 0x10013490);
        do {
          bVar3 = *pbVar12;
          for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
              pbVar13 = pbVar13 + 2) {
            uVar8 = (uint)*pbVar13;
            if (uVar8 <= bVar3) {
              bVar4 = (&DAT_10013478)[uVar7];
              do {
                pbVar2 = (byte *)((int)&DAT_10017120 + uVar8 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar8 = uVar8 + 1;
              } while (uVar8 <= bVar3);
            }
            bVar3 = pbVar13[2];
          }
          uVar7 = uVar7 + 1;
          pbVar12 = pbVar12 + 8;
        } while (uVar7 < 4);
        DAT_10017224 = CodePage;
        _DAT_10017228 = FUN_1000b1e0(CodePage);
        _DAT_10017230 = *(undefined4 *)(iVar10 + 0x10013484);
        _DAT_10017234 = *(undefined4 *)(iVar10 + 0x10013488);
        _DAT_10017238 = *(undefined4 *)(iVar10 + 0x1001348c);
        FUN_1000a3a0(0x19);
        return 0;
      }
      pUVar5 = pUVar5 + 0xc;
      iVar10 = iVar10 + 1;
    } while (pUVar5 < &DAT_10013570);
    BVar6 = GetCPInfo(CodePage,&local_14);
    if (BVar6 == 1) {
      puVar14 = &DAT_10017120;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      if (local_14.MaxCharSize < 2) {
        DAT_10017224 = 0;
        _DAT_10017228 = 0;
      }
      else {
        if (local_14.LeadByte[0] != '\0') {
          pBVar11 = local_14.LeadByte + 1;
          do {
            bVar3 = *pBVar11;
            if (bVar3 == 0) break;
            for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
              *(byte *)((int)&DAT_10017120 + uVar7 + 1) =
                   *(byte *)((int)&DAT_10017120 + uVar7 + 1) | 4;
            }
            pBVar1 = pBVar11 + 1;
            pBVar11 = pBVar11 + 2;
          } while (*pBVar1 != 0);
        }
        uVar7 = 1;
        do {
          *(byte *)((int)&DAT_10017120 + uVar7 + 1) = *(byte *)((int)&DAT_10017120 + uVar7 + 1) | 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xff);
        DAT_10017224 = CodePage;
        _DAT_10017228 = FUN_1000b1e0(CodePage);
      }
      _DAT_10017230 = 0;
      _DAT_10017234 = 0;
      _DAT_10017238 = 0;
      FUN_1000a3a0(0x19);
      return 0;
    }
    if (DAT_1001723c == 0) {
      FUN_1000a3a0(0x19);
      return 0xffffffff;
    }
  }
  FUN_1000b240();
  FUN_1000a3a0(0x19);
  return 0;
}


