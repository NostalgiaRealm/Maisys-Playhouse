
/* ==== KERNEL32.DLL::_lopen @ 12027ba8 ==== 
 * signature: HFILE __stdcall _lopen(LPCSTR lpPathName, int iReadWrite)
 * body: 12027ba8-12027bad
 * thunk to: KERNEL32.DLL::_lopen
 */

HFILE _lopen(LPCSTR lpPathName,int iReadWrite)

{
  HFILE HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = _lopen(lpPathName,iReadWrite);
  return HVar1;
}


