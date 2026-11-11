
/* ==== FUN_00438ad0 @ 00438ad0 ==== 
 * signature: int * __thiscall FUN_00438ad0(void * this, undefined4 * param_1)
 * body: 00438ad0-00438b25
 */

int * __thiscall FUN_00438ad0(void *this,undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00469f80(this);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_00469fb0(this);
    if (piVar2 != (int *)0x0) goto LAB_00438aff;
    piVar2 = (int *)(**(code **)(*(int *)this + 0x174))();
  }
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
LAB_00438aff:
  if ((param_1 != (undefined4 *)0x0) && (cVar1 = (**(code **)*param_1)(piVar2), cVar1 == '\0')) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x1b4))(param_1);
  }
  return piVar2;
}


