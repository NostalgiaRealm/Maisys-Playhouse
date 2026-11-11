
/* ==== FUN_00460be0 @ 00460be0 ==== 
 * signature: undefined __thiscall FUN_00460be0(void * this, int * param_1)
 * body: 00460be0-00460c1c
 */

void __thiscall FUN_00460be0(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x136);
  if (piVar1 != param_1) {
    *(int **)((int)this + 0x136) = param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 600))(0x26,0,0);
    }
    (**(code **)(*(int *)this + 0x424))(0);
  }
  return;
}


