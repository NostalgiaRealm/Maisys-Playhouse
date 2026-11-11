
/* ==== USER32.DLL::LoadMenuA @ 004a25f0 ==== 
 * signature: HMENU __stdcall LoadMenuA(HINSTANCE hInstance, LPCSTR lpMenuName)
 * body: 004a25f0-004a25f5
 * thunk to: USER32.DLL::LoadMenuA
 */

HMENU LoadMenuA(HINSTANCE hInstance,LPCSTR lpMenuName)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a25f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadMenuA(hInstance,lpMenuName);
  return pHVar1;
}


