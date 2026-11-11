
/* ==== KERNEL32.DLL::DeleteFileA @ 004a2266 ==== 
 * signature: BOOL __stdcall DeleteFileA(LPCSTR lpFileName)
 * body: 004a2266-004a226b
 * thunk to: KERNEL32.DLL::DeleteFileA
 */

BOOL DeleteFileA(LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileA(lpFileName);
  return BVar1;
}


