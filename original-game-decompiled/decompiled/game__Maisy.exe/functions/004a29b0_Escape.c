
/* ==== GDI32.DLL::Escape @ 004a29b0 ==== 
 * signature: int __stdcall Escape(HDC hdc, int iEscape, int cjIn, LPCSTR pvIn, LPVOID pvOut)
 * body: 004a29b0-004a29b5
 * thunk to: GDI32.DLL::Escape
 */

int Escape(HDC hdc,int iEscape,int cjIn,LPCSTR pvIn,LPVOID pvOut)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a29b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = Escape(hdc,iEscape,cjIn,pvIn,pvOut);
  return iVar1;
}


