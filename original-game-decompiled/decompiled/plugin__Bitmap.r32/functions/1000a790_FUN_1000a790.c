
/* ==== FUN_1000a790 @ 1000a790 ==== 
 * signature: undefined4 __stdcall FUN_1000a790(void)
 * body: 1000a790-1000a7eb
 */

undefined4 FUN_1000a790(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000a270();
  DAT_1001344c = TlsAlloc();
  if (DAT_1001344c != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000d550(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1001344c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000a820((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}


