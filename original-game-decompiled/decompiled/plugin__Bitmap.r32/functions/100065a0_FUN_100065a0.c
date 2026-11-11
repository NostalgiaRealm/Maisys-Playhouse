
/* ==== FUN_100065a0 @ 100065a0 ==== 
 * signature: HBITMAP __cdecl FUN_100065a0(HDC param_1, int param_2, int param_3, int param_4, undefined4 * param_5)
 * body: 100065a0-1000664e
 */

HBITMAP __cdecl FUN_100065a0(HDC param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  HGLOBAL pvVar1;
  BITMAPINFO *lpbmi;
  HBITMAP pHVar2;
  void *local_4;
  
  local_4 = (void *)0x0;
  pvVar1 = GlobalAlloc(0x42,((param_4 != 8) - 1 & 0x400) + 0x28);
  lpbmi = GlobalLock(pvVar1);
  FUN_10006340((undefined4 *)lpbmi,param_2,param_3,param_4);
  if (param_4 == 8) {
    if (param_5 == (undefined4 *)0x0) {
      FUN_10006290(param_1,(int)lpbmi->bmiColors);
    }
    else {
      FUN_100094f0(lpbmi->bmiColors,param_5,0x400);
    }
  }
  pHVar2 = CreateDIBSection(param_1,lpbmi,0,&local_4,(HANDLE)0x0,0);
  pvVar1 = GlobalHandle(lpbmi);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(lpbmi);
  GlobalFree(pvVar1);
  return pHVar2;
}


