
/* ==== GDI32.DLL::ScaleViewportExtEx @ 004a28cc ==== 
 * signature: BOOL __stdcall ScaleViewportExtEx(HDC hdc, int xn, int dx, int yn, int yd, LPSIZE lpsz)
 * body: 004a28cc-004a28d1
 * thunk to: GDI32.DLL::ScaleViewportExtEx
 */

BOOL ScaleViewportExtEx(HDC hdc,int xn,int dx,int yn,int yd,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScaleViewportExtEx(hdc,xn,dx,yn,yd,lpsz);
  return BVar1;
}


