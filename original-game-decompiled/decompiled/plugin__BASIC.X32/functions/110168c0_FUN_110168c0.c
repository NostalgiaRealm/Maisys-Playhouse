
/* ==== FUN_110168c0 @ 110168c0 ==== 
 * signature: undefined1 __cdecl FUN_110168c0(undefined4 * param_1, int param_2)
 * body: 110168c0-11016baa
 */

undefined1 __cdecl FUN_110168c0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  DWORD DVar6;
  undefined1 local_1;
  
  local_1 = 1;
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x1a) + 0xc);
  iVar2 = *(int *)(*(int *)((int)param_1 + 0x1a) + 0x10);
  if (iVar1 == 0x7d1) {
    iVar3 = *(int *)(param_2 + 0x12);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x12) == 0x12f) || (*(int *)(param_2 + 0x12) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
    iVar3 = *(int *)(param_2 + 0x1a);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x1a) == 0x12f) || (*(int *)(param_2 + 0x1a) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
  }
  else if (iVar1 == 0x7d2) {
    iVar3 = *(int *)(param_2 + 0x12);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x12) == 0x12f) || (*(int *)(param_2 + 0x12) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    iVar3 = *(int *)(param_2 + 0x1a);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x1a) == 0x12f) || (*(int *)(param_2 + 0x1a) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
  }
  if ((*(int *)(param_2 + 0x12) == iVar1) && (*(int *)(param_2 + 0x16) == iVar2)) {
    cVar4 = FUN_110062b0((uint *)(param_2 + 0xc),'\0');
    if (cVar4 != '\0') goto LAB_11016af9;
    uVar5 = FUN_1100fc30((int)param_1);
    FUN_11006270((uint *)(param_2 + 0xc),'\0');
    FUN_11004840(param_1,5,1);
    FUN_1101db80(param_1,uVar5,6,0,0,0,0);
    if (99 < *(short *)(param_2 + 0x10)) {
      FUN_11004840(param_1,10,1);
      *(undefined4 *)(param_2 + 0x2a) = 1;
      DVar6 = timeGetTime();
      *(uint *)(param_2 + 0x26) = (DVar6 * 6) / 100 + 1;
    }
  }
  else {
LAB_11016af9:
    if ((*(int *)(param_2 + 0x1a) != iVar1) || (*(int *)(param_2 + 0x1e) != iVar2))
    goto LAB_11016b68;
    cVar4 = FUN_110062b0((uint *)(param_2 + 0xc),'\0');
    if (cVar4 == '\0') goto LAB_11016b68;
    uVar5 = FUN_1100fc30((int)param_1);
    FUN_11006290((uint *)(param_2 + 0xc),'\0');
    FUN_11004840(param_1,5,0);
    FUN_1101db80(param_1,uVar5,6,0,0,0,0);
    if (99 < *(short *)(param_2 + 0x10)) {
      FUN_11004840(param_1,10,0);
    }
  }
  local_1 = 0;
LAB_11016b68:
  if (iVar1 == 0x7d2) {
    cVar4 = FUN_110062b0((uint *)(param_2 + 0xc),'\0');
    if (cVar4 != '\0') {
      FUN_11006290((uint *)(param_2 + 0xc),'\0');
      local_1 = 0;
    }
    FUN_11004840(param_1,5,0);
  }
  return local_1;
}


