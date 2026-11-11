
/* ==== KERNEL32.DLL::FindResourceA @ 5f0049b4 ==== 
 * signature: HRSRC __stdcall FindResourceA(HMODULE hModule, LPCSTR lpName, LPCSTR lpType)
 * body: 5f0049b4-5f0049b9
 * thunk to: KERNEL32.DLL::FindResourceA
 */

HRSRC FindResourceA(HMODULE hModule,LPCSTR lpName,LPCSTR lpType)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceA(hModule,lpName,lpType);
  return pHVar1;
}


