
/* ==== GDI32.DLL::RestoreDC @ 004a28a2 ==== 
 * signature: BOOL __stdcall RestoreDC(HDC hdc, int nSavedDC)
 * body: 004a28a2-004a28a7
 * thunk to: GDI32.DLL::RestoreDC
 */

BOOL RestoreDC(HDC hdc,int nSavedDC)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RestoreDC(hdc,nSavedDC);
  return BVar1;
}


