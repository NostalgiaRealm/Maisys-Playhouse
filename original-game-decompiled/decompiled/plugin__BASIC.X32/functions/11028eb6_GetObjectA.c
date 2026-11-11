
/* ==== GDI32.DLL::GetObjectA @ 11028eb6 ==== 
 * signature: int __stdcall GetObjectA(HANDLE h, int c, LPVOID pv)
 * body: 11028eb6-11028ebb
 * thunk to: GDI32.DLL::GetObjectA
 */

int GetObjectA(HANDLE h,int c,LPVOID pv)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028eb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetObjectA(h,c,pv);
  return iVar1;
}


