
/* ==== SHELL32.DLL::ExtractIconA @ 004a2a46 ==== 
 * signature: HICON __stdcall ExtractIconA(HINSTANCE hInst, LPCSTR lpszExeFileName, UINT nIconIndex)
 * body: 004a2a46-004a2a4b
 * thunk to: SHELL32.DLL::ExtractIconA
 */

HICON ExtractIconA(HINSTANCE hInst,LPCSTR lpszExeFileName,UINT nIconIndex)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ExtractIconA(hInst,lpszExeFileName,nIconIndex);
  return pHVar1;
}


