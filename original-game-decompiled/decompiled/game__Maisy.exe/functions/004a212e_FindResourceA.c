
/* ==== KERNEL32.DLL::FindResourceA @ 004a212e ==== 
 * signature: HRSRC __stdcall FindResourceA(HMODULE hModule, LPCSTR lpName, LPCSTR lpType)
 * body: 004a212e-004a2133
 * thunk to: KERNEL32.DLL::FindResourceA
 */

HRSRC FindResourceA(HMODULE hModule,LPCSTR lpName,LPCSTR lpType)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a212e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceA(hModule,lpName,lpType);
  return pHVar1;
}


