
/* ==== FUN_00489e90 @ 00489e90 ==== 
 * signature: undefined4 __thiscall FUN_00489e90(void * this, char * param_1, int param_2)
 * body: 00489e90-00489f1a
 */

undefined4 __thiscall FUN_00489e90(void *this,char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  local_14 = FUN_0043b970(param_1);
  uVar4 = 0xffffffff;
  pcVar5 = local_14;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar6 = 0;
  if (~uVar4 != 1) {
    do {
      pcVar5 = local_14 + uVar6;
      uVar6 = uVar6 + 1;
      iVar2 = _tolower((int)*pcVar5);
      *pcVar5 = (char)iVar2;
    } while (uVar6 < ~uVar4 - 1);
  }
  local_10 = 0;
  local_8 = *(undefined2 *)(param_2 + 6);
  local_c = *(undefined4 *)(param_2 + 2);
  local_6 = *(undefined2 *)(param_2 + 8);
  piVar3 = (int *)FUN_00489f20(this);
  (**(code **)(*piVar3 + 0xe8))(&local_14);
  return 0;
}


