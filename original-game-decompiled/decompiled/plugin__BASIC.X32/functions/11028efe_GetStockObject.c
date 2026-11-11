
/* ==== GDI32.DLL::GetStockObject @ 11028efe ==== 
 * signature: HGDIOBJ __stdcall GetStockObject(int i)
 * body: 11028efe-11028f03
 * thunk to: GDI32.DLL::GetStockObject
 */

HGDIOBJ GetStockObject(int i)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028efe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStockObject(i);
  return pvVar1;
}


