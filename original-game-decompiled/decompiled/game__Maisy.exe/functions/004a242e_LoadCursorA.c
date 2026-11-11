
/* ==== USER32.DLL::LoadCursorA @ 004a242e ==== 
 * signature: HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance, LPCSTR lpCursorName)
 * body: 004a242e-004a2433
 * thunk to: USER32.DLL::LoadCursorA
 */

HCURSOR LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a242e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadCursorA(hInstance,lpCursorName);
  return pHVar1;
}


