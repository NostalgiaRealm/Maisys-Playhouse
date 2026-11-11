
/* ==== USER32.DLL::CheckMenuItem @ 004a254e ==== 
 * signature: DWORD __stdcall CheckMenuItem(HMENU hMenu, UINT uIDCheckItem, UINT uCheck)
 * body: 004a254e-004a2553
 * thunk to: USER32.DLL::CheckMenuItem
 */

DWORD CheckMenuItem(HMENU hMenu,UINT uIDCheckItem,UINT uCheck)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a254e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CheckMenuItem(hMenu,uIDCheckItem,uCheck);
  return DVar1;
}


