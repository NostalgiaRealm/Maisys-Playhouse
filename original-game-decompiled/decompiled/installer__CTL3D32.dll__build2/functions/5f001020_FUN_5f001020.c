
/* ==== FUN_5f001020 @ 5f001020 ==== 
 * signature: HANDLE __cdecl FUN_5f001020(HWND param_1, int param_2)
 * body: 5f001020-5f001065
 */

HANDLE __cdecl FUN_5f001020(HWND param_1,int param_2)

{
  HANDLE hData;
  
  hData = FUN_5f001000(param_1);
  if (hData == (HANDLE)0x0) {
    hData = DAT_5f00a390;
    if (param_2 != 6) {
      hData = (HANDLE)(&DAT_5f00a2a4)[param_2 * 10];
    }
    SetPropW(param_1,(LPCWSTR)(uint)DAT_5f00524e,hData);
  }
  return hData;
}


