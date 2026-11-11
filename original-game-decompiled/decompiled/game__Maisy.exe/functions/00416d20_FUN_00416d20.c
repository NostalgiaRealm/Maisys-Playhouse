
/* ==== FUN_00416d20 @ 00416d20 ==== 
 * signature: bool __cdecl FUN_00416d20(int * param_1, undefined2 * param_2, undefined2 param_3)
 * body: 00416d20-00416dea
 */

bool __cdecl FUN_00416d20(int *param_1,undefined2 *param_2,undefined2 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  bVar1 = true;
  switch(param_3) {
  case 0:
    if ((*(byte *)((int)param_1 + 0x1e) & 1) != 0) {
      iVar2 = (**(code **)(*param_1 + 0x16c))();
      goto LAB_00416daf;
    }
    break;
  case 1:
    if ((*(byte *)((int)param_1 + 0x1e) & 1) != 0) {
      iVar2 = (**(code **)(*param_1 + 0x174))();
      goto LAB_00416daf;
    }
    break;
  case 2:
    if ((*(byte *)((int)param_1 + 0x1e) & 1) != 0) {
      iVar2 = (**(code **)(*param_1 + 0x178))();
      goto LAB_00416daf;
    }
    break;
  case 3:
    if ((*(byte *)((int)param_1 + 0x1e) & 0x10) != 0) {
      iVar2 = *(int *)((int)param_1 + 0x3a);
      goto LAB_00416daf;
    }
    break;
  case 4:
    if ((*(uint *)((int)param_1 + 0x1e) & 0x10) == 0) {
      uVar3 = ((*(uint *)((int)param_1 + 0x1e) & 2) == 0) - 1 & (uint)param_1;
    }
    else {
      uVar3 = *(uint *)((int)param_1 + 0x3a);
    }
    if (uVar3 != 0) {
      iVar2 = FUN_0046cac0(uVar3);
      goto LAB_00416daf;
    }
  }
  bVar1 = false;
LAB_00416daf:
  if (bVar1) {
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x1e) & 2) == 0)) {
      if ((*(uint *)(iVar2 + 0x1e) & 0x10) == 0) {
        return false;
      }
      *param_2 = 0x19;
      *(int *)(param_2 + 1) = iVar2;
      return true;
    }
    *param_2 = 3;
    *(int *)(param_2 + 1) = iVar2;
  }
  return bVar1;
}


