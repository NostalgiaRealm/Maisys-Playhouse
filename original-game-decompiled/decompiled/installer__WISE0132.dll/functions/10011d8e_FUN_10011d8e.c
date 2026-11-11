
/* ==== FUN_10011d8e @ 10011d8e ==== 
 * signature: undefined __cdecl FUN_10011d8e(HDC param_1, int param_2, int param_3, HANDLE param_4, COLORREF param_5)
 * body: 10011d8e-10011f08
 */

void __cdecl FUN_10011d8e(HDC param_1,int param_2,int param_3,HANDLE param_4,COLORREF param_5)

{
  HDC hdc;
  COLORREF CVar1;
  COLORREF color;
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  HBITMAP local_20;
  HBITMAP local_1c;
  HBRUSH local_18;
  HGDIOBJ local_14;
  HDC local_10;
  HDC local_c;
  HDC local_8;
  
  if (param_4 != (HANDLE)0x0) {
    GetObjectA(param_4,0x18,local_38);
    local_c = CreateCompatibleDC(param_1);
    local_10 = CreateCompatibleDC(param_1);
    local_8 = CreateCompatibleDC(param_1);
    SelectObject(local_c,param_4);
    local_20 = CreateCompatibleBitmap(local_10,local_34,local_30);
    SelectObject(local_10,local_20);
    local_1c = CreateCompatibleBitmap(param_1,local_34,local_30);
    SelectObject(local_8,local_1c);
    CVar1 = SetBkColor(local_c,param_5);
    BitBlt(local_10,0,0,local_34,local_30,local_c,0,0,0xcc0020);
    SetBkColor(local_c,CVar1);
    BitBlt(local_8,0,0,local_34,local_30,local_c,0,0,0xcc0020);
    CVar1 = GetBkColor(param_1);
    local_18 = CreateSolidBrush(CVar1);
    local_14 = SelectObject(local_8,local_18);
    CVar1 = SetTextColor(local_8,0);
    color = SetBkColor(local_8,0xffffff);
    BitBlt(local_8,0,0,local_34,local_30,local_10,0,0,0xe20746);
    BitBlt(param_1,param_2,param_3,local_34,local_30,local_8,0,0,0xcc0020);
    hdc = local_8;
    SetTextColor(local_8,CVar1);
    SetBkColor(hdc,color);
    SelectObject(hdc,local_14);
    DeleteObject(local_18);
    DeleteDC(hdc);
    DeleteDC(local_c);
    DeleteDC(local_10);
    DeleteObject(local_1c);
    DeleteObject(local_20);
  }
  return;
}


