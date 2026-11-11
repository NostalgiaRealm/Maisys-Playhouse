
/* ==== KERNEL32.DLL::SetStdHandle @ 11033994 ==== 
 * signature: BOOL __stdcall SetStdHandle(DWORD nStdHandle, HANDLE hHandle)
 * body: 11033994-11033999
 * thunk to: KERNEL32.DLL::SetStdHandle
 */

BOOL SetStdHandle(DWORD nStdHandle,HANDLE hHandle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetStdHandle(nStdHandle,hHandle);
  return BVar1;
}


