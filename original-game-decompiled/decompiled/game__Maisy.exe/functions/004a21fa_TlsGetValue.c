
/* ==== KERNEL32.DLL::TlsGetValue @ 004a21fa ==== 
 * signature: LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)
 * body: 004a21fa-004a21ff
 * thunk to: KERNEL32.DLL::TlsGetValue
 */

LPVOID TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a21fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}


