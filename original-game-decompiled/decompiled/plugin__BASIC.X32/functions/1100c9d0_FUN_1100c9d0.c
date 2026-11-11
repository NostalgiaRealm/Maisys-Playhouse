
/* ==== FUN_1100c9d0 @ 1100c9d0 ==== 
 * signature: bool __cdecl FUN_1100c9d0(undefined4 * param_1, int param_2)
 * body: 1100c9d0-1100cc87
 */

bool __cdecl FUN_1100c9d0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  undefined1 local_5;
  
  local_5 = true;
  iVar1 = *(int *)((int)param_1 + 0x1a);
  iVar2 = *(int *)(iVar1 + 0xc);
  iVar3 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0x7d1) {
    iVar4 = *(int *)(param_2 + 0x10);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x10) == 0x12f) || (*(int *)(param_2 + 0x10) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
    iVar4 = *(int *)(param_2 + 0x18);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x18) == 0x12f) || (*(int *)(param_2 + 0x18) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
  }
  else if (iVar2 == 0x7d2) {
    iVar4 = *(int *)(param_2 + 0x10);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x10) == 0x12f) || (*(int *)(param_2 + 0x10) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    iVar4 = *(int *)(param_2 + 0x18);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x18) == 0x12f) || (*(int *)(param_2 + 0x18) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    FUN_11006290((uint *)(param_2 + 0xc),'\x01');
    FUN_11004840(param_1,10,0);
  }
  if (iVar2 == 0x7d2) {
    uVar6 = FUN_1100cc90(param_1,param_2);
    local_5 = (char)uVar6 == '\0';
    FUN_11006290((uint *)(param_2 + 0xc),'\x01');
    goto LAB_1100cc3c;
  }
  if ((*(int *)(param_2 + 0x10) == iVar2) && (*(int *)(param_2 + 0x14) == iVar3)) {
    FUN_1100cc90(param_1,param_2);
    FUN_11004840(param_1,10,1);
    FUN_1100cd00(param_1,param_2,'\x01');
  }
  else {
    if ((*(int *)(param_2 + 0x18) != iVar2) || (*(int *)(param_2 + 0x1c) != iVar3))
    goto LAB_1100cc3c;
    cVar5 = FUN_110062b0((uint *)(param_2 + 0xc),'\x01');
    if (cVar5 == '\0') goto LAB_1100cc3c;
    FUN_11006290((uint *)(param_2 + 0xc),'\x01');
    FUN_11004840(param_1,10,0);
    FUN_1100c970(0x1f6,param_1);
  }
  local_5 = false;
LAB_1100cc3c:
  if (iVar2 == 0x514) {
    FUN_1100cd80((int)param_1,param_2,(short *)(iVar1 + 0x24),iVar3);
    local_5 = false;
  }
  if (iVar2 == 0x4b0) {
    FUN_1100ce80(param_1,param_2,(short *)(iVar1 + 0x24),iVar3);
    local_5 = false;
  }
  return local_5;
}


