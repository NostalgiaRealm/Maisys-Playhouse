
/* ==== GDI32.DLL::SetMapperFlags @ 004a2914 ==== 
 * signature: DWORD __stdcall SetMapperFlags(HDC hdc, DWORD flags)
 * body: 004a2914-004a2919
 * thunk to: GDI32.DLL::SetMapperFlags
 */

DWORD SetMapperFlags(HDC hdc,DWORD flags)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetMapperFlags(hdc,flags);
  return DVar1;
}


