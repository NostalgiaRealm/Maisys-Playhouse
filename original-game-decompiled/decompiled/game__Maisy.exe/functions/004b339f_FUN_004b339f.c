
/* ==== FUN_004b339f @ 004b339f ==== 
 * signature: undefined __thiscall FUN_004b339f(void * this, int param_1, int param_2, int param_3, int param_4)
 * body: 004b339f-004b33cc
 */

void __thiscall FUN_004b339f(void *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)((int)this + 0x58) = param_3;
  *(int *)((int)this + 0x5c) = param_4;
  *(int *)((int)this + 0x44) = param_1;
  *(int *)((int)this + 0x40) = param_2;
  if (DAT_004dd430 == 0) {
    (**(code **)(*(int *)this + 0x54))();
  }
  return;
}


