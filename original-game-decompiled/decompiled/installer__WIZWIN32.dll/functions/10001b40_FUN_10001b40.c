
/* ==== FUN_10001b40 @ 10001b40 ==== 
 * signature: undefined __stdcall FUN_10001b40(void)
 * body: 10001b40-10001ba8
 */

void FUN_10001b40(void)

{
  HWND hWnd;
  tagPOINT local_8;
  
  hWnd = GetDlgItem(DAT_100042c8,0x3ef);
  GetWindowRect(hWnd,(LPRECT)&DAT_10004420);
  local_8.x = DAT_10004420;
  local_8.y = DAT_10004424;
  ScreenToClient(DAT_100042c8,&local_8);
  DAT_10004424 = local_8.y;
  DAT_10004420 = local_8.x;
  DAT_10004428 = 0;
  DAT_1000442c = 0;
  return;
}


