
/* ==== KERNEL32.DLL::SetHandleCount @ 110338c2 ==== 
 * signature: UINT __stdcall SetHandleCount(UINT uNumber)
 * body: 110338c2-110338c7
 * thunk to: KERNEL32.DLL::SetHandleCount
 */

UINT SetHandleCount(UINT uNumber)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x110338c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetHandleCount(uNumber);
  return UVar1;
}


