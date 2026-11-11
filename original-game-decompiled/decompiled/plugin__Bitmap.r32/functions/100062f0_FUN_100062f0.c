
/* ==== FUN_100062f0 @ 100062f0 ==== 
 * signature: undefined __cdecl FUN_100062f0(int param_1)
 * body: 100062f0-10006313
 */

void __cdecl FUN_100062f0(int param_1)

{
  HDC hDC;
  
  hDC = GetDC((HWND)0x0);
  FUN_10006290(hDC,param_1);
  ReleaseDC((HWND)0x0,hDC);
  return;
}


