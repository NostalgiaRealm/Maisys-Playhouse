
/* ==== FUN_5f001c10 @ 5f001c10 ==== 
 * signature: undefined4 __stdcall FUN_5f001c10(HWND param_1, ushort param_2)
 * body: 5f001c10-5f001c83
 */

undefined4 FUN_5f001c10(HWND param_1,ushort param_2)

{
  HWND hWnd;
  HWND hWnd_00;
  
  if (DAT_5f005130 != 0) {
    for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      FUN_5f001b60(hWnd,param_2,0);
      for (hWnd_00 = GetWindow(hWnd,5); hWnd_00 != (HWND)0x0; hWnd_00 = GetWindow(hWnd_00,2)) {
        FUN_5f001b60(hWnd_00,param_2,hWnd);
      }
    }
    return 1;
  }
  return 0;
}


