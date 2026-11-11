
/* ==== KERNEL32.DLL::TlsSetValue @ 1103387a ==== 
 * signature: BOOL __stdcall TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
 * body: 1103387a-1103387f
 * thunk to: KERNEL32.DLL::TlsSetValue
 */

BOOL TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1103387a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
  return BVar1;
}


