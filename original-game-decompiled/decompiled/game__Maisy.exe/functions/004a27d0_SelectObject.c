
/* ==== GDI32.DLL::SelectObject @ 004a27d0 ==== 
 * signature: HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h)
 * body: 004a27d0-004a27d5
 * thunk to: GDI32.DLL::SelectObject
 */

HGDIOBJ SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SelectObject(hdc,h);
  return pvVar1;
}


