
/* ==== USER32.DLL::DestroyMenu @ 004a25f6 ==== 
 * signature: BOOL __stdcall DestroyMenu(HMENU hMenu)
 * body: 004a25f6-004a25fb
 * thunk to: USER32.DLL::DestroyMenu
 */

BOOL DestroyMenu(HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a25f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyMenu(hMenu);
  return BVar1;
}


