
/* ==== GDI32.DLL::PtVisible @ 004a2998 ==== 
 * signature: BOOL __stdcall PtVisible(HDC hdc, int x, int y)
 * body: 004a2998-004a299d
 * thunk to: GDI32.DLL::PtVisible
 */

BOOL PtVisible(HDC hdc,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PtVisible(hdc,x,y);
  return BVar1;
}


