
/* ==== KERNEL32.DLL::SetHandleCount @ 140238e0 ==== 
 * signature: UINT __stdcall SetHandleCount(UINT uNumber)
 * body: 140238e0-140238e5
 * thunk to: KERNEL32.DLL::SetHandleCount
 */

UINT SetHandleCount(UINT uNumber)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetHandleCount(uNumber);
  return UVar1;
}


