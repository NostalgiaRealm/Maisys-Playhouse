
/* ==== GDI32.DLL::GetViewportExtEx @ 004a296e ==== 
 * signature: BOOL __stdcall GetViewportExtEx(HDC hdc, LPSIZE lpsize)
 * body: 004a296e-004a2973
 * thunk to: GDI32.DLL::GetViewportExtEx
 */

BOOL GetViewportExtEx(HDC hdc,LPSIZE lpsize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a296e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetViewportExtEx(hdc,lpsize);
  return BVar1;
}


