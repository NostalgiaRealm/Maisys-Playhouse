
/* ==== USER32.DLL::GetClassInfoA @ 5f004a4a ==== 
 * signature: BOOL __stdcall GetClassInfoA(HINSTANCE hInstance, LPCSTR lpClassName, LPWNDCLASSA lpWndClass)
 * body: 5f004a4a-5f004a4f
 * thunk to: USER32.DLL::GetClassInfoA
 */

BOOL GetClassInfoA(HINSTANCE hInstance,LPCSTR lpClassName,LPWNDCLASSA lpWndClass)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClassInfoA(hInstance,lpClassName,lpWndClass);
  return BVar1;
}


