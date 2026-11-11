
/* ==== FUN_0044b9a0 @ 0044b9a0 ==== 
 * signature: undefined __thiscall FUN_0044b9a0(void * this, undefined4 * param_1)
 * body: 0044b9a0-0044b9e0
 */

void __thiscall FUN_0044b9a0(void *this,undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x31c))();
  pcVar2 = *(code **)(iVar1 + 0x244);
  iVar3 = (*pcVar2)();
  if (iVar3 != 0) {
    (**(code **)(iVar1 + 0x250))(*param_1);
    piVar4 = (int *)(*pcVar2)();
    (**(code **)(*piVar4 + 0x11c))();
  }
  return;
}


