
/* ==== USER32.DLL::UnregisterClassA @ 004a34be ==== 
 * signature: BOOL __stdcall UnregisterClassA(LPCSTR lpClassName, HINSTANCE hInstance)
 * body: 004a34be-004a34c3
 * thunk to: USER32.DLL::UnregisterClassA
 */

BOOL UnregisterClassA(LPCSTR lpClassName,HINSTANCE hInstance)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a34be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnregisterClassA(lpClassName,hInstance);
  return BVar1;
}


