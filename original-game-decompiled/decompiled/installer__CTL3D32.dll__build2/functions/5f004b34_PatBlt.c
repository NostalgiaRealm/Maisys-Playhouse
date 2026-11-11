
/* ==== GDI32.DLL::PatBlt @ 5f004b34 ==== 
 * signature: BOOL __stdcall PatBlt(HDC hdc, int x, int y, int w, int h, DWORD rop)
 * body: 5f004b34-5f004b39
 * thunk to: GDI32.DLL::PatBlt
 */

BOOL PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PatBlt(hdc,x,y,w,h,rop);
  return BVar1;
}


