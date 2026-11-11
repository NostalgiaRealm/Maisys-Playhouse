
/* ==== USER32.DLL::SetMenuItemBitmaps @ 004a2554 ==== 
 * signature: BOOL __stdcall SetMenuItemBitmaps(HMENU hMenu, UINT uPosition, UINT uFlags, HBITMAP hBitmapUnchecked, HBITMAP hBitmapChecked)
 * body: 004a2554-004a2559
 * thunk to: USER32.DLL::SetMenuItemBitmaps
 */

BOOL SetMenuItemBitmaps(HMENU hMenu,UINT uPosition,UINT uFlags,HBITMAP hBitmapUnchecked,
                       HBITMAP hBitmapChecked)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMenuItemBitmaps(hMenu,uPosition,uFlags,hBitmapUnchecked,hBitmapChecked);
  return BVar1;
}


