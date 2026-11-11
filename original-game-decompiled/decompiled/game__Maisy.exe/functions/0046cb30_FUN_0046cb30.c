
/* ==== FUN_0046cb30 @ 0046cb30 ==== 
 * signature: undefined __thiscall FUN_0046cb30(void * this, int * param_1)
 * body: 0046cb30-0046cb62
 */

void __thiscall FUN_0046cb30(void *this,int *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((int)param_1 + 0x62);
  *(void **)((int)param_1 + 0x62) = this;
  *(int **)((int)this + 0x6e) = param_1;
  (**(code **)(*(int *)this + 0x2c4))(param_1);
  if (this != pvVar1) {
    (**(code **)(*param_1 + 0x280))(this);
  }
  return;
}


