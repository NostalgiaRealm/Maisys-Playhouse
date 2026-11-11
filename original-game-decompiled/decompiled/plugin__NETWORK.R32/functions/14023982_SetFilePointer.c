
/* ==== KERNEL32.DLL::SetFilePointer @ 14023982 ==== 
 * signature: DWORD __stdcall SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod)
 * body: 14023982-14023987
 * thunk to: KERNEL32.DLL::SetFilePointer
 */

DWORD SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod
                    )

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}


