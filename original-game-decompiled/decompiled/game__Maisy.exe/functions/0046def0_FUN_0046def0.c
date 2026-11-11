
/* ==== FUN_0046def0 @ 0046def0 ==== 
 * signature: int * __thiscall FUN_0046def0(void * this, int param_1)
 * body: 0046def0-0046df2f
 */

int * __thiscall FUN_0046def0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (0 < param_1) {
    for (piVar1 = (int *)(**(code **)(*(int *)this + 0x18c))();
        (param_1 = param_1 + -1, piVar2 = piVar1, param_1 != 0 &&
        (piVar2 = (int *)0x0, piVar1 != (int *)0x0));
        piVar1 = (int *)(**(code **)(*piVar1 + 0x174))()) {
    }
    piVar1 = (int *)0x0;
    if (param_1 < 1) {
      piVar1 = piVar2;
    }
    return piVar1;
  }
  return (int *)0x0;
}


