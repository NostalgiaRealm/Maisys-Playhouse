
/* ==== FUN_004a5677 @ 004a5677 ==== 
 * signature: undefined __thiscall FUN_004a5677(void * this, int param_1)
 * body: 004a5677-004a56ad
 */

void __thiscall FUN_004a5677(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  while (iVar2 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 8);
    iVar2 = *(int *)(iVar2 + 4);
    FUN_004a5620(this,*puVar1);
  }
  return;
}


