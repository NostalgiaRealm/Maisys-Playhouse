
/* ==== GDI32.DLL::PtInRegion @ 11028f46 ==== 
 * signature: BOOL __stdcall PtInRegion(HRGN hrgn, int x, int y)
 * body: 11028f46-11028f4b
 * thunk to: GDI32.DLL::PtInRegion
 */

BOOL PtInRegion(HRGN hrgn,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PtInRegion(hrgn,x,y);
  return BVar1;
}


