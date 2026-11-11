
/* ==== KERNEL32.DLL::OpenFile @ 004a210a ==== 
 * signature: HFILE __stdcall OpenFile(LPCSTR lpFileName, LPOFSTRUCT lpReOpenBuff, UINT uStyle)
 * body: 004a210a-004a210f
 * thunk to: KERNEL32.DLL::OpenFile
 */

HFILE OpenFile(LPCSTR lpFileName,LPOFSTRUCT lpReOpenBuff,UINT uStyle)

{
  HFILE HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a210a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = OpenFile(lpFileName,lpReOpenBuff,uStyle);
  return HVar1;
}


