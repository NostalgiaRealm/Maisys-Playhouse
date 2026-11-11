
/* ==== KERNEL32.DLL::MoveFileA @ 004a2260 ==== 
 * signature: BOOL __stdcall MoveFileA(LPCSTR lpExistingFileName, LPCSTR lpNewFileName)
 * body: 004a2260-004a2265
 * thunk to: KERNEL32.DLL::MoveFileA
 */

BOOL MoveFileA(LPCSTR lpExistingFileName,LPCSTR lpNewFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveFileA(lpExistingFileName,lpNewFileName);
  return BVar1;
}


