
/* ==== FUN_0044b040 @ 0044b040 ==== 
 * signature: undefined __thiscall FUN_0044b040(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, short * param_6, undefined4 param_7)
 * body: 0044b040-0044b0f2
 */

void __thiscall
FUN_0044b040(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,short *param_6,undefined4 param_7)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined1 local_2c;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  
  iVar1 = *(int *)this;
  pcVar2 = *(code **)(iVar1 + 0x244);
  iVar4 = (*pcVar2)();
  if (iVar4 != 0) {
    piVar5 = (int *)(*pcVar2)();
    cVar3 = (**(code **)(*piVar5 + 0x220))();
    if (cVar3 != '\0') {
      piVar5 = (int *)(*pcVar2)();
      (**(code **)(*piVar5 + 0x21c))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      return;
    }
  }
  local_40 = param_2;
  local_34 = param_4;
  local_30 = 0;
  local_3c = param_3;
  local_38 = param_3;
  local_2c = 0;
  local_22 = 0;
  local_2a = 0;
  if ((param_6 == (short *)0x0) || (*param_6 != 1)) {
    local_26 = 0;
  }
  else {
    local_26 = *(undefined4 *)(param_6 + 5);
  }
  (**(code **)(iVar1 + 0x2fc))(&local_40);
  return;
}


