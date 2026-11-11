
/* ==== KERNEL32.DLL::SetEnvironmentVariableA @ 004a23da ==== 
 * signature: BOOL __stdcall SetEnvironmentVariableA(LPCSTR lpName, LPCSTR lpValue)
 * body: 004a23da-004a23df
 * thunk to: KERNEL32.DLL::SetEnvironmentVariableA
 */

BOOL SetEnvironmentVariableA(LPCSTR lpName,LPCSTR lpValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a23da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEnvironmentVariableA(lpName,lpValue);
  return BVar1;
}


