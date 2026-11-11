
/* ==== FUN_0046df60 @ 0046df60 ==== 
 * signature: int * __thiscall FUN_0046df60(void * this, undefined4 * param_1)
 * body: 0046df60-0046dfc9
 */

int * __thiscall FUN_0046df60(void *this,undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00469f80(this);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_00469fb0(this);
    if (piVar2 != (int *)0x0) goto LAB_0046dfa2;
    piVar2 = *(int **)((int)this + 0x6a);
  }
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
    if (*(int **)((int)this + 0x62) != (int *)0x0) {
      piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x62) + 0x1b8))(param_1);
    }
  }
LAB_0046dfa2:
  if (((piVar2 != (int *)0x0) && (param_1 != (undefined4 *)0x0)) &&
     (cVar1 = (**(code **)*param_1)(piVar2), cVar1 == '\0')) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x1b4))(param_1);
  }
  return piVar2;
}


