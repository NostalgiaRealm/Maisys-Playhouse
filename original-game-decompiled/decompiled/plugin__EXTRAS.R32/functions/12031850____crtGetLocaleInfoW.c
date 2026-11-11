
/* ==== ___crtGetLocaleInfoW @ 12031850 ==== 
 * signature: int __cdecl ___crtGetLocaleInfoW(LCID param_1, LCTYPE param_2, LPWSTR param_3, int param_4, UINT param_5)
 * body: 12031850-1203197d
 * note: Library Function - Single Match  ___crtGetLocaleInfoW  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtGetLocaleInfoW
   
   Library: Visual Studio 1998 Release */

int __cdecl
___crtGetLocaleInfoW(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  SIZE_T cchData;
  LPSTR lpLCData;
  
  iVar1 = DAT_12039444;
  if (DAT_12039444 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
  }
  DAT_12039444 = iVar1;
  if (iVar1 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (iVar1 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_12038568;
    }
    cchData = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (cchData == 0) {
      return 0;
    }
    lpLCData = (LPSTR)FUN_1202c7e0(cchData);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,cchData);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
      }
      else {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
      }
      if (iVar1 != 0) {
        FUN_1202c7c0(lpLCData);
        return iVar1;
      }
    }
    FUN_1202c7c0(lpLCData);
    iVar1 = 0;
  }
  return iVar1;
}


