
/* ==== KERNEL32.DLL::_lclose @ 12027bae ==== 
 * signature: HFILE __stdcall _lclose(HFILE hFile)
 * body: 12027bae-12027bb3
 * thunk to: KERNEL32.DLL::_lclose
 */

HFILE _lclose(HFILE hFile)

{
  HFILE HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = _lclose(hFile);
  return HVar1;
}


