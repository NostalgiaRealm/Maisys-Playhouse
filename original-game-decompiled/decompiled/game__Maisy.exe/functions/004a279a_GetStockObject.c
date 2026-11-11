
/* ==== GDI32.DLL::GetStockObject @ 004a279a ==== 
 * signature: HGDIOBJ __stdcall GetStockObject(int i)
 * body: 004a279a-004a279f
 * thunk to: GDI32.DLL::GetStockObject
 */

HGDIOBJ GetStockObject(int i)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a279a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStockObject(i);
  return pvVar1;
}


