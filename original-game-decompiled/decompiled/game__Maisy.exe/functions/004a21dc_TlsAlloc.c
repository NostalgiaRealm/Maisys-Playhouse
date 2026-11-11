
/* ==== KERNEL32.DLL::TlsAlloc @ 004a21dc ==== 
 * signature: DWORD __stdcall TlsAlloc(void)
 * body: 004a21dc-004a21e1
 * thunk to: KERNEL32.DLL::TlsAlloc
 */

DWORD TlsAlloc(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a21dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = TlsAlloc();
  return DVar1;
}


