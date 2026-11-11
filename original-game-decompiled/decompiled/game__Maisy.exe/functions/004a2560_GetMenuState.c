
/* ==== USER32.DLL::GetMenuState @ 004a2560 ==== 
 * signature: UINT __stdcall GetMenuState(HMENU hMenu, UINT uId, UINT uFlags)
 * body: 004a2560-004a2565
 * thunk to: USER32.DLL::GetMenuState
 */

UINT GetMenuState(HMENU hMenu,UINT uId,UINT uFlags)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuState(hMenu,uId,uFlags);
  return UVar1;
}


