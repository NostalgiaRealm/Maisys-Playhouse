
/* ==== USER32.DLL::WindowFromPoint @ 004a34c4 ==== 
 * signature: HWND __stdcall WindowFromPoint(POINT Point)
 * body: 004a34c4-004a34c9
 * thunk to: USER32.DLL::WindowFromPoint
 */

HWND WindowFromPoint(POINT Point)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a34c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = WindowFromPoint(Point);
  return pHVar1;
}


