
/* ==== GDI32.DLL::SelectClipPath @ 004a294a ==== 
 * signature: BOOL __stdcall SelectClipPath(HDC hdc, int mode)
 * body: 004a294a-004a294f
 * thunk to: GDI32.DLL::SelectClipPath
 */

BOOL SelectClipPath(HDC hdc,int mode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a294a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SelectClipPath(hdc,mode);
  return BVar1;
}


