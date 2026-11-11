
/* ==== FUN_11022d10 @ 11022d10 ==== 
 * signature: undefined1 __cdecl FUN_11022d10(undefined4 * param_1, int param_2)
 * body: 11022d10-11022ff7
 */

undefined1 __cdecl FUN_11022d10(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_1d;
  undefined4 *local_14 [3];
  undefined4 local_8;
  
  local_1d = 1;
  local_14[0] = *(undefined4 **)((int)param_1 + 0x1a);
  iVar1 = local_14[0][3];
  iVar2 = local_14[0][4];
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
  if ((iVar1 == 0xdd) && (*(short *)(param_2 + 0x38) == 0x1c)) {
    *(undefined4 *)(param_2 + 0x3a) = 0;
  }
  if ((*(int *)(param_2 + 0x10) == iVar1) &&
     (((*(int *)(param_2 + 0x14) == 0 || (iVar2 == *(int *)(param_2 + 0x14))) &&
      (*(char *)(param_2 + 0x66) == '\0')))) {
    *(undefined1 *)(param_2 + 0x66) = 1;
    puVar4 = local_14[0];
    puVar5 = (undefined4 *)(param_2 + 0x7a);
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
    FUN_11002670((short *)(local_14[0] + 9),(short *)(param_2 + 0x9e));
    FUN_11004840(param_1,0,1);
    local_8 = FUN_1100fc30((int)param_1);
    FUN_110221c0(param_1,(int)local_14,param_2);
    local_1d = 0;
  }
  if (((*(int *)(param_2 + 0x18) == iVar1) && (*(int *)(param_2 + 0x1c) == iVar2)) &&
     (*(char *)(param_2 + 0x66) != '\0')) {
    *(undefined1 *)(param_2 + 0x66) = 0;
    FUN_11004840(param_1,0,0);
    local_1d = 0;
  }
  if (iVar1 == 0x7d2) {
    if (*(char *)(param_2 + 0x66) != '\0') {
      *(undefined1 *)(param_2 + 0x66) = 0;
      local_1d = 0;
    }
    *(undefined2 *)(param_2 + 0xcc) = 0;
    *(undefined2 *)(param_2 + 0xce) = 0;
    FUN_11004840(param_1,0,0);
    if (*(int *)(param_2 + 0xd0) != 0) {
      FUN_11002730(param_1,*(int *)(param_2 + 0xd0));
      *(undefined4 *)(param_2 + 0xd0) = 0;
    }
    FUN_110048a0(param_1,0xe,0,(undefined2 *)(param_2 + 0x68));
    *(undefined2 *)(param_2 + 0x68) = 0x69;
    *(undefined4 *)(param_2 + 0x6e) = 0;
    *(undefined4 *)(param_2 + 0x72) = 0;
    *(undefined4 *)(param_2 + 0x6a) = 0;
    *(undefined4 *)(param_2 + 0x76) = 0;
  }
  return local_1d;
}


