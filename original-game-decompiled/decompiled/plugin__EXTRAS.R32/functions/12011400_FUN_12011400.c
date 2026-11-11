
/* ==== FUN_12011400 @ 12011400 ==== 
 * signature: undefined4 * __fastcall FUN_12011400(undefined4 * param_1)
 * body: 12011400-120114a0
 */

undefined4 * __fastcall FUN_12011400(undefined4 *param_1)

{
  ATOM AVar1;
  WNDCLASSA local_28;
  
  *param_1 = &PTR_FUN_120356b8;
  *(undefined1 *)(param_1 + 1) = 0;
  if (DAT_120376b0 == '\0') {
    local_28.cbClsExtra = 0;
    local_28.cbWndExtra = 0;
    local_28.hInstance = DAT_12039864;
    local_28.hIcon = (HICON)0x0;
    local_28.hCursor = (HCURSOR)0x0;
    local_28.hbrBackground = (HBRUSH)0x0;
    local_28.lpszMenuName = (LPCSTR)0x0;
    local_28.style = 0x4000;
    local_28.lpfnWndProc = FUN_12011380;
    local_28.lpszClassName = s_HSMsgClass_120376c4;
    AVar1 = RegisterClassA(&local_28);
    if (AVar1 != 0) {
      DAT_12039860 = CreateWindowExA(0,s_HSMsgClass_120376c4,s_HSMsgWindow_120376b8,0x8cf0000,0,0,0,
                                     0,(HWND)0x0,(HMENU)0x0,DAT_12039864,(LPVOID)0x0);
    }
    DAT_120376b0 = '\x01';
  }
  DAT_120376b4 = DAT_120376b4 + 1;
  return param_1;
}


