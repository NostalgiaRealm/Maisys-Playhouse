
/* ==== FUN_0048c530 @ 0048c530 ==== 
 * signature: undefined4 __cdecl FUN_0048c530(int * param_1, int param_2, int param_3)
 * body: 0048c530-0048c65e
 */

undefined4 __cdecl FUN_0048c530(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  int local_8;
  
  uVar4 = 0x10000;
  if (((param_1 == (int *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    return 0x10000;
  }
  iVar2 = (**(code **)(*param_1 + 0x10))();
  if (iVar2 == 0) {
    return 0x10000;
  }
  iVar2 = FUN_00458a00(iVar2);
  local_8 = *(int *)(iVar2 + 4);
  piVar3 = (int *)FUN_00466a90(local_8);
  piVar3 = (int *)(**(code **)(*piVar3 + 0x108))(2);
  cVar1 = (**(code **)(*piVar3 + 0x124))(0,param_2,local_1c,1,0);
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_3 + 2) = 900;
    *(undefined4 *)(param_3 + 6) = local_14;
    return 0;
  }
  piVar3 = (int *)FUN_00466a90(local_8);
  piVar3 = (int *)(**(code **)(*piVar3 + 0x108))(6);
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 0x124))(0,param_2,local_1c,1,0);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_3 + 2) = local_14;
      *(undefined4 *)(param_3 + 6) = local_10;
      return 0;
    }
  }
  piVar3 = (int *)FUN_00466a90(local_8);
  piVar3 = (int *)(**(code **)(*piVar3 + 0x108))(7);
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 0x124))(0,param_2,local_1c,1,0);
    if (cVar1 != '\0') {
      uVar4 = 0;
      *(undefined4 *)(param_3 + 2) = local_14;
      *(undefined4 *)(param_3 + 6) = local_10;
    }
  }
  return uVar4;
}


