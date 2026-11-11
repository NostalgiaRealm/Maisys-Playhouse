
/* ==== USER32.DLL::UnregisterClassA @ 12027bea ==== 
 * signature: BOOL __stdcall UnregisterClassA(LPCSTR lpClassName, HINSTANCE hInstance)
 * body: 12027bea-12027bef
 * thunk to: USER32.DLL::UnregisterClassA
 */

BOOL UnregisterClassA(LPCSTR lpClassName,HINSTANCE hInstance)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027bea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnregisterClassA(lpClassName,hInstance);
  return BVar1;
}


