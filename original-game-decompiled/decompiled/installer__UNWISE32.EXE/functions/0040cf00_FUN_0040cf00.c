
/* ==== FUN_0040cf00 @ 0040cf00 ==== 
 * signature: undefined4 __cdecl FUN_0040cf00(int param_1)
 * body: 0040cf00-0040d10f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040cf00(int param_1)

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
  
  CodePage = FUN_0040d110(param_1);
  if (CodePage == DAT_004137e0) {
    return 0;
  }
  if (CodePage == 0) {
    FUN_0040d1c0();
    FUN_0040d200();
    return 0;
  }
  iVar10 = 0;
  pUVar5 = &DAT_00413288;
  do {
    if (*pUVar5 == CodePage) {
      puVar14 = &DAT_004135d8;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      uVar7 = 0;
      iVar10 = iVar10 * 0x30;
      pbVar12 = (byte *)(iVar10 + 0x413298);
      do {
        bVar3 = *pbVar12;
        for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
            pbVar13 = pbVar13 + 2) {
          uVar8 = (uint)*pbVar13;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_00413280)[uVar7];
            do {
              pbVar2 = (byte *)((int)&DAT_004135d8 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          bVar3 = pbVar13[2];
        }
        uVar7 = uVar7 + 1;
        pbVar12 = pbVar12 + 8;
      } while (uVar7 < 4);
      _DAT_00413ce0 = 1;
      DAT_004137e0 = CodePage;
      DAT_004137e4 = FUN_0040d160(CodePage);
      _DAT_004137e8 = *(undefined4 *)(iVar10 + 0x41328c);
      _DAT_004137ec = *(undefined4 *)(iVar10 + 0x413290);
      _DAT_004137f0 = *(undefined4 *)(iVar10 + 0x413294);
      FUN_0040d200();
      return 0;
    }
    pUVar5 = pUVar5 + 0xc;
    iVar10 = iVar10 + 1;
  } while (pUVar5 < &DAT_00413378);
  BVar6 = GetCPInfo(CodePage,&local_14);
  if (BVar6 != 1) {
    if (DAT_004137f4 == 0) {
      return 0xffffffff;
    }
    FUN_0040d1c0();
    FUN_0040d200();
    return 0;
  }
  puVar14 = &DAT_004135d8;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)puVar14 = 0;
  DAT_004137e4 = 0;
  if (local_14.MaxCharSize < 2) {
    _DAT_00413ce0 = 0;
    DAT_004137e0 = CodePage;
  }
  else {
    DAT_004137e0 = CodePage;
    if (local_14.LeadByte[0] != '\0') {
      pBVar11 = local_14.LeadByte + 1;
      do {
        bVar3 = *pBVar11;
        if (bVar3 == 0) break;
        for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
          *(byte *)((int)&DAT_004135d8 + uVar7 + 1) = *(byte *)((int)&DAT_004135d8 + uVar7 + 1) | 4;
        }
        pBVar1 = pBVar11 + 1;
        pBVar11 = pBVar11 + 2;
      } while (*pBVar1 != 0);
    }
    uVar7 = 1;
    do {
      *(byte *)((int)&DAT_004135d8 + uVar7 + 1) = *(byte *)((int)&DAT_004135d8 + uVar7 + 1) | 8;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0xff);
    DAT_004137e4 = FUN_0040d160(CodePage);
    _DAT_00413ce0 = 1;
  }
  _DAT_004137e8 = 0;
  _DAT_004137ec = 0;
  _DAT_004137f0 = 0;
  FUN_0040d200();
  return 0;
}


