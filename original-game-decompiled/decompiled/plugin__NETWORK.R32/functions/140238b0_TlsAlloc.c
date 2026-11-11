
/* ==== KERNEL32.DLL::TlsAlloc @ 140238b0 ==== 
 * signature: DWORD __stdcall TlsAlloc(void)
 * body: 140238b0-140238b5
 * thunk to: KERNEL32.DLL::TlsAlloc
 */

DWORD TlsAlloc(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = TlsAlloc();
  return DVar1;
}


