
/* ==== FUN_00475f30 @ 00475f30 ==== 
 * signature: undefined4 __cdecl FUN_00475f30(int param_1)
 * body: 00475f30-00475f6a
 */

undefined4 __cdecl FUN_00475f30(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  
  iVar1 = **(int **)(param_1 + 0x1a);
  iVar2 = *(int *)(*(int *)(param_1 + 0x16) + 8);
  this = (void *)0x0;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    this = (void *)FUN_00466a70(*(int *)(iVar2 + 4));
  }
  uVar3 = 0;
  if (this != (void *)0x0) {
    uVar3 = FUN_0044dd40(this,iVar1,iVar2,0);
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


