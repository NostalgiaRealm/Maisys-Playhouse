
/* ==== FUN_5f001020 @ 5f001020 ==== 
 * signature: HANDLE __cdecl FUN_5f001020(HWND param_1, int param_2)
 * body: 5f001020-5f001065
 */

HANDLE __cdecl FUN_5f001020(HWND param_1,int param_2)

{
  HANDLE hData;
  
  hData = FUN_5f001000(param_1);
  if (hData == (HANDLE)0x0) {
    hData = DAT_5f00a220;
    if (param_2 != 6) {
      hData = (HANDLE)(&DAT_5f00a194)[param_2 * 6];
    }
    SetPropA(param_1,(LPCSTR)(uint)DAT_5f00513e,hData);
  }
  return hData;
}


