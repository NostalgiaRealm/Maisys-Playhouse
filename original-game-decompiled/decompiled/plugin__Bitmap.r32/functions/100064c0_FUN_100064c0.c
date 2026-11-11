
/* ==== FUN_100064c0 @ 100064c0 ==== 
 * signature: undefined4 * __cdecl FUN_100064c0(HDC param_1, int param_2, int param_3, int param_4)
 * body: 100064c0-10006563
 */

undefined4 * __cdecl FUN_100064c0(HDC param_1,int param_2,int param_3,int param_4)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  HDC hdc;
  int iVar2;
  
  hMem = GlobalAlloc(0x42,((param_4 >> 3) * param_2 + 3U & 0xfffffffc) * param_3 + 0x28 +
                          ((param_4 != 8) - 1 & 0x400));
  puVar1 = GlobalLock(hMem);
  FUN_10006340(puVar1,param_2,param_3,param_4);
  if (param_4 == 8) {
    hdc = GetDC((HWND)0x0);
    iVar2 = GetDeviceCaps(hdc,0xc);
    ReleaseDC((HWND)0x0,hdc);
    if (iVar2 == 8) {
      FUN_100062f0((int)(puVar1 + 10));
      return puVar1;
    }
    FUN_10006320(param_1,(RGBQUAD *)(puVar1 + 10));
  }
  return puVar1;
}


