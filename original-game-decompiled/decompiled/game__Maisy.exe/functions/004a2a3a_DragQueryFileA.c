
/* ==== SHELL32.DLL::DragQueryFileA @ 004a2a3a ==== 
 * signature: UINT __stdcall DragQueryFileA(HDROP hDrop, UINT iFile, LPSTR lpszFile, UINT cch)
 * body: 004a2a3a-004a2a3f
 * thunk to: SHELL32.DLL::DragQueryFileA
 */

UINT DragQueryFileA(HDROP hDrop,UINT iFile,LPSTR lpszFile,UINT cch)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = DragQueryFileA(hDrop,iFile,lpszFile,cch);
  return UVar1;
}


