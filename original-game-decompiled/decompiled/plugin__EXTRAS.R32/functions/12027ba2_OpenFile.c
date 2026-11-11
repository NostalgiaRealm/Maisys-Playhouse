
/* ==== KERNEL32.DLL::OpenFile @ 12027ba2 ==== 
 * signature: HFILE __stdcall OpenFile(LPCSTR lpFileName, LPOFSTRUCT lpReOpenBuff, UINT uStyle)
 * body: 12027ba2-12027ba7
 * thunk to: KERNEL32.DLL::OpenFile
 */

HFILE OpenFile(LPCSTR lpFileName,LPOFSTRUCT lpReOpenBuff,UINT uStyle)

{
  HFILE HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = OpenFile(lpFileName,lpReOpenBuff,uStyle);
  return HVar1;
}


