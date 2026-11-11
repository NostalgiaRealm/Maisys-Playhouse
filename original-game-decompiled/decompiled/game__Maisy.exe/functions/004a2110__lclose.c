
/* ==== KERNEL32.DLL::_lclose @ 004a2110 ==== 
 * signature: HFILE __stdcall _lclose(HFILE hFile)
 * body: 004a2110-004a2115
 * thunk to: KERNEL32.DLL::_lclose
 */

HFILE _lclose(HFILE hFile)

{
  HFILE HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = _lclose(hFile);
  return HVar1;
}


