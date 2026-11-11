
/* ==== KERNEL32.DLL::TlsGetValue @ 11033892 ==== 
 * signature: LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)
 * body: 11033892-11033897
 * thunk to: KERNEL32.DLL::TlsGetValue
 */

LPVOID TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}


