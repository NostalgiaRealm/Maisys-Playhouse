
/* ==== USER32.DLL::EnableMenuItem @ 004a2548 ==== 
 * signature: BOOL __stdcall EnableMenuItem(HMENU hMenu, UINT uIDEnableItem, UINT uEnable)
 * body: 004a2548-004a254d
 * thunk to: USER32.DLL::EnableMenuItem
 */

BOOL EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  return BVar1;
}


