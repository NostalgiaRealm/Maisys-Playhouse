
/* ==== KERNEL32.DLL::SetHandleCount @ 004a2386 ==== 
 * signature: UINT __stdcall SetHandleCount(UINT uNumber)
 * body: 004a2386-004a238b
 * thunk to: KERNEL32.DLL::SetHandleCount
 */

UINT SetHandleCount(UINT uNumber)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetHandleCount(uNumber);
  return UVar1;
}


