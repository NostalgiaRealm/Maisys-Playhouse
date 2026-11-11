
/* ==== FUN_100021b0 @ 100021b0 ==== 
 * signature: undefined __cdecl FUN_100021b0(HWND param_1)
 * body: 100021b0-10002272
 */

void __cdecl FUN_100021b0(HWND param_1)

{
  HANDLE h;
  int iVar1;
  tagRECT local_4c;
  LOGFONTA local_3c;
  
  GetWindowRect(param_1,&local_4c);
  local_4c.left = local_4c.left + local_4c.left / 6;
  local_4c.right = local_4c.right + local_4c.right / 6;
  MoveWindow(param_1,local_4c.left,local_4c.top,local_4c.right - local_4c.left,
             local_4c.bottom - local_4c.top,0);
  if (DAT_10004438 == (HFONT)0x0) {
    h = (HANDLE)SendMessageA(param_1,0x31,0,0);
    if ((h != (HANDLE)0x0) && (iVar1 = GetObjectA(h,0x3c,&local_3c), iVar1 != 0)) {
      local_3c.lfWeight = 300;
      DAT_10004438 = CreateFontIndirectA(&local_3c);
    }
    if (DAT_10004438 == (HFONT)0x0) {
      return;
    }
  }
  EnumChildWindows(param_1,FUN_10002280,(LPARAM)DAT_10004438);
  return;
}


