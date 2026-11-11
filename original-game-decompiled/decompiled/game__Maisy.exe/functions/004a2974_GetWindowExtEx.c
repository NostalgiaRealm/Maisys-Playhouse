
/* ==== GDI32.DLL::GetWindowExtEx @ 004a2974 ==== 
 * signature: BOOL __stdcall GetWindowExtEx(HDC hdc, LPSIZE lpsize)
 * body: 004a2974-004a2979
 * thunk to: GDI32.DLL::GetWindowExtEx
 */

BOOL GetWindowExtEx(HDC hdc,LPSIZE lpsize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowExtEx(hdc,lpsize);
  return BVar1;
}


