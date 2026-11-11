
/* ==== USER32.DLL::DrawFocusRect @ 5f004a80 ==== 
 * signature: BOOL __stdcall DrawFocusRect(HDC hDC, RECT * lprc)
 * body: 5f004a80-5f004a85
 * thunk to: USER32.DLL::DrawFocusRect
 */

BOOL DrawFocusRect(HDC hDC,RECT *lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawFocusRect(hDC,lprc);
  return BVar1;
}


