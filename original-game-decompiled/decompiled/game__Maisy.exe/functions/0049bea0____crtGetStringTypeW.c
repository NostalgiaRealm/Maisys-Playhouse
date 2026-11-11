
/* ==== ___crtGetStringTypeW @ 0049bea0 ==== 
 * signature: BOOL __cdecl ___crtGetStringTypeW(DWORD param_1, LPCWSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6)
 * body: 0049bea0-0049c053
 * note: Library Function - Single Match  ___crtGetStringTypeW  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtGetStringTypeW
   
   Library: Visual Studio 1998 Release */

BOOL __cdecl
___crtGetStringTypeW
          (DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  LPWORD pWVar1;
  BOOL in_EAX;
  BOOL BVar2;
  int cbMultiByte;
  LPCSTR lpMultiByteStr;
  int iVar3;
  LPWORD lpCharType;
  BOOL local_4;
  
  local_4 = in_EAX;
  if (DAT_004df094 == 0) {
    local_4 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (local_4 == 0) {
      local_4 = GetStringTypeA(0,1,(LPCSTR)&DAT_004dac60,1,(LPWORD)&local_4);
      if (local_4 == 0) {
        return 0;
      }
      DAT_004df094 = 2;
    }
    else {
      DAT_004df094 = 1;
    }
  }
  if (DAT_004df094 != 1) {
    if (DAT_004df094 == 2) {
      lpCharType = (LPWORD)0x0;
      local_4 = 0;
      if (param_5 == 0) {
        param_5 = DAT_004de6b0;
      }
      cbMultiByte = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
      if (cbMultiByte == 0) {
        return 0;
      }
      lpMultiByteStr = FUN_0048ebf0(1,cbMultiByte);
      if (lpMultiByteStr == (LPCSTR)0x0) {
        return 0;
      }
      iVar3 = WideCharToMultiByte(param_5,0x220,param_2,param_3,lpMultiByteStr,cbMultiByte,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar3 != 0) &&
         (lpCharType = (LPWORD)FUN_00490210(cbMultiByte * 2 + 2), lpCharType != (LPWORD)0x0)) {
        if (param_6 == 0) {
          param_6 = DAT_004de6a0;
        }
        pWVar1 = lpCharType + param_3;
        *pWVar1 = 0xffff;
        pWVar1[-1] = 0xffff;
        local_4 = GetStringTypeA(param_6,param_1,lpMultiByteStr,cbMultiByte,lpCharType);
        if ((pWVar1[-1] == 0xffff) || (*pWVar1 != 0xffff)) {
          local_4 = 0;
        }
        else {
          FID_conflict__memcpy(param_4,lpCharType,param_3 * 2);
        }
      }
      FUN_0048e750(lpMultiByteStr);
      FUN_0048e750(lpCharType);
    }
    return local_4;
  }
  BVar2 = GetStringTypeW(param_1,param_2,param_3,param_4);
  return BVar2;
}


