
/* ==== FUN_10001e90 @ 10001e90 ==== 
 * signature: undefined __cdecl FUN_10001e90(HWND param_1, HWND param_2)
 * body: 10001e90-10001f7b
 */

void __cdecl FUN_10001e90(HWND param_1,HWND param_2)

{
  HDC hDC;
  int iVar1;
  int nHeight;
  int X;
  int nWidth;
  tagRECT local_10;
  
  GetWindowRect(param_1,&local_10);
  nWidth = local_10.right - local_10.left;
  nHeight = local_10.bottom - local_10.top;
  hDC = GetDC(param_2);
  GetClientRect(param_2,&local_10);
  iVar1 = ((DAT_10004434 & 0xf) % 3 + 1) * local_10.right;
  X = ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) - nWidth / 2;
  iVar1 = ((DAT_10004434 & 0xf) / 3 + 1) * local_10.bottom;
  iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) - nHeight / 2;
  if (local_10.right < X + nWidth) {
    X = local_10.right - nWidth;
  }
  if (local_10.bottom < iVar1 + nHeight) {
    iVar1 = local_10.bottom - nHeight;
  }
  if (X < 0) {
    X = 0;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  ReleaseDC((HWND)0x0,hDC);
  MoveWindow(param_1,X,iVar1,nWidth,nHeight,0);
  return;
}


