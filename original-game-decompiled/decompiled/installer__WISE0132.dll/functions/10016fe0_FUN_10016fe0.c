
/* ==== FUN_10016fe0 @ 10016fe0 ==== 
 * signature: undefined4 __stdcall FUN_10016fe0(void)
 * body: 10016fe0-10017059
 */

undefined4 FUN_10016fe0(void)

{
  LPCWSTR lpWideCharStr;
  uint cbMultiByte;
  uint *lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_100233b8;
  piVar2 = DAT_100233b8;
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  while (((cbMultiByte = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                             (LPBOOL)0x0), cbMultiByte != 0 &&
          (lpMultiByteStr = (uint *)FUN_10015d50(cbMultiByte), lpMultiByteStr != (uint *)0x0)) &&
         (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)lpMultiByteStr,cbMultiByte,
                                      (LPCSTR)0x0,(LPBOOL)0x0), iVar1 != 0))) {
    FUN_10019530(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)piVar2[1];
    piVar2 = piVar2 + 1;
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
  }
  return 0xffffffff;
}


