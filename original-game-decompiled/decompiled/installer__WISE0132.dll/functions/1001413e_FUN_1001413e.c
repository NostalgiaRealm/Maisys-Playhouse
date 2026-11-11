
/* ==== FUN_1001413e @ 1001413e ==== 
 * signature: undefined __cdecl FUN_1001413e(int param_1, int param_2)
 * body: 1001413e-1001435c
 */

void __cdecl FUN_1001413e(int param_1,int param_2)

{
  CHAR CVar1;
  HANDLE hObject;
  DWORD DVar2;
  LPCSTR pCVar3;
  CHAR local_304 [512];
  byte local_104 [256];
  
  if ((DAT_10023f80 != (byte *)0x0) && (FUN_10009eff(local_104,DAT_10023f80), local_104[0] != 0)) {
    FUN_1001054d(&DAT_1001f3e8,local_304);
    CVar1 = FUN_10014819(local_304);
    if (CVar1 != '\\') {
      lstrcatA(local_304,&DAT_1001f314);
    }
    lstrcatA(local_304,(LPCSTR)local_104);
    hObject = (HANDLE)FUN_1001223a(local_304,1,1);
    if (-1 < (int)hObject) {
      FUN_10009eff(local_104,DAT_10023f88);
      FUN_100105d2(&DAT_1001f70c,(LPCSTR)local_104);
      FUN_10009eff(local_104,DAT_10023f8c);
      FUN_100105d2(&DAT_1001fe8c,(LPCSTR)local_104);
      FUN_10009eff(local_104,DAT_10023f90);
      FUN_100105d2(&DAT_1001fe88,(LPCSTR)local_104);
      FUN_10009eff(local_104,DAT_10023f94);
      FUN_100105d2(&DAT_1001fe84,(LPCSTR)local_104);
      FUN_10013fb4((LPSTR)local_104,1);
      FUN_100105d2(&DAT_1001fe80,(LPCSTR)local_104);
      if ((param_2 == -1) && (param_1 == 0)) {
        FUN_100105d2(&DAT_1001fe74,s_Success_1001fe78);
        pCVar3 = &DAT_10023314;
      }
      else {
        FUN_100105d2(&DAT_1001fe74,s_Failed_1001fe6c);
        pCVar3 = DAT_100238d4;
        if (*DAT_100238d4 == '\0') {
          if (*(char *)(DAT_1002392c + 0x20) == '\0') {
            pCVar3 = *(LPCSTR *)(DAT_100240b8 + 4);
          }
          else if (*(char *)(DAT_1002392c + 0x20) == '\x01') {
            pCVar3 = *(LPCSTR *)(DAT_100240b8 + 8);
          }
          else {
            pCVar3 = *(LPCSTR *)(DAT_100240b8 + 0x1c);
          }
        }
      }
      FUN_100105d2(&DAT_1001fe68,pCVar3);
      if (param_1 != 0) {
        FUN_100105d2(&DAT_1001fe68,s_Installation_terminated_abnormal_1001fe44);
      }
      FUN_10009f15(DAT_10024170,DAT_10023f84,0x7800);
      DVar2 = lstrlenA((LPCSTR)DAT_10024170);
      FileWrite(hObject,DAT_10024170,DVar2);
      CloseHandle(hObject);
    }
  }
  return;
}


