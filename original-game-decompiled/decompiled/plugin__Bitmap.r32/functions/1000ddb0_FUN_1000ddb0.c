
/* ==== FUN_1000ddb0 @ 1000ddb0 ==== 
 * signature: BOOL __cdecl FUN_1000ddb0(DWORD param_1, LPCWSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6)
 * body: 1000ddb0-1000df33
 */

BOOL __cdecl
FUN_1000ddb0(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  BOOL BVar1;
  int cbMultiByte;
  int *lpMultiByteStr;
  int iVar2;
  LPWORD lpCharType;
  BOOL local_4;
  
  lpCharType = (LPWORD)0x0;
  if (DAT_100172c0 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,(LPWORD)&local_4);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_100172c0 = 2;
    }
    else {
      DAT_100172c0 = 1;
    }
  }
  if (DAT_100172c0 != 1) {
    local_4 = DAT_100172c0;
    if (DAT_100172c0 == 2) {
      local_4 = 0;
      if (param_5 == 0) {
        param_5 = DAT_10016fc0;
      }
      cbMultiByte = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
      if (cbMultiByte == 0) {
        return 0;
      }
      lpMultiByteStr = FUN_1000d550(1,cbMultiByte);
      if (lpMultiByteStr == (int *)0x0) {
        return 0;
      }
      iVar2 = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)lpMultiByteStr,cbMultiByte,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar2 != 0) &&
         (lpCharType = (LPWORD)FUN_1000c060(cbMultiByte * 2 + 2), lpCharType != (LPWORD)0x0)) {
        if (param_6 == 0) {
          param_6 = DAT_10016fb0;
        }
        lpCharType[param_3] = 0xffff;
        lpCharType[param_3 + -1] = 0xffff;
        local_4 = GetStringTypeA(param_6,param_1,(LPCSTR)lpMultiByteStr,cbMultiByte,lpCharType);
        if ((lpCharType[param_3 + -1] == 0xffff) || (lpCharType[param_3] != 0xffff)) {
          local_4 = 0;
        }
        else {
          FUN_100094f0((undefined4 *)param_4,(undefined4 *)lpCharType,param_3 * 2);
        }
      }
      FUN_1000bff0((undefined *)lpMultiByteStr);
      FUN_1000bff0((undefined *)lpCharType);
    }
    return local_4;
  }
  BVar1 = GetStringTypeW(param_1,param_2,param_3,param_4);
  return BVar1;
}


