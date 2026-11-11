
/* ==== USER32.DLL::RegisterClassA @ 12027be4 ==== 
 * signature: ATOM __stdcall RegisterClassA(WNDCLASSA * lpWndClass)
 * body: 12027be4-12027be9
 * thunk to: USER32.DLL::RegisterClassA
 */

ATOM RegisterClassA(WNDCLASSA *lpWndClass)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = RegisterClassA(lpWndClass);
  return AVar1;
}


