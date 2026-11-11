
/* ==== FUN_00475f70 @ 00475f70 ==== 
 * signature: undefined4 __cdecl FUN_00475f70(int param_1)
 * body: 00475f70-00475fa7
 */

undefined4 __cdecl FUN_00475f70(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  
  iVar1 = **(int **)(param_1 + 0x1a);
  iVar2 = *(int *)(*(int *)(param_1 + 0x16) + 8);
  this = (void *)FUN_00466a70(*(int *)(iVar2 + 4));
  FUN_0044e340((int)this);
  uVar3 = FUN_0044dc80(this,iVar1,iVar2,0);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


