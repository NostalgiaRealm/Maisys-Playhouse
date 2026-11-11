
/* ==== KERNEL32.DLL::TlsFree @ 140238b6 ==== 
 * signature: BOOL __stdcall TlsFree(DWORD dwTlsIndex)
 * body: 140238b6-140238bb
 * thunk to: KERNEL32.DLL::TlsFree
 */

BOOL TlsFree(DWORD dwTlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsFree(dwTlsIndex);
  return BVar1;
}


