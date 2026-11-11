
/* ==== USER32.DLL::GetMenuItemID @ 004a264a ==== 
 * signature: UINT __stdcall GetMenuItemID(HMENU hMenu, int nPos)
 * body: 004a264a-004a264f
 * thunk to: USER32.DLL::GetMenuItemID
 */

UINT GetMenuItemID(HMENU hMenu,int nPos)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a264a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuItemID(hMenu,nPos);
  return UVar1;
}


