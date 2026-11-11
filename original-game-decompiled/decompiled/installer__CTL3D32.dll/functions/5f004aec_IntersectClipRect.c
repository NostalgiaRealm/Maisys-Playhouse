
/* ==== GDI32.DLL::IntersectClipRect @ 5f004aec ==== 
 * signature: int __stdcall IntersectClipRect(HDC hdc, int left, int top, int right, int bottom)
 * body: 5f004aec-5f004af1
 * thunk to: GDI32.DLL::IntersectClipRect
 */

int IntersectClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IntersectClipRect(hdc,left,top,right,bottom);
  return iVar1;
}


