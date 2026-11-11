
/* ==== USER32.DLL::LoadIconA @ 004a26e6 ==== 
 * signature: HICON __stdcall LoadIconA(HINSTANCE hInstance, LPCSTR lpIconName)
 * body: 004a26e6-004a26eb
 * thunk to: USER32.DLL::LoadIconA
 */

HICON LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadIconA(hInstance,lpIconName);
  return pHVar1;
}


