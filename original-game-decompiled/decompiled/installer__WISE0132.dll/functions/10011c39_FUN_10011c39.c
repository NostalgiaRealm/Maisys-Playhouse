
/* ==== FUN_10011c39 @ 10011c39 ==== 
 * signature: undefined __cdecl FUN_10011c39(uint param_1, int param_2)
 * body: 10011c39-10011d8d
 */

void __cdecl FUN_10011c39(uint param_1,int param_2)

{
  RECT *lprect;
  uint uVar1;
  DWORD DVar2;
  HANDLE h;
  UINT c;
  int iVar3;
  INT *lpDx;
  CHAR local_124 [256];
  undefined1 local_24 [4];
  int local_20;
  COLORREF local_c;
  COLORREF local_8;
  
  uVar1 = param_1;
  iVar3 = 0;
  if (-1 < (int)*(WPARAM *)(param_1 + 8)) {
    if (param_2 != 0) {
      param_1 = SendMessageA(*(HWND *)(param_1 + 0x14),0x150,*(WPARAM *)(param_1 + 8),0);
    }
    SendMessageA(*(HWND *)(uVar1 + 0x14),(-(uint)(param_2 != 0) & 0xffffffbf) + 0x189,
                 *(WPARAM *)(uVar1 + 8),(LPARAM)local_124);
    if ((*(byte *)(uVar1 + 0xc) & 3) != 0) {
      if ((*(byte *)(uVar1 + 0x10) & 1) != 0) {
        DVar2 = GetSysColor(0xe);
        local_c = SetTextColor(*(HDC *)(uVar1 + 0x18),DVar2);
        DVar2 = GetSysColor(0xd);
        local_8 = SetBkColor(*(HDC *)(uVar1 + 0x18),DVar2);
      }
      if (param_2 == 0) {
        iVar3 = (uint)*(ushort *)(uVar1 + 0x2c) * 4 + 4;
        h = (HANDLE)(&DAT_10023f98)[*(uint *)(uVar1 + 0x2c) >> 0x10];
      }
      else {
        h = (HANDLE)(&DAT_100238d8)[param_1 >> 0x10];
      }
      GetObjectA(h,0x18,local_24);
      lpDx = (INT *)0x0;
      lprect = (RECT *)(uVar1 + 0x1c);
      c = lstrlenA(local_124);
      ExtTextOutA(*(HDC *)(uVar1 + 0x18),local_20 + iVar3 + 4 + lprect->left,*(int *)(uVar1 + 0x20),
                  6,lprect,local_124,c,lpDx);
      FUN_10011d8e(*(HDC *)(uVar1 + 0x18),iVar3 + lprect->left,*(int *)(uVar1 + 0x20),h,0xff0000);
      if ((*(byte *)(uVar1 + 0x10) & 1) != 0) {
        SetTextColor(*(HDC *)(uVar1 + 0x18),local_c);
        SetBkColor(*(HDC *)(uVar1 + 0x18),local_8);
      }
    }
    if (((*(byte *)(uVar1 + 0xc) & 4) != 0) || ((*(byte *)(uVar1 + 0x10) & 0x10) != 0)) {
      DrawFocusRect(*(HDC *)(uVar1 + 0x18),(RECT *)(uVar1 + 0x1c));
    }
  }
  return;
}


