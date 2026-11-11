
/* ==== VERSION.DLL::GetFileVersionInfoSizeA @ 100019e2 ==== 
 * signature: DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename, LPDWORD lpdwHandle)
 * body: 100019e2-100019e7
 * thunk to: VERSION.DLL::GetFileVersionInfoSizeA
 */

DWORD GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100019e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeA(lptstrFilename,lpdwHandle);
  return DVar1;
}


