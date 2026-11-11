
/* ==== GDI32.DLL::PolylineTo @ 004a2932 ==== 
 * signature: BOOL __stdcall PolylineTo(HDC hdc, POINT * apt, DWORD cpt)
 * body: 004a2932-004a2937
 * thunk to: GDI32.DLL::PolylineTo
 */

BOOL PolylineTo(HDC hdc,POINT *apt,DWORD cpt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PolylineTo(hdc,apt,cpt);
  return BVar1;
}


