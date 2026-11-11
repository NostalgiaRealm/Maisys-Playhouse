
/* ==== COMDLG32.DLL::GetFileTitleA @ 004a29c8 ==== 
 * signature: short __stdcall GetFileTitleA(LPCSTR param_1, LPSTR Buf, WORD cchSize)
 * body: 004a29c8-004a29cd
 * thunk to: COMDLG32.DLL::GetFileTitleA
 */

short GetFileTitleA(LPCSTR param_1,LPSTR Buf,WORD cchSize)

{
  short sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a29c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = GetFileTitleA(param_1,Buf,cchSize);
  return sVar1;
}


