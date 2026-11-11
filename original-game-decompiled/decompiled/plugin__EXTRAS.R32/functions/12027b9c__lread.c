
/* ==== KERNEL32.DLL::_lread @ 12027b9c ==== 
 * signature: UINT __stdcall _lread(HFILE hFile, LPVOID lpBuffer, UINT uBytes)
 * body: 12027b9c-12027ba1
 * thunk to: KERNEL32.DLL::_lread
 */

UINT _lread(HFILE hFile,LPVOID lpBuffer,UINT uBytes)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = _lread(hFile,lpBuffer,uBytes);
  return UVar1;
}


