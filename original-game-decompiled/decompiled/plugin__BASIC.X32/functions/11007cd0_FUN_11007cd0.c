
/* ==== FUN_11007cd0 @ 11007cd0 ==== 
 * signature: undefined1 __cdecl FUN_11007cd0(undefined4 * param_1, int param_2)
 * body: 11007cd0-11007f59
 */

undefined1 __cdecl FUN_11007cd0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined1 local_9;
  
  local_9 = 1;
  iVar1 = *(int *)((int)param_1 + 0x1a);
  iVar2 = *(int *)(iVar1 + 0xc);
  iVar3 = *(int *)(iVar1 + 0x10);
  iVar6 = FUN_1100fc40((int)param_1);
  if (iVar2 == 0x7d1) {
    iVar4 = *(int *)(param_2 + 0x24);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x24) == 0x12f) || (*(int *)(param_2 + 0x24) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
    iVar4 = *(int *)(param_2 + 0x2c);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x2c) == 0x12f) || (*(int *)(param_2 + 0x2c) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
  }
  else if (iVar2 == 0x7d2) {
    iVar4 = *(int *)(param_2 + 0x24);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x24) == 0x12f) || (*(int *)(param_2 + 0x24) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    iVar4 = *(int *)(param_2 + 0x2c);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x2c) == 0x12f) || (*(int *)(param_2 + 0x2c) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
  }
  if (((iVar2 == 0x4b0) && (*(int *)(iVar1 + 0x10) == 8)) && (*(int *)(iVar1 + 8) != iVar6)) {
    FUN_11006290((uint *)(param_2 + 0xc),'\0');
    local_9 = 0;
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if ((((iVar1 == iVar2) && (*(int *)(param_2 + 0x28) == iVar3)) ||
      ((iVar2 == 0x44d || ((iVar1 == 0x7d1 && (iVar2 == 3)))))) || ((iVar1 == 0x65 && (iVar2 == 3)))
     ) {
    FUN_11006270((uint *)(param_2 + 0xc),'\0');
    FUN_11007f60(param_1,param_2,'\x01');
  }
  else {
    if ((*(int *)(param_2 + 0x2c) != iVar2) || (*(int *)(param_2 + 0x30) != iVar3))
    goto LAB_11007f24;
    FUN_11007f60(param_1,param_2,'\0');
    FUN_11006290((uint *)(param_2 + 0xc),'\0');
  }
  local_9 = 0;
LAB_11007f24:
  if (iVar2 == 0x7d2) {
    cVar5 = FUN_110062b0((uint *)(param_2 + 0xc),'\0');
    if (cVar5 != '\0') {
      FUN_11006290((uint *)(param_2 + 0xc),'\0');
      local_9 = 0;
    }
  }
  return local_9;
}


