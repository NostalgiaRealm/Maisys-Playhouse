
/* ==== USER32.DLL::GetMenuItemCount @ 004a2656 ==== 
 * signature: int __stdcall GetMenuItemCount(HMENU hMenu)
 * body: 004a2656-004a265b
 * thunk to: USER32.DLL::GetMenuItemCount
 */

int GetMenuItemCount(HMENU hMenu)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetMenuItemCount(hMenu);
  return iVar1;
}


