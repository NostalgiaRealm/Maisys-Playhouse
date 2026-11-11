
/* ==== USER32.DLL::GetSubMenu @ 004a2650 ==== 
 * signature: HMENU __stdcall GetSubMenu(HMENU hMenu, int nPos)
 * body: 004a2650-004a2655
 * thunk to: USER32.DLL::GetSubMenu
 */

HMENU GetSubMenu(HMENU hMenu,int nPos)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSubMenu(hMenu,nPos);
  return pHVar1;
}


