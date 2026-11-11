
/* ==== ___crtGetLocaleInfoA @ 12031980 ==== 
 * signature: int __cdecl ___crtGetLocaleInfoA(_locale_t _Plocinfo, LPCWSTR _LocaleName, LCTYPE _LCType, LPSTR _LpLCData, int _CchData)
 * body: 12031980-12031abe
 * note: Library Function - Single Match  ___crtGetLocaleInfoA  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtGetLocaleInfoA
   
   Library: Visual Studio 1998 Release */

int __cdecl
___crtGetLocaleInfoA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData)

{
  int iVar1;
  LPWSTR lpLCData;
  
  iVar1 = DAT_12039448;
  if (DAT_12039448 == 0) {
    iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = 1;
    }
    else {
      iVar1 = 2;
    }
  }
  DAT_12039448 = iVar1;
  if (iVar1 == 2) {
    iVar1 = GetLocaleInfoA((LCID)_Plocinfo,(LCTYPE)_LocaleName,(LPSTR)_LCType,(int)_LpLCData);
    return iVar1;
  }
  if (iVar1 == 1) {
    if (_CchData == 0) {
      _CchData = DAT_12038568;
    }
    iVar1 = GetLocaleInfoW((LCID)_Plocinfo,(LCTYPE)_LocaleName,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      return 0;
    }
    lpLCData = (LPWSTR)FUN_1202c7e0(iVar1 * 2);
    if (lpLCData == (LPWSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoW((LCID)_Plocinfo,(LCTYPE)_LocaleName,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (_LpLCData == (LPSTR)0x0) {
        iVar1 = WideCharToMultiByte(_CchData,0x220,lpLCData,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0)
        ;
      }
      else {
        iVar1 = WideCharToMultiByte(_CchData,0x220,lpLCData,-1,(LPSTR)_LCType,(int)_LpLCData,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
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


