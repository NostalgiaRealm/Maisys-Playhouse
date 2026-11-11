
/* ==== FUN_00407704 @ 00407704 ==== 
 * signature: undefined __stdcall FUN_00407704(void)
 * body: 00407704-004078d4
 */

void FUN_00407704(void)

{
  UINT UVar1;
  HSZ pHVar2;
  HDDEDATA hData;
  int iVar3;
  undefined4 *puVar4;
  char *_Str;
  CHAR local_10c [256];
  int local_c;
  HDDEDATA local_8;
  
  UVar1 = DdeInitializeA(&DAT_0041383c,FUN_004036bc,0x3f000,0);
  if (UVar1 == 0) {
    pHVar2 = DdeCreateStringHandleA(DAT_0041383c,s_PROGMAN_00410578,0x3ec);
    DAT_00413890 = DdeConnect(DAT_0041383c,pHVar2,pHVar2,(PCONVCONTEXT)0x0);
    if (DAT_00413890 != (HCONV)0x0) {
      pHVar2 = DdeCreateStringHandleA(DAT_0041383c,s_GROUPS_00410570,0x3ec);
      hData = DdeClientTransaction((LPBYTE)0x0,0,DAT_00413890,pHVar2,1,0x20b0,5000,(LPDWORD)0x0);
      if (hData != (HDDEDATA)0x0) {
        DdeGetData(hData,DAT_00413c50,0x4000,0);
        iVar3 = lstrlenA((LPCSTR)DAT_00413c50);
        DAT_00413850 = (char *)FUN_004098e3(iVar3 + 1);
        lstrcpyA(DAT_00413850,(LPCSTR)DAT_00413c50);
        DdeFreeDataHandle(hData);
        if (*DAT_00413850 != '\0') {
          local_c = 0;
          _Str = DAT_00413850;
          do {
            local_8 = (HDDEDATA)_strchr(_Str,0xd);
            if (local_8 == (HDDEDATA)0x0) {
              lstrcpyA(local_10c,_Str);
            }
            else {
              _strncpy(local_10c,_Str,(int)local_8 - (int)_Str);
              (local_10c + (int)local_8)[-(int)_Str] = '\0';
            }
            pHVar2 = DdeCreateStringHandleA(DAT_0041383c,local_10c,0x3ec);
            local_8 = DdeClientTransaction
                                ((LPBYTE)0x0,0,DAT_00413890,pHVar2,1,0x20b0,5000,(LPDWORD)0x0);
            if (local_8 != (HDDEDATA)0x0) {
              DdeGetData(local_8,DAT_00413c50,0x4000,0);
              iVar3 = lstrlenA((LPCSTR)DAT_00413c50);
              puVar4 = FUN_004098e3(iVar3 + 1);
              *(undefined4 **)(DAT_004138e4 + local_c) = puVar4;
              lstrcpyA(*(LPSTR *)(DAT_004138e4 + local_c),(LPCSTR)DAT_00413c50);
              local_c = local_c + 4;
              DdeFreeDataHandle(local_8);
            }
            for (; (*_Str != '\0' && (*_Str != '\r')); _Str = _Str + 1) {
            }
            for (; (*_Str == '\r' || (*_Str == '\n')); _Str = _Str + 1) {
            }
          } while (*_Str != '\0');
        }
      }
    }
  }
  return;
}


