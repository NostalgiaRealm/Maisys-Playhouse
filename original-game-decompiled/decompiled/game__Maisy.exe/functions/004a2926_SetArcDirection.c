
/* ==== GDI32.DLL::SetArcDirection @ 004a2926 ==== 
 * signature: int __stdcall SetArcDirection(HDC hdc, int dir)
 * body: 004a2926-004a292b
 * thunk to: GDI32.DLL::SetArcDirection
 */

int SetArcDirection(HDC hdc,int dir)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetArcDirection(hdc,dir);
  return iVar1;
}


