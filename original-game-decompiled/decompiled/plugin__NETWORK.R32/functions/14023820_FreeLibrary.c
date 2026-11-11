
/* ==== KERNEL32.DLL::FreeLibrary @ 14023820 ==== 
 * signature: BOOL __stdcall FreeLibrary(HMODULE hLibModule)
 * body: 14023820-14023825
 * thunk to: KERNEL32.DLL::FreeLibrary
 */

BOOL FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


