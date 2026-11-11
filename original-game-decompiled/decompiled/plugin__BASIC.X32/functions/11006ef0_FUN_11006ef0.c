
/* ==== FUN_11006ef0 @ 11006ef0 ==== 
 * signature: undefined1 __cdecl FUN_11006ef0(undefined4 * param_1, int param_2)
 * body: 11006ef0-11007197
 */

undefined1 __cdecl FUN_11006ef0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_d;
  
  local_d = 1;
  puVar1 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar2 = puVar1[3];
  iVar3 = puVar1[4];
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
  }
  if ((iVar2 == 0xdd) && (*(short *)(param_2 + 0x38) == 0x1c)) {
    *(undefined4 *)(param_2 + 0x3a) = 0;
  }
  if ((*(int *)(param_2 + 0x10) == iVar2) &&
     ((*(int *)(param_2 + 0x14) == 0 || (*(int *)(param_2 + 0x14) == iVar3)))) {
    puVar5 = puVar1;
    puVar6 = (undefined4 *)(param_2 + 0x92);
    for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
    FUN_11002670((short *)(puVar1 + 9),(short *)(param_2 + 0xb6));
    FUN_11006e10(param_1,param_2);
    local_d = 0;
  }
  if ((*(int *)(param_2 + 0x18) == iVar2) && (*(int *)(param_2 + 0x1c) == iVar3)) {
    *(undefined4 *)(param_2 + 0x7c) = 0;
    FUN_11004840(param_1,10,0);
    local_d = 0;
  }
  if (iVar2 == 0x7d2) {
    if (*(int *)(param_2 + 0x7c) != 0) {
      *(undefined4 *)(param_2 + 0x7c) = 0;
      local_d = 0;
    }
    FUN_11004840(param_1,10,0);
    FUN_110048a0(param_1,0xe,0,(undefined2 *)(param_2 + 0x80));
    *(undefined2 *)(param_2 + 0x80) = 0x69;
    *(undefined4 *)(param_2 + 0x86) = 0;
    *(undefined4 *)(param_2 + 0x8a) = 0;
    *(undefined4 *)(param_2 + 0x82) = 0;
    *(undefined4 *)(param_2 + 0x8e) = 0;
  }
  return local_d;
}


