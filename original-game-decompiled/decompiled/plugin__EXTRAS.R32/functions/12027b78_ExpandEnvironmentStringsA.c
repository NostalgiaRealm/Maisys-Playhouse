
/* ==== KERNEL32.DLL::ExpandEnvironmentStringsA @ 12027b78 ==== 
 * signature: DWORD __stdcall ExpandEnvironmentStringsA(LPCSTR lpSrc, LPSTR lpDst, DWORD nSize)
 * body: 12027b78-12027b7d
 * thunk to: KERNEL32.DLL::ExpandEnvironmentStringsA
 */

DWORD ExpandEnvironmentStringsA(LPCSTR lpSrc,LPSTR lpDst,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ExpandEnvironmentStringsA(lpSrc,lpDst,nSize);
  return DVar1;
}


