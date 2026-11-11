
/* ==== FUN_10001bb0 @ 10001bb0 ==== 
 * signature: undefined __cdecl FUN_10001bb0(HDC param_1)
 * body: 10001bb0-10001d9c
 */

void __cdecl FUN_10001bb0(HDC param_1)

{
  void *lpBits;
  uint uVar1;
  int iVar2;
  int iVar3;
  HBRUSH hbr;
  HPEN h;
  HPEN h_00;
  HGDIOBJ h_01;
  uint DestWidth;
  uint DestHeight;
  
  if (DAT_100040fc != (ushort *)0x0) {
    FUN_10001da0((int)(DAT_100040fc + 5),param_1,&DAT_100042c4);
    DestWidth = (uint)*DAT_100040fc;
    DestHeight = (uint)DAT_100040fc[1];
    if (DAT_1000442c == 0) {
      uVar1 = GetDialogBaseUnits();
      iVar2 = (uVar1 & 0xffff) * DestWidth;
      iVar3 = (uVar1 >> 0x10) * DestHeight;
      DAT_100040e0 = (int)(((int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4) - DestHeight) / 2;
      DAT_100040d4 = (int)(((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) - DestWidth) / 2;
      DAT_1000442c = DestHeight + DAT_100040e0 * 2 + DAT_10004424;
      DAT_10004428 = DestWidth + DAT_100040d4 * 2 + DAT_10004420;
    }
    lpBits = (void *)(*(int *)(DAT_100040fc + 2) + 10 + (int)DAT_100040fc);
    if (((DAT_100040d4 != 0) || (DAT_100040e0 != 0)) && (DAT_100041a0 != 0)) {
      hbr = CreateSolidBrush(DAT_100041a0);
      FillRect(param_1,(RECT *)&DAT_10004420,hbr);
      DeleteObject(hbr);
    }
    StretchDIBits(param_1,DAT_100040d4 + DAT_10004420,DAT_100040e0 + DAT_10004424,DestWidth,
                  DestHeight,0,0,(int)(short)*DAT_100040fc,(int)(short)DAT_100040fc[1],lpBits,
                  (BITMAPINFO *)(DAT_100040fc + 5),0,0xcc0020);
    h = CreatePen(0,1,0xffffff);
    h_00 = CreatePen(0,1,0x808080);
    h_01 = SelectObject(param_1,h);
    MoveToEx(param_1,DAT_10004428,DAT_10004424,(LPPOINT)0x0);
    LineTo(param_1,DAT_10004428,DAT_1000442c);
    LineTo(param_1,DAT_10004420,DAT_1000442c);
    SelectObject(param_1,h_00);
    LineTo(param_1,DAT_10004420,DAT_10004424);
    LineTo(param_1,DAT_10004428,DAT_10004424);
    SelectObject(param_1,h_01);
    DeleteObject(h);
    DeleteObject(h_00);
  }
  return;
}


