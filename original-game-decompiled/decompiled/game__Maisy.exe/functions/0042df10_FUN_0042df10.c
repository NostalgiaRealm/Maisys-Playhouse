
/* ==== FUN_0042df10 @ 0042df10 ==== 
 * signature: int * __thiscall FUN_0042df10(void * this, undefined4 * param_1)
 * body: 0042df10-0042df55
 */

int * __thiscall FUN_0042df10(void *this,undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00469f80(this);
  if ((piVar2 == (int *)0x0) && (piVar2 = FUN_0042de70(this), piVar2 == (int *)0x0)) {
    return (int *)0x0;
  }
  if ((param_1 != (undefined4 *)0x0) && (cVar1 = (**(code **)*param_1)(piVar2), cVar1 == '\0')) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x1b4))(param_1);
  }
  return piVar2;
}


