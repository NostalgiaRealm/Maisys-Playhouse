
/* ==== KERNEL32.DLL::LocalSize @ 004a20b6 ==== 
 * signature: SIZE_T __stdcall LocalSize(HLOCAL hMem)
 * body: 004a20b6-004a20bb
 * thunk to: KERNEL32.DLL::LocalSize
 */

SIZE_T LocalSize(HLOCAL hMem)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = LocalSize(hMem);
  return SVar1;
}


