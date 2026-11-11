
/* ==== FUN_11005330 @ 11005330 ==== 
 * signature: undefined1 __cdecl FUN_11005330(undefined4 * param_1, int param_2)
 * body: 11005330-11005570
 */

undefined1 __cdecl FUN_11005330(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_1;
  
  local_1 = 1;
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x1a) + 0xc);
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x1a) + 0x10);
  if (iVar1 == 0x7d1) {
    iVar3 = *(int *)(param_2 + 0x10);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x10) == 0x12f) || (*(int *)(param_2 + 0x10) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
    iVar3 = *(int *)(param_2 + 0x18);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x18) == 0x12f) || (*(int *)(param_2 + 0x18) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
  }
  else if (iVar1 == 0x7d2) {
    iVar3 = *(int *)(param_2 + 0x10);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x10) == 0x12f) || (*(int *)(param_2 + 0x10) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    iVar3 = *(int *)(param_2 + 0x18);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x18) == 0x12f) || (*(int *)(param_2 + 0x18) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
  }
  if ((*(int *)(param_2 + 0x10) == iVar1) && (*(int *)(param_2 + 0x14) == iVar2)) {
    iVar3 = *(int *)(param_2 + 0x28);
    if ((iVar3 == 0) || (iVar3 == -1)) {
      MessageBeep(0x40);
    }
    else {
      uVar9 = 0;
      if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
        FUN_110114d0(param_1,iVar3,'\0');
        *(byte *)(param_2 + 0x2c) = *(byte *)(param_2 + 0x2c) | 2;
      }
      else {
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 4;
        uVar4 = FUN_1100fc30((int)param_1);
        FUN_1101db80(param_1,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
        FUN_110114d0(param_1,*(undefined4 *)(param_2 + 0x28),'\x01');
      }
    }
    local_1 = 0;
  }
  if ((*(int *)(param_2 + 0x18) == iVar1) && (*(int *)(param_2 + 0x1c) == iVar2)) {
    FUN_110114d0(param_1,0,'\0');
    local_1 = 0;
    *(byte *)(param_2 + 0x2c) = *(byte *)(param_2 + 0x2c) & 0xfd;
  }
  if (iVar1 == 0x7d2) {
    *(byte *)(param_2 + 0x2c) = *(byte *)(param_2 + 0x2c) & 0xfd;
  }
  return local_1;
}


