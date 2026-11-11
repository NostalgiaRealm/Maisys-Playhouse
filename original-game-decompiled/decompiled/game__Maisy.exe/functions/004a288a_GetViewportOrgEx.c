
/* ==== GDI32.DLL::GetViewportOrgEx @ 004a288a ==== 
 * signature: BOOL __stdcall GetViewportOrgEx(HDC hdc, LPPOINT lppoint)
 * body: 004a288a-004a288f
 * thunk to: GDI32.DLL::GetViewportOrgEx
 */

BOOL GetViewportOrgEx(HDC hdc,LPPOINT lppoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a288a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetViewportOrgEx(hdc,lppoint);
  return BVar1;
}


