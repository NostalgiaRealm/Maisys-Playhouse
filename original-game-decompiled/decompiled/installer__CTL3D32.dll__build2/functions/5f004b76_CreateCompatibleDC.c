
/* ==== GDI32.DLL::CreateCompatibleDC @ 5f004b76 ==== 
 * signature: HDC __stdcall CreateCompatibleDC(HDC hdc)
 * body: 5f004b76-5f004b7b
 * thunk to: GDI32.DLL::CreateCompatibleDC
 */

HDC CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}


