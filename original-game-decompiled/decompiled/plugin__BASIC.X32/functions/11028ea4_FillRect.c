
/* ==== USER32.DLL::FillRect @ 11028ea4 ==== 
 * signature: int __stdcall FillRect(HDC hDC, RECT * lprc, HBRUSH hbr)
 * body: 11028ea4-11028ea9
 * thunk to: USER32.DLL::FillRect
 */

int FillRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FillRect(hDC,lprc,hbr);
  return iVar1;
}


