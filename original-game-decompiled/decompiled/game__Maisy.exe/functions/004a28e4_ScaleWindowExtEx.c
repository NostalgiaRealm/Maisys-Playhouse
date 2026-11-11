
/* ==== GDI32.DLL::ScaleWindowExtEx @ 004a28e4 ==== 
 * signature: BOOL __stdcall ScaleWindowExtEx(HDC hdc, int xn, int xd, int yn, int yd, LPSIZE lpsz)
 * body: 004a28e4-004a28e9
 * thunk to: GDI32.DLL::ScaleWindowExtEx
 */

BOOL ScaleWindowExtEx(HDC hdc,int xn,int xd,int yn,int yd,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScaleWindowExtEx(hdc,xn,xd,yn,yd,lpsz);
  return BVar1;
}


