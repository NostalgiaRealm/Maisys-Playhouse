
/* ==== FUN_0047a680 @ 0047a680 ==== 
 * signature: int __stdcall FUN_0047a680(void)
 * body: 0047a680-0047a71f
 */

int FUN_0047a680(void)

{
  HDC hdc;
  uint uVar1;
  int iVar2;
  COLORREF color;
  COLORREF CVar3;
  int iVar4;
  
  iVar4 = 8;
  hdc = GetDC((HWND)0x0);
  uVar1 = GetDeviceCaps(hdc,0x26);
  if ((uVar1 & 0x100) == 0) {
    iVar2 = GetDeviceCaps(hdc,0x18);
    if (iVar2 == -1) {
      color = GetPixel(hdc,0,0);
      SetPixel(hdc,0,0,0x100);
      CVar3 = GetPixel(hdc,0,0);
      if ((char)(CVar3 >> 8) == '\0') {
        SetPixel(hdc,0,0,0x400);
        CVar3 = GetPixel(hdc,0,0);
        iVar4 = 0x10 - (uint)((char)(CVar3 >> 8) == '\0');
      }
      else {
        iVar4 = 0x20;
      }
      SetPixel(hdc,0,0,color);
    }
  }
  else {
    iVar4 = GetDeviceCaps(hdc,0xc);
  }
  ReleaseDC((HWND)0x0,hdc);
  return iVar4;
}


