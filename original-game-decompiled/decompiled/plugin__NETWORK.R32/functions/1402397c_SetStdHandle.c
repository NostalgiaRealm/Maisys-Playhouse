
/* ==== KERNEL32.DLL::SetStdHandle @ 1402397c ==== 
 * signature: BOOL __stdcall SetStdHandle(DWORD nStdHandle, HANDLE hHandle)
 * body: 1402397c-14023981
 * thunk to: KERNEL32.DLL::SetStdHandle
 */

BOOL SetStdHandle(DWORD nStdHandle,HANDLE hHandle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402397c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetStdHandle(nStdHandle,hHandle);
  return BVar1;
}


