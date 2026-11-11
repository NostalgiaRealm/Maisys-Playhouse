
/* ==== USER32.DLL::GetClassInfoA @ 004a2662 ==== 
 * signature: BOOL __stdcall GetClassInfoA(HINSTANCE hInstance, LPCSTR lpClassName, LPWNDCLASSA lpWndClass)
 * body: 004a2662-004a2667
 * thunk to: USER32.DLL::GetClassInfoA
 */

BOOL GetClassInfoA(HINSTANCE hInstance,LPCSTR lpClassName,LPWNDCLASSA lpWndClass)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClassInfoA(hInstance,lpClassName,lpWndClass);
  return BVar1;
}


