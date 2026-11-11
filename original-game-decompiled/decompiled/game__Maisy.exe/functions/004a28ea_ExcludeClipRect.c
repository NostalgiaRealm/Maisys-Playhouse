
/* ==== GDI32.DLL::ExcludeClipRect @ 004a28ea ==== 
 * signature: int __stdcall ExcludeClipRect(HDC hdc, int left, int top, int right, int bottom)
 * body: 004a28ea-004a28ef
 * thunk to: GDI32.DLL::ExcludeClipRect
 */

int ExcludeClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExcludeClipRect(hdc,left,top,right,bottom);
  return iVar1;
}


