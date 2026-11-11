
/* ==== KERNEL32.DLL::FreeLibrary @ 004a206e ==== 
 * signature: BOOL __stdcall FreeLibrary(HMODULE hLibModule)
 * body: 004a206e-004a2073
 * thunk to: KERNEL32.DLL::FreeLibrary
 */

BOOL FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a206e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


