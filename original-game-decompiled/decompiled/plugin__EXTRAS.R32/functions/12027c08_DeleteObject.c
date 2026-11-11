
/* ==== GDI32.DLL::DeleteObject @ 12027c08 ==== 
 * signature: BOOL __stdcall DeleteObject(HGDIOBJ ho)
 * body: 12027c08-12027c0d
 * thunk to: GDI32.DLL::DeleteObject
 */

BOOL DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteObject(ho);
  return BVar1;
}


