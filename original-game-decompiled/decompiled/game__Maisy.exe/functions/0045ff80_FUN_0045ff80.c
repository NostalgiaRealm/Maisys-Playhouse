
/* ==== FUN_0045ff80 @ 0045ff80 ==== 
 * signature: undefined __cdecl FUN_0045ff80(short param_1, int param_2, void * param_3)
 * body: 0045ff80-00460104
 */

void __cdecl FUN_0045ff80(short param_1,int param_2,void *param_3)

{
  BYTE *pBVar1;
  BYTE *pBVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  LOGPALETTE *pLVar6;
  PALETTEENTRY *pPVar7;
  undefined4 *puVar8;
  undefined4 local_c54;
  undefined1 local_c50 [1024];
  undefined4 local_850 [266];
  HPALETTE local_428;
  LOGPALETTE local_41c;
  PALETTEENTRY local_414 [254];
  undefined1 local_1a [2];
  int local_18;
  HPALETTE local_14;
  int local_10;
  byte local_c [4];
  HPALETTE local_8;
  
  FUN_0047a8c0(param_3,&local_18,local_850);
  if (local_18 != 0) {
    local_41c.palVersion = 0x300;
    local_41c.palNumEntries = 0x100;
    pPVar7 = local_41c.palPalEntry;
    for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
      pPVar7->peRed = '\0';
      pPVar7->peGreen = '\0';
      pPVar7->peBlue = '\0';
      pPVar7->peFlags = '\0';
      pPVar7 = pPVar7 + 1;
    }
    FUN_0045fbb0(local_428,local_41c.palPalEntry);
    pLVar6 = &local_41c;
    puVar8 = &local_c54;
    for (iVar5 = 0x101; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *(undefined4 *)pLVar6;
      pLVar6 = (LOGPALETTE *)pLVar6->palPalEntry;
      puVar8 = puVar8 + 1;
    }
    pBVar1 = &local_414[0].peBlue;
    do {
      *pBVar1 = '\0';
      pBVar2 = pBVar1 + 4;
      pBVar1[-1] = '\0';
      ((PALETTEENTRY *)(pBVar1 + -2))->peRed = '\0';
      pBVar1 = pBVar2;
    } while (pBVar2 < local_1a);
    local_8 = CreatePalette(&local_41c);
    if (local_8 != (HPALETTE)0x0) {
      local_c[0] = 0;
      local_c[1] = 0;
      local_c[2] = 0;
      local_c[3] = 0;
      local_14 = SelectPalette(DAT_004da398,local_8,0);
      SetSystemPaletteUse(DAT_004da398,2);
      RealizePalette(DAT_004da398);
      if (param_1 < 1) {
        param_1 = 1;
      }
      iVar5 = 1;
      if (1 < param_1) {
        local_10 = (int)param_1;
        do {
          DVar3 = timeGetTime();
          FUN_00460110(iVar5,local_10,(int)local_41c.palPalEntry,(int)local_c50,local_c);
          AnimatePalette(local_8,1,0xfe,local_414);
          GdiFlush();
          do {
            DVar4 = timeGetTime();
          } while (DVar4 < param_2 + DVar3);
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_10);
      }
      SelectPalette(DAT_004da398,local_14,0);
      RealizePalette(DAT_004da398);
      DeleteObject(local_8);
    }
  }
  return;
}


