
/* ==== KERNEL32.DLL::LoadResource @ 004a2128 ==== 
 * signature: HGLOBAL __stdcall LoadResource(HMODULE hModule, HRSRC hResInfo)
 * body: 004a2128-004a212d
 * thunk to: KERNEL32.DLL::LoadResource
 */

HGLOBAL LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadResource(hModule,hResInfo);
  return pvVar1;
}


