
/* ==== GDI32.DLL::RectVisible @ 004a299e ==== 
 * signature: BOOL __stdcall RectVisible(HDC hdc, RECT * lprect)
 * body: 004a299e-004a29a3
 * thunk to: GDI32.DLL::RectVisible
 */

BOOL RectVisible(HDC hdc,RECT *lprect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a299e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RectVisible(hdc,lprect);
  return BVar1;
}


