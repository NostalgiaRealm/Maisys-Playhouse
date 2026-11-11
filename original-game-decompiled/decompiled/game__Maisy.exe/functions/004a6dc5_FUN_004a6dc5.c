
/* ==== FUN_004a6dc5 @ 004a6dc5 ==== 
 * signature: bool __thiscall FUN_004a6dc5(void * this, int param_1)
 * body: 004a6dc5-004a6e68
 */

bool __thiscall FUN_004a6dc5(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_8;
  
  piVar3 = (int *)0x0;
  if (DAT_004e5204 != 0) {
    iVar1 = FUN_004bafca();
    piVar3 = *(int **)(*(int *)(iVar1 + 4) + 0xbc);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x54))();
    }
  }
  if (param_1 < 1) {
    FUN_004a7457(this,param_1);
    local_8 = 0;
    if (*(int **)((int)this + 0x78) != (int *)0x0) {
      local_8 = (**(code **)(**(int **)((int)this + 0x78) + 0x18))();
    }
    while (local_8 != 0) {
      piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x78) + 0x1c))(&local_8);
      (**(code **)(*piVar2 + 0x8c))();
    }
  }
  else if (param_1 == 1) {
    FUN_004a7457(this,1);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x58))();
  }
  return param_1 < 1;
}


