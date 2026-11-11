
/* ==== FUN_0048c660 @ 0048c660 ==== 
 * signature: undefined4 __cdecl FUN_0048c660(int * param_1, int param_2, char * param_3)
 * body: 0048c660-0048c793
 */

undefined4 __cdecl FUN_0048c660(int *param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *local_1c [5];
  undefined4 local_8;
  
  cVar1 = '\0';
  local_8 = 0x10000;
  if (((param_1 == (int *)0x0) || (param_3 == (char *)0x0)) || (param_2 == 0)) {
    return 0x10000;
  }
  iVar2 = (**(code **)(*param_1 + 0x10))();
  if (iVar2 == 0) {
    return 0x10000;
  }
  iVar2 = FUN_00458a00(iVar2);
  iVar2 = *(int *)(iVar2 + 4);
  piVar3 = (int *)FUN_00466a90(iVar2);
  piVar3 = (int *)(**(code **)(*piVar3 + 0x108))(2);
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 0x11c))(0,*(undefined4 *)(param_2 + 6),0,local_1c,1);
  }
  if (cVar1 == '\0') {
    piVar3 = (int *)FUN_00466a90(iVar2);
    piVar3 = (int *)(**(code **)(*piVar3 + 0x108))(6);
    cVar1 = '\0';
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x11c))
                        (0,*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 6),local_1c,1);
    }
    if (cVar1 != '\0') goto LAB_0048c754;
    piVar3 = (int *)FUN_00466a90(iVar2);
    piVar3 = (int *)(**(code **)(*piVar3 + 0x108))(7);
    cVar1 = '\0';
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x11c))
                        (0,*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 6),local_1c,1);
    }
  }
  if (cVar1 == '\0') {
    return local_8;
  }
LAB_0048c754:
  uVar4 = 0xffffffff;
  do {
    pcVar6 = local_1c[0];
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = local_1c[0] + 1;
    cVar1 = *local_1c[0];
    local_1c[0] = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)param_3 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    param_3 = param_3 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    param_3 = param_3 + 1;
  }
  return 0;
}


