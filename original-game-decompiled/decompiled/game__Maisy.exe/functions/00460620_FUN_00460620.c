
/* ==== FUN_00460620 @ 00460620 ==== 
 * signature: undefined __thiscall FUN_00460620(void * this, int * param_1)
 * body: 00460620-00460656
 */

void __thiscall FUN_00460620(void *this,int *param_1)

{
  FUN_0046c1c0(this,param_1);
  if ((param_1 != (int *)0x0) && ((*(byte *)((int)param_1 + 0x1e) & 4) != 0)) {
    *(int *)((int)this + 0x94) = param_1[0x25];
    (**(code **)(*(int *)this + 0x334))(param_1);
  }
  return;
}


