
/* ==== KERNEL32.DLL::GetShortPathNameA @ 004a2284 ==== 
 * signature: DWORD __stdcall GetShortPathNameA(LPCSTR lpszLongPath, LPSTR lpszShortPath, DWORD cchBuffer)
 * body: 004a2284-004a2289
 * thunk to: KERNEL32.DLL::GetShortPathNameA
 */

DWORD GetShortPathNameA(LPCSTR lpszLongPath,LPSTR lpszShortPath,DWORD cchBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetShortPathNameA(lpszLongPath,lpszShortPath,cchBuffer);
  return DVar1;
}


