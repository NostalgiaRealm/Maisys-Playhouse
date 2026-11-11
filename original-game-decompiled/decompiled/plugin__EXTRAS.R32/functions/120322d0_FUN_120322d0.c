
/* ==== FUN_120322d0 @ 120322d0 ==== 
 * signature: undefined __stdcall FUN_120322d0(void)
 * body: 120322d0-120325ac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_120322d0(void)

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
  DAT_120399e0 = 0;
  DAT_120397c0 = 0xffffffff;
  DAT_120397b0 = 0xffffffff;
  _Source = (byte *)FID_conflict___getenv_lk("TZ");
  if (_Source == (byte *)0x0) {
    FUN_1202c520(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_120399e8);
    if (DVar3 != 0) {
      DAT_12039710 = DAT_120399e8 * 0x3c;
      DAT_120399e0 = 1;
      if (DAT_12039a2e != 0) {
        DAT_12039710 = DAT_12039710 + DAT_12039a3c * 0x3c;
      }
      if ((DAT_12039a82 == 0) || (DAT_12039a90 == 0)) {
        DAT_12039714 = 0;
      }
      else {
        DAT_12039714 = 1;
        _DAT_12039718 = (DAT_12039a90 - DAT_12039a3c) * 0x3c;
      }
      FID_conflict__mbtowc((wchar_t *)PTR_DAT_120397a0,&DAT_120399ec,0x40);
      FID_conflict__mbtowc((wchar_t *)PTR_DAT_120397a4,&DAT_12039a40,0x40);
      PTR_DAT_120397a4[0x3f] = 0;
      PTR_DAT_120397a0[0x3f] = PTR_DAT_120397a4[0x3f];
      return;
    }
  }
  else {
    if (*_Source != 0) {
      pbVar9 = _Source;
      pbVar8 = DAT_120397a8;
      if (DAT_120397a8 == (byte *)0x0) {
LAB_12032438:
        FUN_1202c7c0(DAT_120397a8);
        uVar6 = 0xffffffff;
        pbVar9 = _Source;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar1 != 0);
        DAT_120397a8 = (byte *)FUN_1202c7e0(~uVar6);
        if (DAT_120397a8 == (byte *)0x0) {
          FUN_1202c520(0xc);
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
        pbVar8 = DAT_120397a8;
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
        FUN_1202c520(0xc);
        pbVar9 = _Source + 3;
        _strncpy(PTR_DAT_120397a0,(char *)_Source,3);
        PTR_DAT_120397a0[3] = 0;
        bVar1 = *pbVar9;
        if (bVar1 == 0x2d) {
          pbVar9 = _Source + 4;
        }
        lVar5 = _atol((char *)pbVar9);
        DAT_12039710 = lVar5 * 0xe10;
        for (; (bVar2 = *pbVar9, bVar2 == 0x2b || (('/' < (char)bVar2 && ((char)bVar2 < ':'))));
            pbVar9 = pbVar9 + 1) {
        }
        if (*pbVar9 == 0x3a) {
          pbVar9 = pbVar9 + 1;
          lVar5 = _atol((char *)pbVar9);
          DAT_12039710 = DAT_12039710 + lVar5 * 0x3c;
          bVar2 = *pbVar9;
          while (('/' < (char)bVar2 && ((char)*pbVar9 < ':'))) {
            pbVar9 = pbVar9 + 1;
            bVar2 = *pbVar9;
          }
          if (*pbVar9 == 0x3a) {
            pbVar9 = pbVar9 + 1;
            lVar5 = _atol((char *)pbVar9);
            DAT_12039710 = DAT_12039710 + lVar5;
            bVar2 = *pbVar9;
            while (('/' < (char)bVar2 && ((char)*pbVar9 < ':'))) {
              pbVar9 = pbVar9 + 1;
              bVar2 = *pbVar9;
            }
          }
        }
        if (bVar1 == 0x2d) {
          DAT_12039710 = -DAT_12039710;
        }
        DAT_12039714 = (int)(char)*pbVar9;
        if (DAT_12039714 != 0) {
          _strncpy(PTR_DAT_120397a4,(char *)pbVar9,3);
          PTR_DAT_120397a4[3] = 0;
          return;
        }
        *PTR_DAT_120397a4 = 0;
        return;
      }
      do {
        bVar1 = *pbVar9;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_1203242b:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_12032430;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_1203242b;
        pbVar9 = pbVar9 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_12032430:
      if (iVar4 != 0) goto LAB_12032438;
    }
    FUN_1202c520(0xc);
  }
  return;
}


