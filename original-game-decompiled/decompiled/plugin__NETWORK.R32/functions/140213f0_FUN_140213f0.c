
/* ==== FUN_140213f0 @ 140213f0 ==== 
 * signature: undefined __stdcall FUN_140213f0(void)
 * body: 140213f0-140216cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140213f0(void)

{
  byte bVar1;
  byte bVar2;
  byte *_Source;
  DWORD DVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  
  __lock(0xc);
  DAT_14028988 = 0;
  DAT_140284c8 = 0xffffffff;
  DAT_140284b8 = 0xffffffff;
  _Source = (byte *)FID_conflict___getenv_lk("TZ");
  if (_Source == (byte *)0x0) {
    FUN_1401a650(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_14028990);
    if (DVar3 != 0) {
      DAT_14028418 = DAT_14028990 * 0x3c;
      DAT_14028988 = 1;
      if (DAT_140289d6 != 0) {
        DAT_14028418 = DAT_14028418 + DAT_140289e4 * 0x3c;
      }
      if ((DAT_14028a2a == 0) || (DAT_14028a38 == 0)) {
        DAT_1402841c = 0;
      }
      else {
        DAT_1402841c = 1;
        _DAT_14028420 = (DAT_14028a38 - DAT_140289e4) * 0x3c;
      }
      FID_conflict__mbtowc((wchar_t *)PTR_DAT_140284a8,&DAT_14028994,0x40);
      FID_conflict__mbtowc((wchar_t *)PTR_DAT_140284ac,&DAT_140289e8,0x40);
      PTR_DAT_140284ac[0x3f] = 0;
      PTR_DAT_140284a8[0x3f] = PTR_DAT_140284ac[0x3f];
      return;
    }
  }
  else {
    if (*_Source != 0) {
      pbVar9 = _Source;
      pbVar8 = DAT_140284b0;
      if (DAT_140284b0 == (byte *)0x0) {
LAB_14021558:
        FUN_1401dd10(DAT_140284b0);
        uVar6 = 0xffffffff;
        pbVar9 = _Source;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar1 != 0);
        DAT_140284b0 = (byte *)FUN_1401def0(~uVar6);
        if (DAT_140284b0 == (byte *)0x0) {
          FUN_1401a650(0xc);
          return;
        }
        uVar6 = 0xffffffff;
        pbVar9 = _Source;
        do {
          pbVar8 = pbVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar9 + 1;
          bVar1 = *pbVar9;
          pbVar9 = pbVar8;
        } while (bVar1 != 0);
        uVar6 = ~uVar6;
        pbVar9 = pbVar8 + -uVar6;
        pbVar8 = DAT_140284b0;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar8 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar8 = pbVar8 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar8 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar8 = pbVar8 + 1;
        }
        FUN_1401a650(0xc);
        pbVar9 = _Source + 3;
        _strncpy(PTR_DAT_140284a8,(char *)_Source,3);
        PTR_DAT_140284a8[3] = 0;
        bVar1 = *pbVar9;
        if (bVar1 == 0x2d) {
          pbVar9 = _Source + 4;
        }
        lVar5 = _atol((char *)pbVar9);
        DAT_14028418 = lVar5 * 0xe10;
        for (; (bVar2 = *pbVar9, bVar2 == 0x2b || (('/' < (char)bVar2 && ((char)bVar2 < ':'))));
            pbVar9 = pbVar9 + 1) {
        }
        if (*pbVar9 == 0x3a) {
          pbVar9 = pbVar9 + 1;
          lVar5 = _atol((char *)pbVar9);
          DAT_14028418 = DAT_14028418 + lVar5 * 0x3c;
          bVar2 = *pbVar9;
          while (('/' < (char)bVar2 && ((char)*pbVar9 < ':'))) {
            pbVar9 = pbVar9 + 1;
            bVar2 = *pbVar9;
          }
          if (*pbVar9 == 0x3a) {
            pbVar9 = pbVar9 + 1;
            lVar5 = _atol((char *)pbVar9);
            DAT_14028418 = DAT_14028418 + lVar5;
            bVar2 = *pbVar9;
            while (('/' < (char)bVar2 && ((char)*pbVar9 < ':'))) {
              pbVar9 = pbVar9 + 1;
              bVar2 = *pbVar9;
            }
          }
        }
        if (bVar1 == 0x2d) {
          DAT_14028418 = -DAT_14028418;
        }
        DAT_1402841c = (int)(char)*pbVar9;
        if (DAT_1402841c != 0) {
          _strncpy(PTR_DAT_140284ac,(char *)pbVar9,3);
          PTR_DAT_140284ac[3] = 0;
          return;
        }
        *PTR_DAT_140284ac = 0;
        return;
      }
      do {
        bVar1 = *pbVar9;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_1402154b:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_14021550;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_1402154b;
        pbVar9 = pbVar9 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_14021550:
      if (iVar4 != 0) goto LAB_14021558;
    }
    FUN_1401a650(0xc);
  }
  return;
}


