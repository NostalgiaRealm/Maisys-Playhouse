
/* ==== FUN_004b33cd @ 004b33cd ==== 
 * signature: undefined __thiscall FUN_004b33cd(void * this, int param_1)
 * body: 004b33cd-004b33e4
 */

void __thiscall FUN_004b33cd(void *this,int param_1)

{
  *(int *)((int)this + 0x48) = param_1;
  if (DAT_004dd430 == 0) {
    (**(code **)(*(int *)this + 0x54))();
  }
  return;
}


