
/* ==== GDI32.DLL::CreateCompatibleDC @ 004a2842 ==== 
 * signature: HDC __stdcall CreateCompatibleDC(HDC hdc)
 * body: 004a2842-004a2847
 * thunk to: GDI32.DLL::CreateCompatibleDC
 */

HDC CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}


