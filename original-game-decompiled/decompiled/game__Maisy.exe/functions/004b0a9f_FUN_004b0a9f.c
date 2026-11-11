
/* ==== FUN_004b0a9f @ 004b0a9f ==== 
 * signature: undefined __thiscall FUN_004b0a9f(void * this, int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 004b0a9f-004b0ae5
 */

void __thiscall FUN_004b0a9f(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int local_8;
  
  iVar1 = *(int *)this;
  local_8 = (**(code **)(iVar1 + 100))();
  if (local_8 != 0) {
    pcVar2 = *(code **)(iVar1 + 0x68);
    do {
      piVar3 = (int *)(*pcVar2)(&local_8);
      if (param_1 != piVar3) {
        (**(code **)(*piVar3 + 0xf0))(param_1,param_2,param_3);
      }
    } while (local_8 != 0);
  }
  return;
}


