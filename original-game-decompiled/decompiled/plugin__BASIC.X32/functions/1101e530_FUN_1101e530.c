
/* ==== FUN_1101e530 @ 1101e530 ==== 
 * signature: undefined4 __cdecl FUN_1101e530(undefined4 * param_1, int param_2)
 * body: 1101e530-1101e797
 */

undefined4 __cdecl FUN_1101e530(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined3 uVar6;
  undefined3 extraout_var;
  undefined1 local_1;
  
  local_1 = true;
  iVar4 = *(int *)((int)param_1 + 0x1a);
  iVar2 = *(int *)(iVar4 + 0xc);
  iVar3 = *(int *)(iVar4 + 0x10);
  if (iVar2 == 0x7d1) {
    iVar4 = *(int *)(param_2 + 0xe);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0xe) == 0x12f) || (*(int *)(param_2 + 0xe) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
    iVar4 = *(int *)(param_2 + 0x16);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    iVar4 = *(int *)(param_2 + 0x16);
    if ((iVar4 == 0x12f) || (iVar4 == 0x130)) {
      iVar4 = FUN_11004840(param_1,9,1);
    }
  }
  else if (iVar2 == 0x7d2) {
    iVar4 = *(int *)(param_2 + 0xe);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0xe) == 0x12f) || (*(int *)(param_2 + 0xe) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    iVar4 = *(int *)(param_2 + 0x16);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    iVar4 = *(int *)(param_2 + 0x16);
    if ((iVar4 == 0x12f) || (iVar4 == 0x130)) {
      iVar4 = FUN_11004840(param_1,9,0);
    }
  }
  if ((iVar2 == 0xdd) && (*(short *)(param_2 + 0x1e) == 0x1c)) {
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  if (iVar2 == 0x7d1) {
    bVar1 = *(byte *)(param_2 + 0xc);
    *(byte *)(param_2 + 0xc) = bVar1 & 0xfd;
    *(byte *)(param_2 + 0xc) = bVar1 & 0xfc;
    iVar4 = FUN_1101e810(param_1,param_2);
  }
  if (iVar2 == 0x7d2) {
    uVar5 = FUN_1101e860((int)param_1,param_2);
    local_1 = (char)uVar5 == '\0';
    *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) & 0xfe;
    iVar4 = FUN_11004840(param_1,10,0);
  }
  else if ((((*(byte *)(param_2 + 0xc) & 1) == 0) && (*(int *)(param_2 + 0xe) == iVar2)) &&
          (*(int *)(param_2 + 0x12) == iVar3)) {
    iVar4 = FUN_1101e8a0(param_1,param_2);
    local_1 = false;
  }
  uVar6 = (undefined3)((uint)iVar4 >> 8);
  if ((((*(byte *)(param_2 + 0xc) & 1) != 0) && (*(int *)(param_2 + 0x16) == iVar2)) &&
     (*(int *)(param_2 + 0x1a) == iVar3)) {
    *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) & 0xfe;
    FUN_1101e7a0(0x1f6,param_1);
    FUN_11004840(param_1,10,0);
    local_1 = false;
    uVar6 = extraout_var;
  }
  return CONCAT31(uVar6,local_1);
}


