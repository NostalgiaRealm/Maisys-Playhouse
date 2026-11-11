
/* ==== KERNEL32.DLL::GetVersionExA @ 004a20ce ==== 
 * signature: BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)
 * body: 004a20ce-004a20d3
 * thunk to: KERNEL32.DLL::GetVersionExA
 */

BOOL GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVersionExA(lpVersionInformation);
  return BVar1;
}


