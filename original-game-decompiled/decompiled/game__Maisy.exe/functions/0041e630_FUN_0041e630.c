
/* ==== FUN_0041e630 @ 0041e630 ==== 
 * signature: undefined __thiscall FUN_0041e630(void * this, int param_1, int param_2, int param_3)
 * body: 0041e630-0041e65e
 */

void __thiscall FUN_0041e630(void *this,int param_1,int param_2,int param_3)

{
  *(int *)((int)this + 0x144) = param_1;
  *(int *)((int)this + 0x148) = param_2;
  *(int *)((int)this + 0x14c) = param_3;
  (**(code **)(*(int *)this + 0x160))(10,1);
  return;
}


