
/* ==== KERNEL32.DLL::_llseek @ 12027bb4 ==== 
 * signature: LONG __stdcall _llseek(HFILE hFile, LONG lOffset, int iOrigin)
 * body: 12027bb4-12027bb9
 * thunk to: KERNEL32.DLL::_llseek
 */

LONG _llseek(HFILE hFile,LONG lOffset,int iOrigin)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = _llseek(hFile,lOffset,iOrigin);
  return LVar1;
}


