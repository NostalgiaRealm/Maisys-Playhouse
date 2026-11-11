
/* ==== USER32.DLL::FillRect @ 004a2434 ==== 
 * signature: int __stdcall FillRect(HDC hDC, RECT * lprc, HBRUSH hbr)
 * body: 004a2434-004a2439
 * thunk to: USER32.DLL::FillRect
 */

int FillRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FillRect(hDC,lprc,hbr);
  return iVar1;
}


