
/* ==== KERNEL32.DLL::SetErrorMode @ 004a2116 ==== 
 * signature: UINT __stdcall SetErrorMode(UINT uMode)
 * body: 004a2116-004a211b
 * thunk to: KERNEL32.DLL::SetErrorMode
 */

UINT SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}


