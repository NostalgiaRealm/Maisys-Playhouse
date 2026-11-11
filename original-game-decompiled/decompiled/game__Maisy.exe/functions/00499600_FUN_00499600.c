
/* ==== FUN_00499600 @ 00499600 ==== 
 * signature: undefined __stdcall FUN_00499600(void)
 * body: 00499600-004998dc
 */

void FUN_00499600(void)

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
  DAT_004e54a8 = 0;
  DAT_004def20 = 0xffffffff;
  DAT_004def10 = 0xffffffff;
  _Source = (byte *)FID_conflict___getenv_lk("TZ");
  if (_Source == (byte *)0x0) {
    FUN_00493e20(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_004e54b0);
    if (DVar3 != 0) {
      DAT_004dee70 = DAT_004e54b0 * 0x3c;
      DAT_004e54a8 = 1;
      if (DAT_004e54f6 != 0) {
        DAT_004dee70 = DAT_004dee70 + DAT_004e5504 * 0x3c;
      }
      if ((DAT_004e554a == 0) || (DAT_004e5558 == 0)) {
        DAT_004dee74 = 0;
      }
      else {
        DAT_004dee74 = 1;
        DAT_004dee78 = (DAT_004e5558 - DAT_004e5504) * 0x3c;
      }
      FID_conflict__mbtowc((wchar_t *)PTR_DAT_004def00,&DAT_004e54b4,0x40);
      FID_conflict__mbtowc((wchar_t *)PTR_DAT_004def04,&DAT_004e5508,0x40);
      PTR_DAT_004def04[0x3f] = 0;
      PTR_DAT_004def00[0x3f] = PTR_DAT_004def04[0x3f];
      return;
    }
  }
  else {
    if (*_Source != 0) {
      pbVar9 = _Source;
      pbVar8 = DAT_004def08;
      if (DAT_004def08 == (byte *)0x0) {
LAB_00499768:
        FUN_0048e750(DAT_004def08);
        uVar6 = 0xffffffff;
        pbVar9 = _Source;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar1 != 0);
        DAT_004def08 = (byte *)FUN_00490210(~uVar6);
        if (DAT_004def08 == (byte *)0x0) {
          FUN_00493e20(0xc);
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
        pbVar8 = DAT_004def08;
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
        FUN_00493e20(0xc);
        pbVar9 = _Source + 3;
        _strncpy(PTR_DAT_004def00,(char *)_Source,3);
        PTR_DAT_004def00[3] = 0;
        bVar1 = *pbVar9;
        if (bVar1 == 0x2d) {
          pbVar9 = _Source + 4;
        }
        lVar5 = _atol((char *)pbVar9);
        DAT_004dee70 = lVar5 * 0xe10;
        for (; (bVar2 = *pbVar9, bVar2 == 0x2b || (('/' < (char)bVar2 && ((char)bVar2 < ':'))));
            pbVar9 = pbVar9 + 1) {
        }
        if (*pbVar9 == 0x3a) {
          pbVar9 = pbVar9 + 1;
          lVar5 = _atol((char *)pbVar9);
          DAT_004dee70 = DAT_004dee70 + lVar5 * 0x3c;
          bVar2 = *pbVar9;
          while (('/' < (char)bVar2 && ((char)*pbVar9 < ':'))) {
            pbVar9 = pbVar9 + 1;
            bVar2 = *pbVar9;
          }
          if (*pbVar9 == 0x3a) {
            pbVar9 = pbVar9 + 1;
            lVar5 = _atol((char *)pbVar9);
            DAT_004dee70 = DAT_004dee70 + lVar5;
            bVar2 = *pbVar9;
            while (('/' < (char)bVar2 && ((char)*pbVar9 < ':'))) {
              pbVar9 = pbVar9 + 1;
              bVar2 = *pbVar9;
            }
          }
        }
        if (bVar1 == 0x2d) {
          DAT_004dee70 = -DAT_004dee70;
        }
        DAT_004dee74 = (int)(char)*pbVar9;
        if (DAT_004dee74 != 0) {
          _strncpy(PTR_DAT_004def04,(char *)pbVar9,3);
          PTR_DAT_004def04[3] = 0;
          return;
        }
        *PTR_DAT_004def04 = 0;
        return;
      }
      do {
        bVar1 = *pbVar9;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_0049975b:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00499760;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_0049975b;
        pbVar9 = pbVar9 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00499760:
      if (iVar4 != 0) goto LAB_00499768;
    }
    FUN_00493e20(0xc);
  }
  return;
}


