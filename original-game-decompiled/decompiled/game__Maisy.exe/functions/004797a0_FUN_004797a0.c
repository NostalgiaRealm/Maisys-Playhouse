
/* ==== FUN_004797a0 @ 004797a0 ==== 
 * signature: undefined __fastcall FUN_004797a0(int param_1)
 * body: 004797a0-004798f7
 */

void __fastcall FUN_004797a0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004798f8;
  *unaff_FS_OFFSET = &local_10;
  piVar2 = (int *)FUN_00466a90(*(int *)(param_1 + 0x26));
  if (*(int *)(param_1 + 0x2e) != 0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x108))(6);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(*piVar2 + 0x104))(6);
      if ((*(undefined4 **)(param_1 + 0x2e) != puVar3) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    if (*(undefined4 **)(param_1 + 0x2e) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x2e))(1);
    }
    *(undefined4 *)(param_1 + 0x2e) = 0;
  }
  if (*(int *)(param_1 + 0x2a) != 0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x108))(7);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)(*piVar2 + 0x104))(7);
      if ((*(undefined4 **)(param_1 + 0x2a) != puVar3) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    if (*(undefined4 **)(param_1 + 0x2a) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x2a))(1);
    }
    *(undefined4 *)(param_1 + 0x2a) = 0;
  }
  iVar1 = *piVar2;
  iVar4 = (**(code **)(iVar1 + 0x108))(2);
  *(int *)(param_1 + 0x32) = iVar4;
  if (iVar4 == 0) {
    puVar3 = FUN_00412c20(0x56);
    local_8 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_00422bd0(puVar3);
    }
    local_8 = 0xffffffff;
    *(undefined4 **)(param_1 + 0x32) = puVar3;
    (**(code **)(iVar1 + 0x100))(s_Author_Messages_004dcb20,2,puVar3);
  }
  if (*(int *)(param_1 + 0x2e) != 0) {
    (**(code **)(iVar1 + 0x100))(s_Send_Messages_004dcb10,6,*(int *)(param_1 + 0x2e));
  }
  if (*(int *)(param_1 + 0x2a) != 0) {
    (**(code **)(iVar1 + 0x100))(s_Detect_Messages_004dcb00,7,*(int *)(param_1 + 0x2a));
  }
  FUN_00437e80(DAT_004dae3c,piVar2,0);
  *unaff_FS_OFFSET = local_10;
  return;
}


