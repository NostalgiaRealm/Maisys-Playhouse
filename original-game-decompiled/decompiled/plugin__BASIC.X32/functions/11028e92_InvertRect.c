
/* ==== USER32.DLL::InvertRect @ 11028e92 ==== 
 * signature: BOOL __stdcall InvertRect(HDC hDC, RECT * lprc)
 * body: 11028e92-11028e97
 * thunk to: USER32.DLL::InvertRect
 */

BOOL InvertRect(HDC hDC,RECT *lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028e92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InvertRect(hDC,lprc);
  return BVar1;
}


