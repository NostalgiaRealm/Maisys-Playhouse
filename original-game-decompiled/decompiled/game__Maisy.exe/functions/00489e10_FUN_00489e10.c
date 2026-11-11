
/* ==== FUN_00489e10 @ 00489e10 ==== 
 * signature: undefined4 __stdcall FUN_00489e10(char * param_1, undefined4 param_2)
 * body: 00489e10-00489e80
 */

undefined4 FUN_00489e10(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char *local_18;
  undefined4 local_14;
  int *local_8;
  
  local_18 = FUN_0043b970(param_1);
  uVar4 = 0xffffffff;
  pcVar5 = local_18;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar6 = 0;
  if (~uVar4 != 1) {
    do {
      pcVar5 = local_18 + uVar6;
      uVar6 = uVar6 + 1;
      iVar2 = _tolower((int)*pcVar5);
      *pcVar5 = (char)iVar2;
    } while (uVar6 < ~uVar4 - 1);
  }
  local_14 = param_2;
  piVar3 = (int *)FUN_00489f20(local_8);
  (**(code **)(*piVar3 + 0xe8))(&local_18);
  return 0;
}


