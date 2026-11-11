
/* ==== USER32.DLL::ModifyMenuA @ 004a255a ==== 
 * signature: BOOL __stdcall ModifyMenuA(HMENU hMnu, UINT uPosition, UINT uFlags, UINT_PTR uIDNewItem, LPCSTR lpNewItem)
 * body: 004a255a-004a255f
 * thunk to: USER32.DLL::ModifyMenuA
 */

BOOL ModifyMenuA(HMENU hMnu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a255a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ModifyMenuA(hMnu,uPosition,uFlags,uIDNewItem,lpNewItem);
  return BVar1;
}


