
/* ==== FUN_1100edb0 @ 1100edb0 ==== 
 * signature: undefined __cdecl FUN_1100edb0(undefined4 * param_1, int param_2, undefined4 * param_3, undefined4 param_4, undefined4 param_5)
 * body: 1100edb0-1100f1c2
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1100edb0(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  HPALETTE hPal;
  DWORD DVar1;
  HPALETTE hPal_00;
  int iVar2;
  uint uVar3;
  LOGPALETTE *pLVar4;
  PALETTEENTRY *pPVar5;
  tagPALETTEENTRY *ptVar6;
  int iVar7;
  byte local_824;
  undefined1 local_823;
  undefined1 local_822;
  undefined1 local_821;
  HDC local_820;
  HGDIOBJ local_81c;
  int local_818;
  HGDIOBJ local_814;
  HGDIOBJ local_810;
  HPALETTE local_80c;
  LOGPALETTE local_808;
  PALETTEENTRY local_800 [255];
  tagPALETTEENTRY local_404;
  undefined1 local_400 [1024];
  
  local_808.palVersion = 0x300;
  local_808.palNumEntries = 0x100;
  pPVar5 = local_808.palPalEntry;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    pPVar5->peRed = '\0';
    pPVar5->peGreen = '\0';
    pPVar5->peBlue = '\0';
    pPVar5->peFlags = '\0';
    pPVar5 = pPVar5 + 1;
  }
  if (*(short *)((int)param_3 + 0x3e) == 8) {
    FUN_1100f250((HDC)param_3[2],local_808.palPalEntry);
    pLVar4 = &local_808;
    ptVar6 = &local_404;
    for (iVar2 = 0x101; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ptVar6 = *(tagPALETTEENTRY *)pLVar4;
      pLVar4 = (LOGPALETTE *)pLVar4->palPalEntry;
      ptVar6 = ptVar6 + 1;
    }
    hPal = CreatePalette(&local_808);
    if (hPal != (HPALETTE)0x0) {
      iVar2 = 200;
      if (*(short *)(param_2 + 0x22) != 0) {
        iVar2 = (int)*(short *)(param_2 + 0x22);
      }
      local_81c = (HGDIOBJ)0x0;
      local_824 = 0;
      local_823 = 0;
      local_822 = 0;
      local_818 = *(int *)(param_2 + 0x24) / 6000;
      local_821 = 0;
      local_820 = (HDC)0x0;
      if (*(int *)(param_2 + 0x58) != 0) {
        local_81c = FUN_1100f650(param_1,param_2,param_3,param_4,param_5,(int)local_808.palPalEntry)
        ;
      }
      local_80c = SelectPalette((HDC)param_3[2],hPal,0);
      SetSystemPaletteUse((HDC)param_3[2],2);
      RealizePalette((HDC)param_3[2]);
      iVar7 = iVar2;
      if (iVar2 < 1) {
        iVar2 = 1;
        iVar7 = iVar2;
      }
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        DVar1 = timeGetTime();
        uVar3 = local_818 + DVar1;
        FUN_1100f290(iVar2,iVar7,&local_808.palPalEntry[0].peRed,local_400,&local_824);
        FUN_110115c0(param_1);
        AnimatePalette(hPal,1,0xfe,local_800);
        GdiFlush();
        do {
          DVar1 = timeGetTime();
        } while (DVar1 < uVar3);
      }
      FUN_1100f320((HDC)param_3[2],(short *)param_3[7]);
      if ((*(byte *)(param_3 + 8) & 2) != 0) {
        FUN_1100f1d0(*(HPALETTE *)((int)param_3 + 0x26),(LPPALETTEENTRY)local_400);
      }
      SelectPalette((HDC)param_3[2],*(HPALETTE *)((int)param_3 + 0x26),0);
      UnrealizeObject(*(HGDIOBJ *)((int)param_3 + 0x26));
      RealizePalette((HDC)param_3[2]);
      if (local_81c != (HANDLE)0x0) {
        FUN_1100f400(param_1,param_2,(int)param_3,local_81c,(int)local_400,&local_820,&local_810,
                     &local_814);
      }
      hPal_00 = (HPALETTE)FUN_1100f370();
      SelectPalette((HDC)param_3[2],hPal_00,0);
      RealizePalette((HDC)param_3[2]);
      GdiFlush();
      if (local_820 != (HDC)0x0) {
        uVar3 = (int)*(uint *)(param_2 + 0x38) >> 0x1f;
        _DAT_110360fc =
             BitBlt((HDC)param_3[2],0,0,*(int *)(param_2 + 0x34),
                    (*(uint *)(param_2 + 0x38) ^ uVar3) - uVar3,local_820,0,0,0xcc0020);
        FUN_1100f620(local_820,local_810,local_814);
      }
      SelectPalette((HDC)param_3[2],hPal,0);
      UnrealizeObject(hPal);
      RealizePalette((HDC)param_3[2]);
      AnimatePalette(hPal,1,0xfe,local_800);
      DeleteObject(hPal_00);
      iVar2 = 1;
      if (0 < iVar7) {
        do {
          DVar1 = timeGetTime();
          uVar3 = local_818 + DVar1;
          FUN_1100f290(iVar2,iVar7,&local_808.palPalEntry[0].peRed,local_400,&local_824);
          FUN_110115c0(param_1);
          AnimatePalette(hPal,1,0xfe,local_800);
          GdiFlush();
          if (iVar2 <= iVar7) {
            do {
              DVar1 = timeGetTime();
            } while (DVar1 < uVar3);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 <= iVar7);
      }
      SelectPalette((HDC)param_3[2],local_80c,0);
      DeleteObject(hPal);
    }
  }
  iVar2 = FUN_11006330(param_1,0);
  if (iVar2 != 0) {
    FUN_1101db80(param_1,iVar2,4,0,0,0x7fff,0x7fff);
  }
  return;
}


