
/* ==== MPR.DLL::WNetGetConnectionA @ 10015982 ==== 
 * signature: DWORD __stdcall WNetGetConnectionA(LPCSTR lpLocalName, LPSTR lpRemoteName, LPDWORD lpnLength)
 * body: 10015982-10015987
 * thunk to: MPR.DLL::WNetGetConnectionA
 */

DWORD WNetGetConnectionA(LPCSTR lpLocalName,LPSTR lpRemoteName,LPDWORD lpnLength)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WNetGetConnectionA(lpLocalName,lpRemoteName,lpnLength);
  return DVar1;
}


