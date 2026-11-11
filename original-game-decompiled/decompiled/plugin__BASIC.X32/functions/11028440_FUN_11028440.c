
/* ==== FUN_11028440 @ 11028440 ==== 
 * signature: undefined1 __cdecl FUN_11028440(undefined4 * param_1, int param_2)
 * body: 11028440-110285be
 */

undefined1 __cdecl FUN_11028440(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_a9;
  int local_a8 [21];
  int local_54 [21];
  
  local_a9 = 1;
  iVar1 = *(int *)((int)param_1 + 0x1a);
  iVar2 = *(int *)(iVar1 + 0xc);
  local_54[0] = *(int *)(iVar1 + 0x10);
  local_a8[0] = FUN_1100fc40((int)param_1);
  if (iVar2 == 0x7d1) {
    iVar3 = *(int *)(param_2 + 0x10);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x10) == 0x12f) || (*(int *)(param_2 + 0x10) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
  }
  else if (iVar2 == 0x7d2) {
    iVar3 = *(int *)(param_2 + 0x10);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x10) == 0x12f) || (*(int *)(param_2 + 0x10) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
  }
  if (iVar2 == 0xdd) {
    if (*(short *)(param_2 + 0x18) == 0x1c) {
      *(undefined4 *)(param_2 + 0x1a) = 0;
    }
    if (*(short *)(param_2 + 0x46) == 0x1c) {
      *(undefined4 *)(param_2 + 0x48) = 0;
    }
  }
  if ((*(int *)(param_2 + 0x10) == iVar2) &&
     (((*(int *)(param_2 + 0x14) == 0 || (local_54[0] == *(int *)(param_2 + 0x14))) &&
      (*(int *)(iVar1 + 8) != local_a8[0])))) {
    FUN_1100fc40((int)param_1);
    FUN_110285c0(param_1,param_2,(int)local_a8);
    FUN_11028720(param_1,param_2,local_54,(int)local_a8);
    local_a9 = 0;
  }
  return local_a9;
}


