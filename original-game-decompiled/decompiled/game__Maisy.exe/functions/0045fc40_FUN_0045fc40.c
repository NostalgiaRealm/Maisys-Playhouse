
/* ==== FUN_0045fc40 @ 0045fc40 ==== 
 * signature: undefined __cdecl FUN_0045fc40(void * param_1, int param_2)
 * body: 0045fc40-0045fe25
 */

void __cdecl FUN_0045fc40(void *param_1,int param_2)

{
  short sVar1;
  HGLOBAL hMem;
  int iVar2;
  HBITMAP h;
  HDC hdc;
  HPALETTE hPal;
  uint uVar3;
  SIZE_T dwBytes;
  BITMAPINFOHEADER local_498;
  undefined1 local_470 [1028];
  HANDLE local_6c;
  undefined1 local_64 [20];
  char *local_50;
  undefined4 local_10;
  HPALETTE local_c;
  void *local_8;
  
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    FUN_0047a8c0(param_1,&local_10,&local_498.biSize);
    GetObjectA(local_6c,0x54,local_64);
    sVar1 = FUN_0045fe30((int)local_470);
    dwBytes = (local_498.biWidth + 3U & 0xfffffffc) *
              ((local_498.biHeight ^ local_498.biHeight >> 0x1f) - (local_498.biHeight >> 0x1f));
    FUN_0045fec0(local_50,dwBytes,-1,(char)sVar1);
    FUN_0047ac70((int)param_1);
    if (local_498.biHeight < 0) {
      uVar3 = local_498.biWidth + 3U & 0xfffffffc;
      hMem = GlobalAlloc(2,dwBytes);
      local_8 = GlobalLock(hMem);
      iVar2 = (local_498.biHeight ^ local_498.biHeight >> 0x1f) - (local_498.biHeight >> 0x1f);
      FUN_00423940(0,(undefined4 *)((int)local_8 + (iVar2 + -1) * uVar3),0,(undefined4 *)local_50,
                   local_498.biWidth,iVar2,-uVar3,uVar3);
      local_498.biHeight =
           (local_498.biHeight ^ local_498.biHeight >> 0x1f) - (local_498.biHeight >> 0x1f);
      h = CreateDIBitmap(DAT_004da398,&local_498,4,local_8,(BITMAPINFO *)&local_498,0);
      GlobalUnlock(hMem);
      GlobalFree(hMem);
    }
    else {
      h = CreateDIBitmap(DAT_004da398,&local_498,4,local_50,(BITMAPINFO *)&local_498,0);
    }
    hdc = CreateCompatibleDC(DAT_004da398);
    local_8 = SelectObject(hdc,h);
    hPal = (HPALETTE)FUN_0045fef0();
    local_c = SelectPalette(DAT_004da398,hPal,0);
    RealizePalette(DAT_004da398);
    BitBlt(DAT_004da398,0,0,local_498.biWidth,
           (local_498.biHeight ^ local_498.biHeight >> 0x1f) - (local_498.biHeight >> 0x1f),hdc,0,0,
           0xcc0020);
    SelectPalette(DAT_004da398,local_c,0);
    DeleteObject(hPal);
    SelectObject(hdc,local_8);
    DeleteObject(h);
    DeleteDC(hdc);
  }
  return;
}


