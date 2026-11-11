
/* ==== FUN_0045fa00 @ 0045fa00 ==== 
 * signature: undefined __cdecl FUN_0045fa00(short param_1, int param_2, void * param_3)
 * body: 0045fa00-0045fba8
 */

void __cdecl FUN_0045fa00(short param_1,int param_2,void *param_3)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  LOGPALETTE *pLVar4;
  PALETTEENTRY *pPVar5;
  undefined4 *puVar6;
  undefined4 local_ca8;
  undefined1 local_ca4 [1024];
  undefined4 local_8a4 [266];
  HPALETTE local_47c;
  HANDLE local_478;
  LOGPALETTE local_470;
  PALETTEENTRY local_468 [255];
  undefined1 local_6c [20];
  char *local_58;
  HPALETTE local_18;
  HDC local_14;
  int local_10;
  byte local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  HPALETTE local_8;
  
  FUN_0047a8c0(param_3,&local_14,local_8a4);
  if (local_14 != (HDC)0x0) {
    GetObjectA(local_478,0x54,local_6c);
    local_470.palVersion = 0x300;
    local_470.palNumEntries = 0x100;
    pPVar5 = local_470.palPalEntry;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      pPVar5->peRed = '\0';
      pPVar5->peGreen = '\0';
      pPVar5->peBlue = '\0';
      pPVar5->peFlags = '\0';
      pPVar5 = pPVar5 + 1;
    }
    FUN_0045fbb0(local_47c,local_470.palPalEntry);
    pLVar4 = &local_470;
    puVar6 = &local_ca8;
    for (iVar3 = 0x101; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *(undefined4 *)pLVar4;
      pLVar4 = (LOGPALETTE *)pLVar4->palPalEntry;
      puVar6 = puVar6 + 1;
    }
    local_8 = CreatePalette(&local_470);
    if (local_8 != (HPALETTE)0x0) {
      local_c = 0;
      local_b = 0;
      local_a = 0;
      local_9 = 0;
      FUN_004601b0(local_14,(int)local_8a4,local_58);
      local_18 = SelectPalette(DAT_004da398,local_8,0);
      SetSystemPaletteUse(DAT_004da398,2);
      RealizePalette(DAT_004da398);
      if (param_1 < 1) {
        param_1 = 1;
      }
      local_10 = (int)param_1;
      iVar3 = local_10;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        DVar1 = timeGetTime();
        FUN_00460110(iVar3,local_10,(int)local_470.palPalEntry,(int)local_ca4,&local_c);
        AnimatePalette(local_8,1,0xfe,local_468);
        GdiFlush();
        do {
          DVar2 = timeGetTime();
        } while (DVar2 < param_2 + DVar1);
      }
      FUN_0045fbf0(DAT_004da398,(int)local_8a4);
      SelectPalette(DAT_004da398,local_18,0);
      RealizePalette(DAT_004da398);
      DeleteObject(local_8);
    }
  }
  return;
}


