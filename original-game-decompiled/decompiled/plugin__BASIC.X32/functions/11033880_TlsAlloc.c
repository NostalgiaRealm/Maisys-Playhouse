
/* ==== KERNEL32.DLL::TlsAlloc @ 11033880 ==== 
 * signature: DWORD __stdcall TlsAlloc(void)
 * body: 11033880-11033885
 * thunk to: KERNEL32.DLL::TlsAlloc
 */

DWORD TlsAlloc(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = TlsAlloc();
  return DVar1;
}


