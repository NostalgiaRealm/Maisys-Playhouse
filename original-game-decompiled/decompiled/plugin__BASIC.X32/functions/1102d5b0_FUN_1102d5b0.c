
/* ==== FUN_1102d5b0 @ 1102d5b0 ==== 
 * signature: int __cdecl FUN_1102d5b0(LCID param_1, uint param_2, char * param_3, int param_4, LPWSTR param_5, int param_6, UINT param_7)
 * body: 1102d5b0-1102d7da
 */

int __cdecl
FUN_1102d5b0(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7)

{
  int iVar1;
  LPCWSTR lpWideCharStr;
  int iVar2;
  LPCWSTR lpDestStr;
  
  if (DAT_110370b0 == 0) {
    iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_110370b0 = 1;
    }
    else {
      DAT_110370b0 = 2;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1102d7e0(param_3,param_4);
  }
  if (DAT_110370b0 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_110370b0 != 1) {
    return DAT_110370b0;
  }
  lpDestStr = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_11036c90;
  }
  iVar1 = MultiByteToWideChar(param_7,9,param_3,param_4,(LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_11029420(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((param_2 & 0x400) == 0) {
      lpDestStr = (LPCWSTR)FUN_11029420(iVar2 * 2);
      if ((lpDestStr == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,lpDestStr,iVar2), iVar1 == 0))
      goto LAB_1102d72b;
      if (param_6 == 0) {
        iVar2 = WideCharToMultiByte(param_7,0x220,lpDestStr,iVar2,(LPSTR)0x0,0,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        iVar1 = iVar2;
      }
      else {
        iVar2 = WideCharToMultiByte(param_7,0x220,lpDestStr,iVar2,(LPSTR)param_5,param_6,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
        iVar1 = iVar2;
      }
    }
    else {
      if (param_6 == 0) goto LAB_1102d7c2;
      if (param_6 < iVar2) goto LAB_1102d72b;
      iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
LAB_1102d7c2:
      FUN_11029180(lpWideCharStr);
      FUN_11029180(lpDestStr);
      return iVar2;
    }
  }
LAB_1102d72b:
  FUN_11029180(lpWideCharStr);
  FUN_11029180(lpDestStr);
  return 0;
}


