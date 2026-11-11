
/* ==== VERSION.DLL::GetFileVersionInfoA @ 1001597c ==== 
 * signature: BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData)
 * body: 1001597c-10015981
 * thunk to: VERSION.DLL::GetFileVersionInfoA
 */

BOOL GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001597c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileVersionInfoA(lptstrFilename,dwHandle,dwLen,lpData);
  return BVar1;
}


