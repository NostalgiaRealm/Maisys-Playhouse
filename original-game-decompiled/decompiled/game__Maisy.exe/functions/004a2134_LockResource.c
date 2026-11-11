
/* ==== KERNEL32.DLL::LockResource @ 004a2134 ==== 
 * signature: LPVOID __stdcall LockResource(HGLOBAL hResData)
 * body: 004a2134-004a2139
 * thunk to: KERNEL32.DLL::LockResource
 */

LPVOID LockResource(HGLOBAL hResData)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LockResource(hResData);
  return pvVar1;
}


