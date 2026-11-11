
/* ==== GDI32.DLL::SetROP2 @ 004a28ae ==== 
 * signature: int __stdcall SetROP2(HDC hdc, int rop2)
 * body: 004a28ae-004a28b3
 * thunk to: GDI32.DLL::SetROP2
 */

int SetROP2(HDC hdc,int rop2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetROP2(hdc,rop2);
  return iVar1;
}


