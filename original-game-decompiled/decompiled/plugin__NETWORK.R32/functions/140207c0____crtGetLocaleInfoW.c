
/* ==== ___crtGetLocaleInfoW @ 140207c0 ==== 
 * signature: int __cdecl ___crtGetLocaleInfoW(LCID param_1, LCTYPE param_2, LPWSTR param_3, int param_4, UINT param_5)
 * body: 140207c0-140208ed
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
  
  iVar1 = DAT_140282a8;
  if (DAT_140282a8 == 0) {
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
  DAT_140282a8 = iVar1;
  if (iVar1 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (iVar1 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_140272d0;
    }
    cchData = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (cchData == 0) {
      return 0;
    }
    lpLCData = (LPSTR)FUN_1401def0(cchData);
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
        FUN_1401dd10(lpLCData);
        return iVar1;
      }
    }
    FUN_1401dd10(lpLCData);
    iVar1 = 0;
  }
  return iVar1;
}


