
/* ==== KERNEL32.DLL::FindResourceW @ 5f004a08 ==== 
 * signature: HRSRC __stdcall FindResourceW(HMODULE hModule, LPCWSTR lpName, LPCWSTR lpType)
 * body: 5f004a08-5f004a0d
 * thunk to: KERNEL32.DLL::FindResourceW
 */

HRSRC FindResourceW(HMODULE hModule,LPCWSTR lpName,LPCWSTR lpType)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceW(hModule,lpName,lpType);
  return pHVar1;
}


