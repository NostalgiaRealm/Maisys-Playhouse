
/* ==== KERNEL32.DLL::SetErrorMode @ 14023832 ==== 
 * signature: UINT __stdcall SetErrorMode(UINT uMode)
 * body: 14023832-14023837
 * thunk to: KERNEL32.DLL::SetErrorMode
 */

UINT SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}


