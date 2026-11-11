
/* ==== GDI32.DLL::GetObjectType @ 004a2956 ==== 
 * signature: DWORD __stdcall GetObjectType(HGDIOBJ h)
 * body: 004a2956-004a295b
 * thunk to: GDI32.DLL::GetObjectType
 */

DWORD GetObjectType(HGDIOBJ h)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetObjectType(h);
  return DVar1;
}


