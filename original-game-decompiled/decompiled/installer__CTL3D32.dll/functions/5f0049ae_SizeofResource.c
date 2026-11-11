
/* ==== KERNEL32.DLL::SizeofResource @ 5f0049ae ==== 
 * signature: DWORD __stdcall SizeofResource(HMODULE hModule, HRSRC hResInfo)
 * body: 5f0049ae-5f0049b3
 * thunk to: KERNEL32.DLL::SizeofResource
 */

DWORD SizeofResource(HMODULE hModule,HRSRC hResInfo)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SizeofResource(hModule,hResInfo);
  return DVar1;
}


