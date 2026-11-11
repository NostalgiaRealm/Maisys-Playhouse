
/* ==== FUN_1101d6f0 @ 1101d6f0 ==== 
 * signature: undefined1 __cdecl FUN_1101d6f0(undefined4 * param_1, int param_2)
 * body: 1101d6f0-1101d8d5
 */

undefined1 __cdecl FUN_1101d6f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1;
  
  local_1 = 1;
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
  }
  if ((*(int *)(param_2 + 0xc) == iVar1) && (*(int *)(param_2 + 0x10) == iVar2)) {
    FUN_11004840(param_1,4,1);
    local_1 = 0;
  }
  if ((*(int *)(param_2 + 0x14) == iVar1) && (*(int *)(param_2 + 0x18) == iVar2)) {
    FUN_11004840(param_1,4,0);
    local_1 = 0;
  }
  return local_1;
}


