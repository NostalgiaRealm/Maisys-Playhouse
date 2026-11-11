
/* ==== GDI32.DLL::ArcTo @ 004a2920 ==== 
 * signature: BOOL __stdcall ArcTo(HDC hdc, int left, int top, int right, int bottom, int xr1, int yr1, int xr2, int yr2)
 * body: 004a2920-004a2925
 * thunk to: GDI32.DLL::ArcTo
 */

BOOL ArcTo(HDC hdc,int left,int top,int right,int bottom,int xr1,int yr1,int xr2,int yr2)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ArcTo(hdc,left,top,right,bottom,xr1,yr1,xr2,yr2);
  return BVar1;
}


