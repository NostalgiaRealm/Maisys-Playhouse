
/* ==== KERNEL32.DLL::SetEnvironmentVariableA @ 14023994 ==== 
 * signature: BOOL __stdcall SetEnvironmentVariableA(LPCSTR lpName, LPCSTR lpValue)
 * body: 14023994-14023999
 * thunk to: KERNEL32.DLL::SetEnvironmentVariableA
 */

BOOL SetEnvironmentVariableA(LPCSTR lpName,LPCSTR lpValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEnvironmentVariableA(lpName,lpValue);
  return BVar1;
}


