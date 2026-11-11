
/* ==== USER32.DLL::InflateRect @ 5f004a26 ==== 
 * signature: BOOL __stdcall InflateRect(LPRECT lprc, int dx, int dy)
 * body: 5f004a26-5f004a2b
 * thunk to: USER32.DLL::InflateRect
 */

BOOL InflateRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InflateRect(lprc,dx,dy);
  return BVar1;
}


