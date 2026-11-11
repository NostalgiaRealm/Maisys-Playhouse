
/* ==== GDI32.DLL::GetObjectA @ 004a2854 ==== 
 * signature: int __stdcall GetObjectA(HANDLE h, int c, LPVOID pv)
 * body: 004a2854-004a2859
 * thunk to: GDI32.DLL::GetObjectA
 */

int GetObjectA(HANDLE h,int c,LPVOID pv)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetObjectA(h,c,pv);
  return iVar1;
}


