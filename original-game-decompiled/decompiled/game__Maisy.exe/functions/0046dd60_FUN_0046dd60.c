
/* ==== FUN_0046dd60 @ 0046dd60 ==== 
 * signature: undefined __thiscall FUN_0046dd60(void * this, int * param_1, undefined4 param_2)
 * body: 0046dd60-0046dda9
 */

void __thiscall FUN_0046dd60(void *this,int *param_1,undefined4 param_2)

{
  int *piVar1;
  int local_14;
  byte local_e;
  
  do {
    FUN_00486e50(param_1,&local_14);
    piVar1 = FUN_00466ac0(param_1,param_2,&local_14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*(int *)this + 0x2b8))(piVar1,1);
    }
  } while ((local_e & 2) == 0);
  return;
}


