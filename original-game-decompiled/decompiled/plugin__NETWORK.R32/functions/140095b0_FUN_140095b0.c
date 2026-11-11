
/* ==== FUN_140095b0 @ 140095b0 ==== 
 * signature: undefined4 __cdecl FUN_140095b0(undefined4 * param_1, WNDPROC param_2, LONG param_3, LPCSTR param_4, HINSTANCE param_5)
 * body: 140095b0-1400964f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_140095b0(undefined4 *param_1,WNDPROC param_2,LONG param_3,LPCSTR param_4,HINSTANCE param_5)

{
  HWND hWnd;
  WNDCLASSA local_28;
  
  local_28.lpfnWndProc = param_2;
  local_28.style = 0;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 0;
  local_28.hIcon = (HICON)0x0;
  local_28.hInstance = param_5;
  local_28.hCursor = (HCURSOR)0x0;
  local_28.hbrBackground = (HBRUSH)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.lpszClassName = param_4;
  RegisterClassA(&local_28);
  hWnd = CreateWindowExA(0,param_4,s_Windows_Sockets_Window_1402654c,0x80000000,0,0,10,10,(HWND)0x0,
                         (HMENU)0x0,param_5,(LPVOID)0x0);
  if (hWnd == (HWND)0x0) {
    return 0;
  }
  *param_1 = hWnd;
  _DAT_14028e4c = GetWindowLongA(hWnd,-0x15);
  SetWindowLongA(hWnd,-0x15,param_3);
  return 1;
}


