
/* ==== GDI32.DLL::DeleteObject @ 004a27a0 ==== 
 * signature: BOOL __stdcall DeleteObject(HGDIOBJ ho)
 * body: 004a27a0-004a27a5
 * thunk to: GDI32.DLL::DeleteObject
 */

BOOL DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteObject(ho);
  return BVar1;
}


