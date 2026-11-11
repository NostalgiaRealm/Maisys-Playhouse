
/* ==== USER32.DLL::RegisterClassA @ 140183a0 ==== 
 * signature: ATOM __stdcall RegisterClassA(WNDCLASSA * lpWndClass)
 * body: 140183a0-140183a5
 * thunk to: USER32.DLL::RegisterClassA
 */

ATOM RegisterClassA(WNDCLASSA *lpWndClass)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140183a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = RegisterClassA(lpWndClass);
  return AVar1;
}


