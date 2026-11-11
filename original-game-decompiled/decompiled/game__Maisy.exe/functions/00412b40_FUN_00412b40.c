
/* ==== FUN_00412b40 @ 00412b40 ==== 
 * signature: int * __thiscall FUN_00412b40(void * this, undefined4 * param_1)
 * body: 00412b40-00412bc0
 */

int * __thiscall FUN_00412b40(void *this,undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)this + 0x3e);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0x218))();
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
      if ((*(int **)((int)this + 0x3a) != (int *)0x0) &&
         (piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x3a) + 0x18c))(),
         piVar2 == (int *)0x0)) {
        piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x3a) + 0x1b8))(param_1);
      }
    }
    else {
      piVar2 = (int *)(**(code **)(*piVar2 + 0x1b8))(param_1);
    }
  }
  if (((piVar2 != (int *)0x0) && (param_1 != (undefined4 *)0x0)) &&
     (cVar1 = (**(code **)*param_1)(piVar2), cVar1 == '\0')) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x1b4))(param_1);
  }
  return piVar2;
}


