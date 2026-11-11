
/* ==== FUN_10002560 @ 10002560 ==== 
 * signature: undefined __cdecl FUN_10002560(HDC param_1)
 * body: 10002560-1000272a
 */

void __cdecl FUN_10002560(HDC param_1)

{
  DWORD color;
  HBRUSH hbr;
  uint uVar1;
  HBITMAP h;
  HDC hdc;
  HGDIOBJ h_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  HICON hIcon;
  RECT local_10;
  
  color = GetSysColor(0xf);
  hbr = CreateSolidBrush(color);
  uVar1 = GetDialogBaseUnits();
  h = CreateCompatibleBitmap
                (param_1,(DAT_100043e8 - DAT_100043e0) + 1,(DAT_100043ec - DAT_100043e4) + 1);
  if (h != (HBITMAP)0x0) {
    hdc = CreateCompatibleDC(param_1);
    if (hdc != (HDC)0x0) {
      h_00 = SelectObject(hdc,h);
      local_10.left = 0;
      local_10.top = 0;
      local_10.right = DAT_100043e8 - DAT_100043e0;
      local_10.bottom = DAT_100043ec - DAT_100043e4;
      FillRect(hdc,&local_10,hbr);
      uVar3 = uVar1 >> 0x10;
      iVar4 = (int)(uVar3 * 8) >> 3;
      DrawIcon(hdc,0,iVar4,DAT_10004440);
      DrawIcon(hdc,(int)((uVar1 & 0xffff) * 0x71) >> 2,iVar4,DAT_10004444);
      if (DAT_10004000 == 0) {
        iVar2 = DAT_1000400c * uVar3 + ((int)(DAT_1000400c * uVar3) >> 0x1f & 7U);
        iVar4 = DAT_10004008;
        hIcon = DAT_10004494;
      }
      else {
        hIcon = (&DAT_10004444)[DAT_10004000];
        iVar2 = (&DAT_1000400c)[DAT_10004000 * 2] * uVar3 +
                ((int)((&DAT_1000400c)[DAT_10004000 * 2] * uVar3) >> 0x1f & 7U);
        iVar4 = (&DAT_10004008)[DAT_10004000 * 2];
      }
      iVar4 = iVar4 * (uVar1 & 0xffff);
      DrawIcon(hdc,(int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2,iVar2 >> 3,hIcon);
      StretchBlt(param_1,DAT_100043e0,DAT_100043e4,DAT_100043e8 - DAT_100043e0,
                 DAT_100043ec - DAT_100043e4,hdc,0,0,DAT_100043e8 - DAT_100043e0,
                 DAT_100043ec - DAT_100043e4,0xcc0020);
      SelectObject(hdc,h_00);
      DeleteObject(h);
      DeleteObject(hbr);
      DeleteDC(hdc);
    }
  }
  return;
}


