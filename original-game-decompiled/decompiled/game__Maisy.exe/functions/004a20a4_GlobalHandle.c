
/* ==== KERNEL32.DLL::GlobalHandle @ 004a20a4 ==== 
 * signature: HGLOBAL __stdcall GlobalHandle(LPCVOID pMem)
 * body: 004a20a4-004a20a9
 * thunk to: KERNEL32.DLL::GlobalHandle
 */

HGLOBAL GlobalHandle(LPCVOID pMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalHandle(pMem);
  return pvVar1;
}


