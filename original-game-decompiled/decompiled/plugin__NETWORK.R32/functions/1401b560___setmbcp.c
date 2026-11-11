
/* ==== __setmbcp @ 1401b560 ==== 
 * signature: int __cdecl __setmbcp(int _CodePage)
 * body: 1401b560-1401b782
 * note: Library Function - Single Match  __setmbcp  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 1998 Release */

int __cdecl __setmbcp(int _CodePage)

{
  byte *pbVar1;
  byte bVar2;
  UINT CodePage;
  UINT *pUVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  BYTE *pBVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int local_18;
  _cpinfo local_14;
  
  __lock(0x19);
  CodePage = getSystemCP(_CodePage);
  if (DAT_14027454 == CodePage) {
    FUN_1401a650(0x19);
    return 0;
  }
  if (CodePage == 0) {
    setSBCS();
    FUN_1401a650(0x19);
    return 0;
  }
  local_18 = 0;
  pUVar3 = &DAT_14027478;
  do {
    if (*pUVar3 == CodePage) {
      uVar5 = 0;
      puVar10 = &DAT_14027350;
      for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      *(undefined1 *)puVar10 = 0;
      do {
        pbVar9 = &DAT_14027488 + (local_18 * 6 + uVar5) * 8;
        bVar2 = *pbVar9;
        while ((bVar2 != 0 && (pbVar9[1] != 0))) {
          uVar7 = (uint)*pbVar9;
          if (uVar7 <= pbVar9[1]) {
            bVar2 = (&DAT_14027470)[uVar5];
            do {
              pbVar1 = (byte *)((int)&DAT_14027350 + uVar7 + 1);
              *pbVar1 = *pbVar1 | bVar2;
              uVar7 = uVar7 + 1;
            } while (uVar7 <= pbVar9[1]);
          }
          pbVar9 = pbVar9 + 2;
          bVar2 = *pbVar9;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 4);
      DAT_14027454 = CodePage;
      DAT_14027458 = _CPtoLCID(CodePage);
      DAT_14027464 = *(undefined4 *)(&DAT_14027480 + local_18 * 0x30);
      DAT_14027460 = *(undefined4 *)(&DAT_1402747c + local_18 * 0x30);
      DAT_14027468 = *(undefined4 *)(local_18 * 0x30 + 0x14027484);
      FUN_1401a650(0x19);
      return 0;
    }
    pUVar3 = pUVar3 + 0xc;
    local_18 = local_18 + 1;
  } while (pUVar3 < &DAT_14027568);
  BVar4 = GetCPInfo(CodePage,&local_14);
  if (BVar4 == 1) {
    puVar10 = &DAT_14027350;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined1 *)puVar10 = 0;
    if (local_14.MaxCharSize < 2) {
      DAT_14027458 = 0;
      DAT_14027454 = 0;
    }
    else {
      pBVar8 = local_14.LeadByte;
      while ((local_14.LeadByte[0] != 0 && (pBVar8[1] != 0))) {
        uVar5 = (uint)*pBVar8;
        if (uVar5 <= pBVar8[1]) {
          do {
            pbVar9 = (byte *)((int)&DAT_14027350 + uVar5 + 1);
            *pbVar9 = *pbVar9 | 4;
            uVar5 = uVar5 + 1;
          } while (uVar5 <= pBVar8[1]);
        }
        pBVar8 = pBVar8 + 2;
        local_14.LeadByte[0] = *pBVar8;
      }
      uVar5 = 1;
      do {
        pbVar9 = (byte *)((int)&DAT_14027350 + uVar5 + 1);
        *pbVar9 = *pbVar9 | 8;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0xff);
      DAT_14027454 = CodePage;
      DAT_14027458 = _CPtoLCID(CodePage);
    }
    DAT_14027460 = 0;
    DAT_14027464 = 0;
    DAT_14027468 = 0;
    FUN_1401a650(0x19);
    return 0;
  }
  if (DAT_1402746c == 0) {
    FUN_1401a650(0x19);
    return -1;
  }
  setSBCS();
  FUN_1401a650(0x19);
  return 0;
}


