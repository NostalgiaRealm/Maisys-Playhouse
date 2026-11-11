
/* ==== FUN_10017f80 @ 10017f80 ==== 
 * signature: undefined4 __stdcall FUN_10017f80(void)
 * body: 10017f80-10017fdb
 */

undefined4 FUN_10017f80(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10016d70();
  DAT_10022334 = TlsAlloc();
  if (DAT_10022334 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10019830(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10022334,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10018010((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}


