
/* ==== GDI32.DLL::GetTextMetricsA @ 004a2836 ==== 
 * signature: BOOL __stdcall GetTextMetricsA(HDC hdc, LPTEXTMETRICA lptm)
 * body: 004a2836-004a283b
 * thunk to: GDI32.DLL::GetTextMetricsA
 */

BOOL GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextMetricsA(hdc,lptm);
  return BVar1;
}


