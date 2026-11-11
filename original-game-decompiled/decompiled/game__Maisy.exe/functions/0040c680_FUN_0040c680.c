
/* ==== FUN_0040c680 @ 0040c680 ==== 
 * signature: undefined4 __thiscall FUN_0040c680(void * this, int * param_1, undefined4 param_2)
 * body: 0040c680-0040c6e2
 */

undefined4 __thiscall FUN_0040c680(void *this,int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (this == param_1) {
    return param_2;
  }
  iVar2 = *(int *)this;
  piVar1 = (int *)(**(code **)(iVar2 + 0x16c))();
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x1d0))(param_1,param_2);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(iVar2 + 0x19c))();
      if (iVar2 != 0) {
        uVar3 = (**(code **)(*piVar1 + 400))(iVar2);
        return uVar3;
      }
    }
  }
  return 0;
}


