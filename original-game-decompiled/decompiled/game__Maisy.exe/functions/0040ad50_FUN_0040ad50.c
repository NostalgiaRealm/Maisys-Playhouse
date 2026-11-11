
/* ==== FUN_0040ad50 @ 0040ad50 ==== 
 * signature: undefined __thiscall FUN_0040ad50(void * this, undefined4 param_1)
 * body: 0040ad50-0040adbb
 */

void __thiscall FUN_0040ad50(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 0x144);
  if (piVar1 == (int *)0x0) {
    iVar2 = FUN_00409610((int)this);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00409610((int)this);
      (**(code **)(*piVar1 + 0x294))(param_1);
    }
    iVar2 = FUN_00409600((int)this);
    if (iVar2 == 0) goto LAB_0040ada8;
    piVar1 = (int *)FUN_00409600((int)this);
  }
  (**(code **)(*piVar1 + 0x294))(param_1);
LAB_0040ada8:
  iVar2 = (**(code **)(*(int *)this + 0x10))();
  FUN_0045a200(iVar2);
  return;
}


