
/* ==== KERNEL32.DLL::SizeofResource @ 004a2206 ==== 
 * signature: DWORD __stdcall SizeofResource(HMODULE hModule, HRSRC hResInfo)
 * body: 004a2206-004a220b
 * thunk to: KERNEL32.DLL::SizeofResource
 */

DWORD SizeofResource(HMODULE hModule,HRSRC hResInfo)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SizeofResource(hModule,hResInfo);
  return DVar1;
}


