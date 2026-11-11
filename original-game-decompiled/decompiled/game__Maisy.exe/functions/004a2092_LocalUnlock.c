
/* ==== KERNEL32.DLL::LocalUnlock @ 004a2092 ==== 
 * signature: BOOL __stdcall LocalUnlock(HLOCAL hMem)
 * body: 004a2092-004a2097
 * thunk to: KERNEL32.DLL::LocalUnlock
 */

BOOL LocalUnlock(HLOCAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LocalUnlock(hMem);
  return BVar1;
}


