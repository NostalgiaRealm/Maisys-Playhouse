
/* ==== GDI32.DLL::CreateCompatibleDC @ 5f004b1c ==== 
 * signature: HDC __stdcall CreateCompatibleDC(HDC hdc)
 * body: 5f004b1c-5f004b21
 * thunk to: GDI32.DLL::CreateCompatibleDC
 */

HDC CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}


