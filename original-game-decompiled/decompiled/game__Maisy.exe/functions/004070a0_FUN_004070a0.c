
/* ==== FUN_004070a0 @ 004070a0 ==== 
 * signature: undefined __fastcall FUN_004070a0(int param_1)
 * body: 004070a0-00407277
 */

void __fastcall FUN_004070a0(int param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  FUN_00402dc0(*(int *)(param_1 + 0x52));
  FUN_0042fc00(*(void **)(param_1 + 0x52));
  FUN_00402dc0(*(int *)(param_1 + 0x56));
  FUN_0042fc00(*(void **)(param_1 + 0x56));
  if ((*(char *)(param_1 + 0xa4) != '\0') || (*(char *)(param_1 + 0xa6) == '\0')) goto LAB_0040726a;
  piVar1 = *(int **)(param_1 + 0x9a);
  if ((piVar1 != (int *)0x0) && ((*(byte *)((int)piVar1 + 0x29) & 0x80) == 0)) {
    (**(code **)(*piVar1 + 0x38c))(&local_28,1);
    local_20 = *(int **)(param_1 + 0x9a);
    (**(code **)(*local_20 + 0x26c))(param_1);
    local_1c = local_28;
    local_18 = local_24;
    local_10 = 0;
    local_c = 0;
    local_8 = 1;
    sVar2 = (**(code **)(*local_20 + 0x27c))();
    local_14 = (int)sVar2;
    (**(code **)(**(int **)(param_1 + 0x52) + 0xe8))(&local_20);
    *(short *)((int)local_20 + 0x92) = (short)*(undefined4 *)(*(int *)(param_1 + 0x52) + 0x26) + -1;
    iVar3 = FUN_00469fb0(*(int **)(param_1 + 0x9a));
    if (iVar3 != 0) {
      FUN_00469fb0(*(int **)(param_1 + 0x9a));
      FUN_00407090();
    }
  }
  piVar1 = *(int **)(param_1 + 0x9e);
  if ((piVar1 == (int *)0x0) || (*(int **)(param_1 + 0x9a) == piVar1)) {
LAB_00407232:
    if (((DAT_004e0204 & 0x10) != 0) && (*(int **)(param_1 + 0x9e) != (int *)0x0)) {
      iVar3 = FUN_00469fb0(*(int **)(param_1 + 0x9e));
      if (iVar3 != 0) {
        FUN_00469fb0(*(int **)(param_1 + 0x9e));
        FUN_00407090();
      }
    }
  }
  else if ((DAT_004e0204 & 0x10) != 0) {
    if ((*(byte *)((int)piVar1 + 0x29) & 0x80) == 0) {
      (**(code **)(*piVar1 + 0x38c))(&local_28,1);
      local_20 = *(int **)(param_1 + 0x9e);
      (**(code **)(*local_20 + 0x26c))(param_1);
      local_1c = local_28;
      local_10 = 0;
      local_c = 0;
      local_8 = 1;
      local_18 = local_24;
      sVar2 = (**(code **)(*local_20 + 0x27c))();
      local_14 = (int)sVar2;
      (**(code **)(**(int **)(param_1 + 0x52) + 0xe8))(&local_20);
      *(short *)((int)local_20 + 0x92) =
           (short)*(undefined4 *)(*(int *)(param_1 + 0x52) + 0x26) + -1;
    }
    goto LAB_00407232;
  }
  FUN_00407080();
LAB_0040726a:
  *(undefined1 *)(param_1 + 0xa7) = 0;
  return;
}


