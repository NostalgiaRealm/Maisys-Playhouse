
/* ==== FUN_1100ddf0 @ 1100ddf0 ==== 
 * signature: undefined1 __cdecl FUN_1100ddf0(undefined4 * param_1, int param_2)
 * body: 1100ddf0-1100e004
 */

undefined1 __cdecl FUN_1100ddf0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
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
  if (((*(int *)(param_2 + 0x10) == iVar1) && (*(int *)(param_2 + 0x14) == iVar2)) &&
     ((*(byte *)(param_2 + 0x44) & 1) == 0)) {
    *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) | 1;
    FUN_1100e010(param_1,param_2);
  }
  else {
    if (((*(int *)(param_2 + 0x18) != iVar1) || (*(int *)(param_2 + 0x1c) != iVar2)) ||
       ((*(byte *)(param_2 + 0x44) & 1) == 0)) goto LAB_1100dfd6;
    *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xfe;
    FUN_1100ddd0(param_1);
  }
  local_1 = 0;
LAB_1100dfd6:
  if ((iVar1 == 0x7d2) && ((*(byte *)(param_2 + 0x44) & 1) != 0)) {
    *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xfe;
    FUN_1100ddd0(param_1);
    local_1 = 0;
  }
  return local_1;
}


