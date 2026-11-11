
/* ==== USER32.DLL::AdjustWindowRectEx @ 004a26d4 ==== 
 * signature: BOOL __stdcall AdjustWindowRectEx(LPRECT lpRect, DWORD dwStyle, BOOL bMenu, DWORD dwExStyle)
 * body: 004a26d4-004a26d9
 * thunk to: USER32.DLL::AdjustWindowRectEx
 */

BOOL AdjustWindowRectEx(LPRECT lpRect,DWORD dwStyle,BOOL bMenu,DWORD dwExStyle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AdjustWindowRectEx(lpRect,dwStyle,bMenu,dwExStyle);
  return BVar1;
}


