
/* ==== KERNEL32.DLL::SetFilePointer @ 1103399a ==== 
 * signature: DWORD __stdcall SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod)
 * body: 1103399a-1103399f
 * thunk to: KERNEL32.DLL::SetFilePointer
 */

DWORD SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod
                    )

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1103399a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}


