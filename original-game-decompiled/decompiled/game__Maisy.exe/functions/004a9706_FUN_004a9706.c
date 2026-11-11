
/* ==== FUN_004a9706 @ 004a9706 ==== 
 * signature: void * __cdecl FUN_004a9706(int param_1, UINT param_2)
 * body: 004a9706-004a9766
 */

void * __cdecl FUN_004a9706(int param_1,UINT param_2)

{
  int iVar1;
  HMENU pHVar2;
  int iVar3;
  void *pvVar4;
  UINT UVar5;
  int nPos;
  undefined4 *puVar6;
  
  nPos = 0;
  puVar6 = (undefined4 *)(param_1 + 4);
  iVar1 = GetMenuItemCount((HMENU)*puVar6);
  do {
    if (iVar1 <= nPos) {
      return (void *)0x0;
    }
    pHVar2 = GetSubMenu((HMENU)*puVar6,nPos);
    iVar3 = FromHandle(pHVar2);
    if (iVar3 == 0) {
      UVar5 = GetMenuItemID((HMENU)*puVar6,nPos);
      if (UVar5 == param_2) {
        pvVar4 = FUN_004ac6c8((void *)*puVar6);
        return pvVar4;
      }
    }
    else {
      pvVar4 = FUN_004a9706(iVar3,param_2);
      if (pvVar4 != (void *)0x0) {
        return pvVar4;
      }
    }
    nPos = nPos + 1;
  } while( true );
}


