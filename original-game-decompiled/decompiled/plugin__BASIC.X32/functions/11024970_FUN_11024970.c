
/* ==== FUN_11024970 @ 11024970 ==== 
 * signature: undefined1 __cdecl FUN_11024970(undefined4 * param_1, int param_2)
 * body: 11024970-11024cdb
 */

undefined1 __cdecl FUN_11024970(undefined4 *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  undefined4 *puVar7;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  
  local_30[0] = 1;
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x1a) + 0xc);
  iVar5 = *(int *)(*(int *)((int)param_1 + 0x1a) + 0x10);
  FUN_1100fc40((int)param_1);
  if (iVar4 == 0x7d1) {
    iVar1 = *(int *)(param_2 + 0x10);
    if ((((iVar1 == 0x12d) || (iVar1 == 0x12e)) || ((0x130 < iVar1 && (iVar1 < 0x134)))) ||
       ((iVar1 == 0x135 || (iVar1 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x10) == 0x12f) || (*(int *)(param_2 + 0x10) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
    iVar1 = *(int *)(param_2 + 0x18);
    if ((((iVar1 == 0x12d) || (iVar1 == 0x12e)) || ((0x130 < iVar1 && (iVar1 < 0x134)))) ||
       ((iVar1 == 0x135 || (iVar1 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x18) == 0x12f) || (*(int *)(param_2 + 0x18) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
  }
  else if (iVar4 == 0x7d2) {
    iVar1 = *(int *)(param_2 + 0x10);
    if ((((iVar1 == 0x12d) || (iVar1 == 0x12e)) || ((0x130 < iVar1 && (iVar1 < 0x134)))) ||
       ((iVar1 == 0x135 || (iVar1 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x10) == 0x12f) || (*(int *)(param_2 + 0x10) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    iVar1 = *(int *)(param_2 + 0x18);
    if ((((iVar1 == 0x12d) || (iVar1 == 0x12e)) || ((0x130 < iVar1 && (iVar1 < 0x134)))) ||
       ((iVar1 == 0x135 || (iVar1 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x18) == 0x12f) || (*(int *)(param_2 + 0x18) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (((iVar4 == iVar1) && (*(int *)(param_2 + 0x14) == iVar5)) || (iVar4 == 0x44d)) {
    FUN_11006270((uint *)(param_2 + 0xc),'\0');
    FUN_11024ce0(param_1,param_2,1);
  }
  else {
    if (iVar4 == 3) {
      if (((iVar1 == 0x7d1) || (iVar1 == 0xc9)) || (iVar1 == 0x65)) {
        FUN_11006270((uint *)(param_2 + 0xc),'\0');
        FUN_11024ce0(param_1,param_2,1);
      }
      else {
        cVar2 = FUN_110062b0((uint *)(param_2 + 0xc),'\0');
        if (cVar2 != '\0') {
          FUN_11006290((uint *)(param_2 + 0xc),'\0');
        }
      }
      goto LAB_11024bde;
    }
    if ((*(int *)(param_2 + 0x18) != iVar4) || (*(int *)(param_2 + 0x1c) != iVar5))
    goto LAB_11024bde;
    cVar2 = FUN_110062b0((uint *)(param_2 + 0xc),'\0');
    if (cVar2 == '\0') goto LAB_11024bde;
    FUN_11024ce0(param_1,param_2,0);
    FUN_11006290((uint *)(param_2 + 0xc),'\0');
  }
  local_30[0] = 0;
LAB_11024bde:
  if (iVar4 == 0x7d2) {
    cVar2 = FUN_110062b0((uint *)(param_2 + 0xc),'\0');
    if (cVar2 != '\0') {
      FUN_11006290((uint *)(param_2 + 0xc),'\0');
      local_30[0] = 0;
    }
  }
  if (((iVar4 == 0xd6) && (*(short *)(param_2 + 0x56) != 0)) && (*(int *)(param_2 + 0x58) != 0)) {
    puVar7 = (undefined4 *)local_30;
    uVar3 = FUN_1100fc30((int)param_1);
    FUN_1100fc50(param_1,uVar3,puVar7);
    if ((((int)*(short *)(param_2 + 0x60) - (int)*(short *)(param_2 + 0x5c)) + (int)(short)local_2c
         != (int)(short)local_28) ||
       (((int)*(short *)(param_2 + 0x62) - (int)*(short *)(param_2 + 0x5e)) + (int)local_2c._2_2_ !=
        (int)local_28._2_2_)) {
      sVar6 = 0;
      iVar4 = FUN_11002840(param_1,*(undefined4 *)(param_2 + 0x58));
      if (0 < *(short *)(param_2 + 0x56)) {
        do {
          iVar5 = (int)sVar6;
          sVar6 = sVar6 + 1;
          FUN_11024280((int *)(iVar4 + iVar5 * 8),(short *)(param_2 + 0x5c),(short *)&local_2c);
        } while (sVar6 < *(short *)(param_2 + 0x56));
      }
      *(undefined4 *)(param_2 + 0x5c) = local_2c;
      *(undefined4 *)(param_2 + 0x60) = local_28;
      FUN_110028a0(param_1,*(undefined4 *)(param_2 + 0x58));
    }
    local_30[0] = 0;
  }
  return local_30[0];
}


