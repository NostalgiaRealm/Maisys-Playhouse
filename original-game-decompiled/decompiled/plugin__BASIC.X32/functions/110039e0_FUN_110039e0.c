
/* ==== FUN_110039e0 @ 110039e0 ==== 
 * signature: bool __cdecl FUN_110039e0(undefined4 * param_1, int param_2)
 * body: 110039e0-11003cb4
 */

bool __cdecl FUN_110039e0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  bVar5 = true;
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x1a) + 0xc);
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x1a) + 0x10);
  if (iVar1 == 0x7d1) {
    iVar3 = *(int *)(param_2 + 0xc);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0xc) == 0x12f) || (*(int *)(param_2 + 0xc) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
    iVar3 = *(int *)(param_2 + 0x14);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x14) == 0x12f) || (*(int *)(param_2 + 0x14) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
  }
  else if (iVar1 == 0x7d2) {
    iVar3 = *(int *)(param_2 + 0xc);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0xc) == 0x12f) || (*(int *)(param_2 + 0xc) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    iVar3 = *(int *)(param_2 + 0x14);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x14) == 0x12f) || (*(int *)(param_2 + 0x14) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    *(undefined1 *)(param_2 + 0x36) = 0;
    FUN_11004840(param_1,10,0);
  }
  if (iVar1 == 0x7d1) {
    FUN_11003cc0(param_1,param_2);
  }
  if (iVar1 == 0x7d2) {
    uVar4 = FUN_11003d20(param_1,param_2);
    bVar5 = (char)uVar4 == '\0';
    *(undefined1 *)(param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 0x36) = 0;
  }
  else {
    if (*(char *)(param_2 + 0x36) != '\0') goto LAB_11003c71;
    if ((*(int *)(param_2 + 0xc) == iVar1) && (*(int *)(param_2 + 0x10) == iVar2)) {
      if ((*(char *)(param_2 + 0x34) != '\0') && (*(short *)(param_2 + 0x1c) != 2)) {
        FUN_11003d20(param_1,param_2);
      }
      if (*(short *)(param_2 + 0x1c) == 3) {
        FUN_11003f30(param_1,param_2);
      }
      else {
        FUN_11003d70(param_1,param_2);
      }
      if ((*(char *)(param_2 + 0x35) == '\0') && (*(short *)(param_2 + 0x1c) != 3)) {
        do {
          FUN_11003680(param_1,param_2);
          FUN_1101db80(param_1,*(undefined4 *)(param_2 + 0x30),4,0,0,0,0);
        } while (*(char *)(param_2 + 0x36) != '\0');
        FUN_11003980(0x1f6,param_1);
      }
      else {
        FUN_11004840(param_1,10,1);
      }
      bVar5 = false;
    }
  }
  if (*(char *)(param_2 + 0x36) == '\0') {
    return bVar5;
  }
LAB_11003c71:
  if ((*(int *)(param_2 + 0x14) == iVar1) && (*(int *)(param_2 + 0x18) == iVar2)) {
    FUN_11003d20(param_1,param_2);
    *(undefined1 *)(param_2 + 0x36) = 0;
    FUN_11003980(0x1f6,param_1);
    bVar5 = false;
    FUN_11004840(param_1,10,0);
  }
  return bVar5;
}


