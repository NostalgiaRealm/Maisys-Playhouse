
/* ==== GDI32.DLL::StartDocA @ 004a2896 ==== 
 * signature: int __stdcall StartDocA(HDC hdc, DOCINFOA * lpdi)
 * body: 004a2896-004a289b
 * thunk to: GDI32.DLL::StartDocA
 */

int StartDocA(HDC hdc,DOCINFOA *lpdi)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = StartDocA(hdc,lpdi);
  return iVar1;
}


