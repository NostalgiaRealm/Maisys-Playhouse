
/* ==== FUN_00439810 @ 00439810 ==== 
 * signature: undefined __stdcall FUN_00439810(void)
 * body: 00439810-00439872
 */

void FUN_00439810(void)

{
  HDC hdc;
  DWORD DVar1;
  ushort uVar2;
  ushort uVar3;
  
  hdc = GetDC((HWND)0x0);
  SetSystemPaletteUse(hdc,2);
  GetSystemPaletteEntries(hdc,0,0x100,(LPPALETTEENTRY)&DAT_004db014);
  ReleaseDC((HWND)0x0,hdc);
  uVar2 = 0;
  do {
    uVar3 = uVar2 + 1;
    DVar1 = GetSysColor((&DAT_004db418)[(short)uVar2]);
    (&DAT_004db488)[(short)uVar2] = DVar1;
    uVar2 = uVar3;
  } while (uVar3 < 0x1c);
  return;
}


