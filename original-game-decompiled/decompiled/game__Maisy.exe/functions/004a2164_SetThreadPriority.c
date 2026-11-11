
/* ==== KERNEL32.DLL::SetThreadPriority @ 004a2164 ==== 
 * signature: BOOL __stdcall SetThreadPriority(HANDLE hThread, int nPriority)
 * body: 004a2164-004a2169
 * thunk to: KERNEL32.DLL::SetThreadPriority
 */

BOOL SetThreadPriority(HANDLE hThread,int nPriority)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadPriority(hThread,nPriority);
  return BVar1;
}


