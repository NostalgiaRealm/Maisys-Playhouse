
/* ==== GDI32.DLL::StartDocA @ 12027c38 ==== 
 * signature: int __stdcall StartDocA(HDC hdc, DOCINFOA * lpdi)
 * body: 12027c38-12027c3d
 * thunk to: GDI32.DLL::StartDocA
 */

int StartDocA(HDC hdc,DOCINFOA *lpdi)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = StartDocA(hdc,lpdi);
  return iVar1;
}


