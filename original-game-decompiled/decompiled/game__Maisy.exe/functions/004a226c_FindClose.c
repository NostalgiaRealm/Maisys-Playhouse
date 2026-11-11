
/* ==== KERNEL32.DLL::FindClose @ 004a226c ==== 
 * signature: BOOL __stdcall FindClose(HANDLE hFindFile)
 * body: 004a226c-004a2271
 * thunk to: KERNEL32.DLL::FindClose
 */

BOOL FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a226c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}


