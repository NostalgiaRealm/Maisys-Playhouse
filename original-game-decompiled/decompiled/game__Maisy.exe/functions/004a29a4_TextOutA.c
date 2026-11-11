
/* ==== GDI32.DLL::TextOutA @ 004a29a4 ==== 
 * signature: BOOL __stdcall TextOutA(HDC hdc, int x, int y, LPCSTR lpString, int c)
 * body: 004a29a4-004a29a9
 * thunk to: GDI32.DLL::TextOutA
 */

BOOL TextOutA(HDC hdc,int x,int y,LPCSTR lpString,int c)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a29a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TextOutA(hdc,x,y,lpString,c);
  return BVar1;
}


