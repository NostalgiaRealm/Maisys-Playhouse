
/* ==== FUN_00478d60 @ 00478d60 ==== 
 * signature: uint __thiscall FUN_00478d60(void * this, char * param_1, undefined4 param_2, short param_3, char * param_4, char * param_5)
 * body: 00478d60-00478e34
 */

uint __thiscall
FUN_00478d60(void *this,char *param_1,undefined4 param_2,short param_3,char *param_4,char *param_5)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  int iVar3;
  char *pcVar4;
  int local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_10 = 0;
  if (param_1 == (char *)0x0) {
LAB_00478d98:
    local_1c = (char *)0x0;
  }
  else {
    iVar3 = -1;
    pcVar4 = param_1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar3 == -2) goto LAB_00478d98;
    local_1c = FUN_0043f650(param_1);
  }
  if (param_3 < 0) {
    local_20 = *(int *)((int)this + 0x5a) + 1;
    *(int *)((int)this + 0x5a) = local_20;
  }
  else {
    local_20 = (int)param_3;
  }
  uVar2 = (undefined2)local_20;
  if (param_4 == (char *)0x0) {
LAB_00478de0:
    local_18 = (char *)0x0;
  }
  else {
    iVar3 = -1;
    pcVar4 = param_4;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar3 == -2) goto LAB_00478de0;
    local_18 = FUN_0043f650(param_4);
  }
  if (param_5 != (char *)0x0) {
    iVar3 = -1;
    pcVar4 = param_5;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      local_14 = FUN_0043f650(param_5);
      goto LAB_00478e13;
    }
  }
  local_14 = (char *)0x0;
LAB_00478e13:
  local_8 = 0;
  (**(code **)(**(int **)((int)this + 0x54) + 0xe8))(&local_20);
  return CONCAT22(extraout_var,uVar2);
}


