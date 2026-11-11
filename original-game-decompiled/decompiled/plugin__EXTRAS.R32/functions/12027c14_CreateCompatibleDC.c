
/* ==== GDI32.DLL::CreateCompatibleDC @ 12027c14 ==== 
 * signature: HDC __stdcall CreateCompatibleDC(HDC hdc)
 * body: 12027c14-12027c19
 * thunk to: GDI32.DLL::CreateCompatibleDC
 */

HDC CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}


