
/* ==== FUN_0044a7a0 @ 0044a7a0 ==== 
 * signature: int * __thiscall FUN_0044a7a0(void * this, undefined4 * param_1)
 * body: 0044a7a0-0044a7e5
 */

int * __thiscall FUN_0044a7a0(void *this,undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00469f80(this);
  if ((piVar2 == (int *)0x0) && (piVar2 = (int *)FUN_0044a740(), piVar2 == (int *)0x0)) {
    return (int *)0x0;
  }
  if ((param_1 != (undefined4 *)0x0) && (cVar1 = (**(code **)*param_1)(piVar2), cVar1 == '\0')) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x1b4))(param_1);
  }
  return piVar2;
}


