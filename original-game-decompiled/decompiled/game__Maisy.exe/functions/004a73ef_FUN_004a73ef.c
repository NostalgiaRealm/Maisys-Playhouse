
/* ==== FUN_004a73ef @ 004a73ef ==== 
 * signature: undefined4 __thiscall FUN_004a73ef(void * this, int param_1)
 * body: 004a73ef-004a7452
 */

undefined4 __thiscall FUN_004a73ef(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0x200) || (iVar1 == 0xa0)) {
    if ((*(int *)(param_1 + 0x14) == *(int *)((int)this + 0x54)) &&
       ((*(int *)((int)this + 0x58) == *(int *)(param_1 + 0x18) &&
        (*(int *)((int)this + 0x5c) == iVar1)))) {
      return 0;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    *(int *)((int)this + 0x54) = *(int *)(param_1 + 0x14);
    *(undefined4 *)((int)this + 0x58) = uVar2;
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 4);
  }
  else if ((iVar1 == 0xf) || (iVar1 == 0x118)) {
    return 0;
  }
  return 1;
}


