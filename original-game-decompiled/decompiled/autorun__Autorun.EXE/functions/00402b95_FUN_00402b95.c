
/* ==== FUN_00402b95 @ 00402b95 ==== 
 * signature: undefined __stdcall FUN_00402b95(void)
 * body: 00402b95-00402cdb
 */

void FUN_00402b95(void)

{
  HPALETTE ho;
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LOGPALETTE *plpal;
  BYTE *pBVar4;
  int *piVar5;
  int local_24;
  BYTE local_20;
  BYTE local_1c;
  int local_18;
  int local_14;
  int local_10;
  HDC local_c;
  short *local_8;
  
  if (((DAT_00404356 != 0) || (DAT_00404358 != 0)) || (DAT_0040435a != 0)) {
    local_c = GetDC(DAT_0040428c);
    iVar1 = GetDeviceCaps(local_c,0xc);
    iVar2 = GetDeviceCaps(local_c,0xe);
    if (7 < (short)((short)iVar1 * (short)iVar2)) {
      pvVar3 = GlobalAlloc(0x42,0x184);
      plpal = GlobalLock(pvVar3);
      local_10 = 0;
      plpal->palNumEntries = 0x60;
      plpal->palVersion = 0x300;
      pBVar4 = &plpal->palPalEntry[0].peGreen;
      local_18 = 0x60;
      do {
        piVar5 = &local_24;
        local_8 = &DAT_00404350;
        local_14 = 3;
        do {
          iVar1 = (local_8[3] * local_10) / 0x5f + (int)*local_8;
          *piVar5 = iVar1;
          if (iVar1 < 0) {
            *piVar5 = 0;
          }
          if (0xff < *piVar5) {
            *piVar5 = 0xff;
          }
          local_8 = local_8 + 1;
          piVar5 = piVar5 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        local_10 = local_10 + 1;
        ((PALETTEENTRY *)(pBVar4 + -1))->peRed = (BYTE)local_24;
        *pBVar4 = local_20;
        pBVar4[1] = local_1c;
        pBVar4[2] = '\0';
        ho = DAT_00404348;
        pBVar4 = pBVar4 + 4;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      DAT_00404348 = CreatePalette(plpal);
      pvVar3 = GlobalHandle(plpal);
      GlobalFree(pvVar3);
      SelectPalette(local_c,DAT_00404348,0);
      if (ho != (HPALETTE)0x0) {
        DeleteObject(ho);
      }
      RealizePalette(local_c);
    }
    ReleaseDC(DAT_0040428c,local_c);
  }
  return;
}


