
/* ==== FUN_0040c420 @ 0040c420 ==== 
 * signature: int * __thiscall FUN_0040c420(void * this, int param_1)
 * body: 0040c420-0040c45f
 */

int * __thiscall FUN_0040c420(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (0 < param_1) {
    for (piVar1 = (int *)(**(code **)(*(int *)this + 0x188))();
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


