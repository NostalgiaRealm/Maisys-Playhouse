
/* ==== USER32.DLL::GetClassInfoW @ 5f004aa4 ==== 
 * signature: BOOL __stdcall GetClassInfoW(HINSTANCE hInstance, LPCWSTR lpClassName, LPWNDCLASSW lpWndClass)
 * body: 5f004aa4-5f004aa9
 * thunk to: USER32.DLL::GetClassInfoW
 */

BOOL GetClassInfoW(HINSTANCE hInstance,LPCWSTR lpClassName,LPWNDCLASSW lpWndClass)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClassInfoW(hInstance,lpClassName,lpWndClass);
  return BVar1;
}


