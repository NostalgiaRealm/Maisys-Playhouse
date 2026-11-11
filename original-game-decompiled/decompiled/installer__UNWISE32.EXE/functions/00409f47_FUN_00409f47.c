
/* ==== FUN_00409f47 @ 00409f47 ==== 
 * signature: undefined __stdcall FUN_00409f47(void)
 * body: 00409f47-00409fa3
 */

void FUN_00409f47(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while (DAT_0041381c != (HWND)0x0) {
    if (DAT_00413880 != 0) {
      DestroyWindow(DAT_0041381c);
    }
    while (BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1), BVar1 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
  }
  return;
}


