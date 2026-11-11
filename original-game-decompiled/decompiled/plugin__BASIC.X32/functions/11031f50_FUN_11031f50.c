
/* ==== FUN_11031f50 @ 11031f50 ==== 
 * signature: undefined __stdcall FUN_11031f50(void)
 * body: 11031f50-1103222c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_11031f50(void)

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
  DAT_11039960 = 0;
  DAT_11037ed0 = 0xffffffff;
  DAT_11037ec0 = 0xffffffff;
  _Source = (byte *)FID_conflict___getenv_lk("TZ");
  if (_Source == (byte *)0x0) {
    FUN_1102b240(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_11039968);
    if (DVar3 != 0) {
      DAT_11037e20 = DAT_11039968 * 0x3c;
      DAT_11039960 = 1;
      if (DAT_110399ae != 0) {
        DAT_11037e20 = DAT_11037e20 + DAT_110399bc * 0x3c;
      }
      if ((DAT_11039a02 == 0) || (DAT_11039a10 == 0)) {
        DAT_11037e24 = 0;
      }
      else {
        DAT_11037e24 = 1;
        _DAT_11037e28 = (DAT_11039a10 - DAT_110399bc) * 0x3c;
      }
      FID_conflict__mbtowc((wchar_t *)PTR_DAT_11037eb0,&DAT_1103996c,0x40);
      FID_conflict__mbtowc((wchar_t *)PTR_DAT_11037eb4,&DAT_110399c0,0x40);
      PTR_DAT_11037eb4[0x3f] = 0;
      PTR_DAT_11037eb0[0x3f] = PTR_DAT_11037eb4[0x3f];
      return;
    }
  }
  else {
    if (*_Source != 0) {
      pbVar9 = _Source;
      pbVar8 = DAT_11037eb8;
      if (DAT_11037eb8 == (byte *)0x0) {
LAB_110320b8:
        FUN_11029180(DAT_11037eb8);
        uVar6 = 0xffffffff;
        pbVar9 = _Source;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar1 != 0);
        DAT_11037eb8 = (byte *)FUN_11029420(~uVar6);
        if (DAT_11037eb8 == (byte *)0x0) {
          FUN_1102b240(0xc);
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
        pbVar8 = DAT_11037eb8;
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
        FUN_1102b240(0xc);
        pbVar9 = _Source + 3;
        _strncpy(PTR_DAT_11037eb0,(char *)_Source,3);
        PTR_DAT_11037eb0[3] = 0;
        bVar1 = *pbVar9;
        if (bVar1 == 0x2d) {
          pbVar9 = _Source + 4;
        }
        lVar5 = _atol((char *)pbVar9);
        DAT_11037e20 = lVar5 * 0xe10;
        for (; (bVar2 = *pbVar9, bVar2 == 0x2b || (('/' < (char)bVar2 && ((char)bVar2 < ':'))));
            pbVar9 = pbVar9 + 1) {
        }
        if (*pbVar9 == 0x3a) {
          pbVar9 = pbVar9 + 1;
          lVar5 = _atol((char *)pbVar9);
          DAT_11037e20 = DAT_11037e20 + lVar5 * 0x3c;
          bVar2 = *pbVar9;
          while (('/' < (char)bVar2 && ((char)*pbVar9 < ':'))) {
            pbVar9 = pbVar9 + 1;
            bVar2 = *pbVar9;
          }
          if (*pbVar9 == 0x3a) {
            pbVar9 = pbVar9 + 1;
            lVar5 = _atol((char *)pbVar9);
            DAT_11037e20 = DAT_11037e20 + lVar5;
            bVar2 = *pbVar9;
            while (('/' < (char)bVar2 && ((char)*pbVar9 < ':'))) {
              pbVar9 = pbVar9 + 1;
              bVar2 = *pbVar9;
            }
          }
        }
        if (bVar1 == 0x2d) {
          DAT_11037e20 = -DAT_11037e20;
        }
        DAT_11037e24 = (int)(char)*pbVar9;
        if (DAT_11037e24 != 0) {
          _strncpy(PTR_DAT_11037eb4,(char *)pbVar9,3);
          PTR_DAT_11037eb4[3] = 0;
          return;
        }
        *PTR_DAT_11037eb4 = 0;
        return;
      }
      do {
        bVar1 = *pbVar9;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_110320ab:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_110320b0;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_110320ab;
        pbVar9 = pbVar9 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_110320b0:
      if (iVar4 != 0) goto LAB_110320b8;
    }
    FUN_1102b240(0xc);
  }
  return;
}


