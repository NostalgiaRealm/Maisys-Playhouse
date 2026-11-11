
/* ==== KERNEL32.DLL::GlobalReAlloc @ 004a2086 ==== 
 * signature: HGLOBAL __stdcall GlobalReAlloc(HGLOBAL hMem, SIZE_T dwBytes, UINT uFlags)
 * body: 004a2086-004a208b
 * thunk to: KERNEL32.DLL::GlobalReAlloc
 */

HGLOBAL GlobalReAlloc(HGLOBAL hMem,SIZE_T dwBytes,UINT uFlags)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalReAlloc(hMem,dwBytes,uFlags);
  return pvVar1;
}


