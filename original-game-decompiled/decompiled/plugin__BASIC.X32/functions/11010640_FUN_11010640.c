
/* ==== FUN_11010640 @ 11010640 ==== 
 * signature: bool __cdecl FUN_11010640(undefined4 * param_1, int param_2)
 * body: 11010640-11010844
 */

bool __cdecl FUN_11010640(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  
  bVar6 = true;
  iVar1 = *(int *)((int)param_1 + 0x1a);
  iVar2 = *(int *)(iVar1 + 0xc);
  iVar3 = *(int *)(iVar1 + 0x10);
  iVar4 = FUN_1100fc40((int)param_1);
  if (iVar4 == *(int *)(iVar1 + 8)) {
    return true;
  }
  if (iVar2 == 0x7d1) {
    iVar1 = *(int *)(param_2 + 0xc);
    if ((((iVar1 == 0x12d) || (iVar1 == 0x12e)) || ((0x130 < iVar1 && (iVar1 < 0x134)))) ||
       ((iVar1 == 0x135 || (iVar1 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0xc) == 0x12f) || (*(int *)(param_2 + 0xc) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if ((((iVar1 == 0x12d) || (iVar1 == 0x12e)) || ((0x130 < iVar1 && (iVar1 < 0x134)))) ||
       ((iVar1 == 0x135 || (iVar1 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x14) == 0x12f) || (*(int *)(param_2 + 0x14) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
  }
  else if (iVar2 == 0x7d2) {
    iVar1 = *(int *)(param_2 + 0xc);
    if ((((iVar1 == 0x12d) || (iVar1 == 0x12e)) || ((0x130 < iVar1 && (iVar1 < 0x134)))) ||
       ((iVar1 == 0x135 || (iVar1 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0xc) == 0x12f) || (*(int *)(param_2 + 0xc) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if ((((iVar1 == 0x12d) || (iVar1 == 0x12e)) || ((0x130 < iVar1 && (iVar1 < 0x134)))) ||
       ((iVar1 == 0x135 || (iVar1 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x14) == 0x12f) || (*(int *)(param_2 + 0x14) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
  }
  if ((*(int *)(param_2 + 0xc) == iVar2) && (*(int *)(param_2 + 0x10) == iVar3)) {
    bVar6 = false;
    FUN_11010940(param_1,param_2);
  }
  if (((*(int *)(param_2 + 0x14) == iVar2) && (*(int *)(param_2 + 0x18) == iVar3)) ||
     (iVar2 == 0x7d2)) {
    uVar5 = FUN_11010a40(param_1,param_2);
    bVar6 = (char)uVar5 == '\0';
  }
  return bVar6;
}


