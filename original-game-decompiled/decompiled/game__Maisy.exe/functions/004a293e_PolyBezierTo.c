
/* ==== GDI32.DLL::PolyBezierTo @ 004a293e ==== 
 * signature: BOOL __stdcall PolyBezierTo(HDC hdc, POINT * apt, DWORD cpt)
 * body: 004a293e-004a2943
 * thunk to: GDI32.DLL::PolyBezierTo
 */

BOOL PolyBezierTo(HDC hdc,POINT *apt,DWORD cpt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a293e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PolyBezierTo(hdc,apt,cpt);
  return BVar1;
}


