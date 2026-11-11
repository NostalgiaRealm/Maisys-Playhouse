
/* ==== KERNEL32.DLL::FreeLibrary @ 120342d2 ==== 
 * signature: BOOL __stdcall FreeLibrary(HMODULE hLibModule)
 * body: 120342d2-120342d7
 * thunk to: KERNEL32.DLL::FreeLibrary
 */

BOOL FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x120342d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


