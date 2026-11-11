
/* ==== FUN_0042e380 @ 0042e380 ==== 
 * signature: undefined __thiscall FUN_0042e380(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 0042e380-0042e3bd
 */

void __thiscall FUN_0042e380(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0x10))();
  iVar2 = (**(code **)(*piVar1 + 0x9c))(param_1,param_2,param_3);
  if (iVar2 == 0x10000) {
    FUN_0046b470(this,param_1,param_2,param_3);
  }
  return;
}


