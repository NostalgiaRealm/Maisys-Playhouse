
/* ==== FUN_10011f09 @ 10011f09 ==== 
 * signature: undefined __cdecl FUN_10011f09(int param_1, HDC param_2, undefined4 * param_3)
 * body: 10011f09-10011fc7
 */

void __cdecl FUN_10011f09(int param_1,HDC param_2,undefined4 *param_3)

{
  HGDIOBJ ho;
  HGLOBAL hMem;
  LOGPALETTE *plpal;
  HPALETTE pHVar1;
  BYTE *pBVar2;
  BYTE *pBVar3;
  WORD WVar4;
  int iVar5;
  
  if (*(short *)(param_1 + 0xe) == 8) {
    if (*(int *)(param_1 + 0x20) == 0) {
      WVar4 = 0x100;
    }
    else {
      WVar4 = *(WORD *)(param_1 + 0x20);
    }
    if (WVar4 != 0) {
      iVar5 = (int)(short)WVar4;
      hMem = GlobalAlloc(0x42,iVar5 * 4 + 8);
      plpal = GlobalLock(hMem);
      plpal->palNumEntries = WVar4;
      plpal->palVersion = 0x300;
      if (0 < (short)WVar4) {
        pBVar2 = &plpal->palPalEntry[0].peGreen;
        pBVar3 = (BYTE *)(param_1 + 0x29);
        do {
          ((PALETTEENTRY *)(pBVar2 + -1))->peRed = pBVar3[1];
          *pBVar2 = *pBVar3;
          pBVar2[1] = pBVar3[-1];
          pBVar2[2] = '\0';
          pBVar3 = pBVar3 + 4;
          pBVar2 = pBVar2 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      ho = (HGDIOBJ)*param_3;
      pHVar1 = CreatePalette(plpal);
      *param_3 = pHVar1;
      FUN_10013e71(hMem);
      SelectPalette(param_2,(HPALETTE)*param_3,0);
      if (ho != (HGDIOBJ)0x0) {
        DeleteObject(ho);
      }
      RealizePalette(param_2);
    }
  }
  return;
}


