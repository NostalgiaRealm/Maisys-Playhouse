
/* ==== KERNEL32.DLL::SetErrorMode @ 120342c0 ==== 
 * signature: UINT __stdcall SetErrorMode(UINT uMode)
 * body: 120342c0-120342c5
 * thunk to: KERNEL32.DLL::SetErrorMode
 */

UINT SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x120342c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}


