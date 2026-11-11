
/* ==== GDI32.DLL::GetCurrentPositionEx @ 004a291a ==== 
 * signature: BOOL __stdcall GetCurrentPositionEx(HDC hdc, LPPOINT lppt)
 * body: 004a291a-004a291f
 * thunk to: GDI32.DLL::GetCurrentPositionEx
 */

BOOL GetCurrentPositionEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a291a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCurrentPositionEx(hdc,lppt);
  return BVar1;
}


