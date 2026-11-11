
/* ==== GDI32.DLL::SelectObject @ 5f004afe ==== 
 * signature: HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h)
 * body: 5f004afe-5f004b03
 * thunk to: GDI32.DLL::SelectObject
 */

HGDIOBJ SelectObject(HDC hdc,HGDIOBJ h)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SelectObject(hdc,h);
  return pvVar1;
}


