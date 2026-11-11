
/* ==== GDI32.DLL::PolyDraw @ 004a292c ==== 
 * signature: BOOL __stdcall PolyDraw(HDC hdc, POINT * apt, BYTE * aj, int cpt)
 * body: 004a292c-004a2931
 * thunk to: GDI32.DLL::PolyDraw
 */

BOOL PolyDraw(HDC hdc,POINT *apt,BYTE *aj,int cpt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a292c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PolyDraw(hdc,apt,aj,cpt);
  return BVar1;
}


