
/* ==== FUN_0042e490 @ 0042e490 ==== 
 * signature: undefined __thiscall FUN_0042e490(void * this, int param_1, short * param_2)
 * body: 0042e490-0042e4be
 */

void __thiscall FUN_0042e490(void *this,int param_1,short *param_2)

{
  int *piVar1;
  
  FUN_0046b690(this,param_1,param_2);
  piVar1 = (int *)(**(code **)(*(int *)this + 0x10))();
  (**(code **)(*piVar1 + 0x90))(param_1,param_2);
  return;
}


