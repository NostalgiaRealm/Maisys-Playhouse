
/* ==== ___crtCompareStringW @ 120336d0 ==== 
 * signature: int __cdecl ___crtCompareStringW(LPCWSTR _LocaleName, DWORD _DwCmpFlags, LPCWSTR _LpString1, int _CchCount1, LPCWSTR _LpString2, int _CchCount2)
 * body: 120336d0-1203390a
 * note: Library Function - Single Match  ___crtCompareStringW  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtCompareStringW
   
   Library: Visual Studio 1998 Release */

int __cdecl
___crtCompareStringW
          (LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCWSTR _LpString1,int _CchCount1,
          LPCWSTR _LpString2,int _CchCount2)

{
  int in_EAX;
  int iVar1;
  SIZE_T cbMultiByte;
  PCNZCH lpMultiByteStr;
  SIZE_T cbMultiByte_00;
  LPSTR lpMultiByteStr_00;
  UINT in_stack_0000001c;
  
  if (DAT_1203983c == 0) {
    in_EAX = CompareStringW(0,0,L"",1,L"",1);
    if (in_EAX == 0) {
      in_EAX = CompareStringA(0,0,(PCNZCH)&DAT_1203765c,1,(PCNZCH)&DAT_1203765c,1);
      if (in_EAX == 0) {
        return 0;
      }
      DAT_1203983c = 2;
    }
    else {
      DAT_1203983c = 1;
    }
  }
  if (0 < _CchCount1) {
    in_EAX = wcsncnt(_LpString1,_CchCount1);
    _CchCount1 = in_EAX;
  }
  if (0 < _CchCount2) {
    in_EAX = wcsncnt(_LpString2,_CchCount2);
    _CchCount2 = in_EAX;
  }
  if ((_CchCount1 == 0) || (_CchCount2 == 0)) {
    if (_CchCount2 == _CchCount1) {
      return 2;
    }
    in_EAX = 3;
    if (_CchCount1 - _CchCount2 < 0) {
      in_EAX = 1;
    }
  }
  else {
    if (DAT_1203983c == 1) {
      iVar1 = CompareStringW((LCID)_LocaleName,_DwCmpFlags,_LpString1,_CchCount1,_LpString2,
                             _CchCount2);
      return iVar1;
    }
    if (DAT_1203983c == 2) {
      lpMultiByteStr_00 = (LPSTR)0x0;
      if (in_stack_0000001c == 0) {
        in_stack_0000001c = DAT_12038568;
      }
      cbMultiByte = WideCharToMultiByte(in_stack_0000001c,0x220,_LpString1,_CchCount1,(LPSTR)0x0,0,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
      if (cbMultiByte == 0) {
        return 0;
      }
      lpMultiByteStr = (PCNZCH)FUN_1202c7e0(cbMultiByte);
      if (lpMultiByteStr == (PCNZCH)0x0) {
        return 0;
      }
      iVar1 = WideCharToMultiByte(in_stack_0000001c,0x220,_LpString1,_CchCount1,lpMultiByteStr,
                                  cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((((iVar1 != 0) &&
           (cbMultiByte_00 =
                 WideCharToMultiByte(in_stack_0000001c,0x220,_LpString2,_CchCount2,(LPSTR)0x0,0,
                                     (LPCSTR)0x0,(LPBOOL)0x0), cbMultiByte_00 != 0)) &&
          (lpMultiByteStr_00 = (LPSTR)FUN_1202c7e0(cbMultiByte_00), lpMultiByteStr_00 != (LPSTR)0x0)
          ) && (iVar1 = WideCharToMultiByte(in_stack_0000001c,0x220,_LpString2,_CchCount2,
                                            lpMultiByteStr_00,cbMultiByte_00,(LPCSTR)0x0,(LPBOOL)0x0
                                           ), iVar1 != 0)) {
        iVar1 = CompareStringA((LCID)_LocaleName,_DwCmpFlags,lpMultiByteStr,cbMultiByte,
                               lpMultiByteStr_00,cbMultiByte_00);
        FUN_1202c7c0(lpMultiByteStr);
        FUN_1202c7c0(lpMultiByteStr_00);
        return iVar1;
      }
      FUN_1202c7c0(lpMultiByteStr);
      FUN_1202c7c0(lpMultiByteStr_00);
      return 0;
    }
  }
  return in_EAX;
}


