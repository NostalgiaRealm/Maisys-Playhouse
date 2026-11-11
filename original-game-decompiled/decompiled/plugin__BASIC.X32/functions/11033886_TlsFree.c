
/* ==== KERNEL32.DLL::TlsFree @ 11033886 ==== 
 * signature: BOOL __stdcall TlsFree(DWORD dwTlsIndex)
 * body: 11033886-1103388b
 * thunk to: KERNEL32.DLL::TlsFree
 */

BOOL TlsFree(DWORD dwTlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsFree(dwTlsIndex);
  return BVar1;
}


