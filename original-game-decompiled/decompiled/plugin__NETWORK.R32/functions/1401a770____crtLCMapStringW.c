
/* ==== ___crtLCMapStringW @ 1401a770 ==== 
 * signature: int __cdecl ___crtLCMapStringW(LPCWSTR _LocaleName, DWORD _DWMapFlag, LPCWSTR _LpSrcStr, int _CchSrc, LPWSTR _LpDestStr, int _CchDest)
 * body: 1401a770-1401a97b
 * note: Library Function - Single Match  ___crtLCMapStringW  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtLCMapStringW
   
   Library: Visual Studio 1998 Release */

int __cdecl
___crtLCMapStringW(LPCWSTR _LocaleName,DWORD _DWMapFlag,LPCWSTR _LpSrcStr,int _CchSrc,
                  LPWSTR _LpDestStr,int _CchDest)

{
  int iVar1;
  SIZE_T cbMultiByte;
  LPCSTR lpMultiByteStr;
  SIZE_T cchDest;
  char *lpDestStr;
  UINT in_stack_0000001c;
  
  if (DAT_140272d4 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_140272d4 = 2;
    }
    else {
      DAT_140272d4 = 1;
    }
  }
  iVar1 = DAT_140272d4;
  if (0 < _CchSrc) {
    _CchSrc = wcsncnt(_LpSrcStr,_CchSrc);
    iVar1 = DAT_140272d4;
  }
  DAT_140272d4 = iVar1;
  if (iVar1 == 1) {
    iVar1 = LCMapStringW((LCID)_LocaleName,_DWMapFlag,_LpSrcStr,_CchSrc,_LpDestStr,_CchDest);
    return iVar1;
  }
  if (iVar1 == 2) {
    lpDestStr = (char *)0x0;
    if (in_stack_0000001c == 0) {
      in_stack_0000001c = DAT_140272d0;
    }
    cbMultiByte = WideCharToMultiByte(in_stack_0000001c,0x220,_LpSrcStr,_CchSrc,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    if (cbMultiByte == 0) {
      return 0;
    }
    lpMultiByteStr = (LPCSTR)FUN_1401def0(cbMultiByte);
    if (lpMultiByteStr == (LPCSTR)0x0) {
      return 0;
    }
    iVar1 = WideCharToMultiByte(in_stack_0000001c,0x220,_LpSrcStr,_CchSrc,lpMultiByteStr,cbMultiByte
                                ,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((((iVar1 != 0) &&
         (cchDest = LCMapStringA((LCID)_LocaleName,_DWMapFlag,lpMultiByteStr,cbMultiByte,(LPSTR)0x0,
                                 0), cchDest != 0)) &&
        (lpDestStr = (char *)FUN_1401def0(cchDest), lpDestStr != (char *)0x0)) &&
       (iVar1 = LCMapStringA((LCID)_LocaleName,_DWMapFlag,lpMultiByteStr,cbMultiByte,lpDestStr,
                             cchDest), iVar1 != 0)) {
      if ((_DWMapFlag & 0x400) != 0) {
        if (_CchDest != 0) {
          if ((int)cchDest <= _CchDest) {
            _CchDest = cchDest;
          }
          _strncpy((char *)_LpDestStr,lpDestStr,_CchDest);
        }
LAB_1401a963:
        FUN_1401dd10(lpMultiByteStr);
        FUN_1401dd10(lpDestStr);
        return cchDest;
      }
      if (_CchDest == 0) {
        cchDest = MultiByteToWideChar(in_stack_0000001c,1,lpDestStr,cchDest,(LPWSTR)0x0,0);
      }
      else {
        cchDest = MultiByteToWideChar(in_stack_0000001c,1,lpDestStr,cchDest,_LpDestStr,_CchDest);
      }
      if (cchDest != 0) goto LAB_1401a963;
    }
    FUN_1401dd10(lpMultiByteStr);
    FUN_1401dd10(lpDestStr);
    iVar1 = 0;
  }
  return iVar1;
}


