
/* ==== GDI32.DLL::CreateCompatibleDC @ 11028f04 ==== 
 * signature: HDC __stdcall CreateCompatibleDC(HDC hdc)
 * body: 11028f04-11028f09
 * thunk to: GDI32.DLL::CreateCompatibleDC
 */

HDC CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}


