
/* ==== GDI32.DLL::PtInRegion @ 004a2830 ==== 
 * signature: BOOL __stdcall PtInRegion(HRGN hrgn, int x, int y)
 * body: 004a2830-004a2835
 * thunk to: GDI32.DLL::PtInRegion
 */

BOOL PtInRegion(HRGN hrgn,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PtInRegion(hrgn,x,y);
  return BVar1;
}


