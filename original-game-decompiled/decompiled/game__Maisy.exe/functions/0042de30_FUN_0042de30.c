
/* ==== FUN_0042de30 @ 0042de30 ==== 
 * signature: undefined __thiscall FUN_0042de30(void * this, int param_1)
 * body: 0042de30-0042de63
 */

void __thiscall FUN_0042de30(void *this,int param_1)

{
  FUN_00469760(this,param_1,0xffffffff,0);
  *(undefined2 *)((int)this + 0x22) = 0x43;
  (**(code **)(*(int *)this + 0x208))();
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0xc);
  }
  return;
}


