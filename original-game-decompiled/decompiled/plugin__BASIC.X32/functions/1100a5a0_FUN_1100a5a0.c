
/* ==== FUN_1100a5a0 @ 1100a5a0 ==== 
 * signature: undefined1 __cdecl FUN_1100a5a0(undefined4 * param_1, int param_2)
 * body: 1100a5a0-1100a732
 */

undefined1 __cdecl FUN_1100a5a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_5;
  
  local_5 = 1;
  iVar1 = *(int *)((int)param_1 + 0x1a);
  iVar2 = *(int *)(iVar1 + 0xc);
  iVar3 = *(int *)(iVar1 + 0x10);
  FUN_1100fc40((int)param_1);
  if (iVar2 == 0x7d1) {
    iVar4 = *(int *)(param_2 + 0x10);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x10) == 0x12f) || (*(int *)(param_2 + 0x10) == 0x130)) {
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
    FUN_110048a0(param_1,0xe,0,param_2 + 0x5e);
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_2 + 0x60) = 0;
    *(undefined4 *)(param_2 + 0x6c) = 0;
    *(undefined2 *)(param_2 + 0x5e) = 0x69;
  }
  else if ((iVar2 == 0xdd) && (*(short *)(param_2 + 0x30) == 0x1c)) {
    *(undefined4 *)(param_2 + 0x32) = 0;
  }
  if ((*(int *)(param_2 + 0x10) == iVar2) &&
     ((*(int *)(param_2 + 0x14) == 0 || (*(int *)(param_2 + 0x14) == iVar3)))) {
    FUN_11017d10(param_1,*(undefined4 *)(param_2 + 0x18),(short *)(param_2 + 0x20),
                 *(undefined4 *)(param_2 + 0x1c),*(uint *)(param_2 + 0xc),param_2 + 0x5e,iVar1,
                 (short *)(param_2 + 0x30),'\0','\x01');
    local_5 = 0;
  }
  return local_5;
}


