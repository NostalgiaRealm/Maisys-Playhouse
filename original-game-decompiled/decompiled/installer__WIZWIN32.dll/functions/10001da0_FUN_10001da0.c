
/* ==== FUN_10001da0 @ 10001da0 ==== 
 * signature: undefined __cdecl FUN_10001da0(int param_1, HDC param_2, undefined4 * param_3)
 * body: 10001da0-10001e63
 */

void __cdecl FUN_10001da0(int param_1,HDC param_2,undefined4 *param_3)

{
  HGDIOBJ ho;
  HGLOBAL hMem;
  LOGPALETTE *plpal;
  HPALETTE pHVar1;
  BYTE *pBVar2;
  BYTE *pBVar3;
  int iVar4;
  WORD WVar5;
  
  if (*(short *)(param_1 + 0xe) == 8) {
    if (*(int *)(param_1 + 0x20) == 0) {
      WVar5 = 0x100;
    }
    else {
      WVar5 = *(WORD *)(param_1 + 0x20);
    }
    if (WVar5 != 0) {
      iVar4 = (int)(short)WVar5;
      hMem = GlobalAlloc(0x42,iVar4 * 4 + 8);
      plpal = GlobalLock(hMem);
      plpal->palNumEntries = WVar5;
      plpal->palVersion = 0x300;
      if (0 < (short)WVar5) {
        pBVar2 = &plpal->palPalEntry[0].peGreen;
        pBVar3 = (BYTE *)(param_1 + 0x29);
        do {
          ((PALETTEENTRY *)(pBVar2 + -1))->peRed = pBVar3[1];
          *pBVar2 = *pBVar3;
          pBVar2[1] = pBVar3[-1];
          pBVar2[2] = '\0';
          pBVar2 = pBVar2 + 4;
          iVar4 = iVar4 + -1;
          pBVar3 = pBVar3 + 4;
        } while (iVar4 != 0);
      }
      ho = (HGDIOBJ)*param_3;
      pHVar1 = CreatePalette(plpal);
      *param_3 = pHVar1;
      FUN_10001e70(hMem);
      SelectPalette(param_2,(HPALETTE)*param_3,0);
      if (ho != (HGDIOBJ)0x0) {
        DeleteObject(ho);
      }
      RealizePalette(param_2);
    }
  }
  return;
}


