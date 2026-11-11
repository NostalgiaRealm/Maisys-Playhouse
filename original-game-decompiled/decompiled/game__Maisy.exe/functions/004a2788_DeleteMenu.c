
/* ==== USER32.DLL::DeleteMenu @ 004a2788 ==== 
 * signature: BOOL __stdcall DeleteMenu(HMENU hMenu, UINT uPosition, UINT uFlags)
 * body: 004a2788-004a278d
 * thunk to: USER32.DLL::DeleteMenu
 */

BOOL DeleteMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteMenu(hMenu,uPosition,uFlags);
  return BVar1;
}


