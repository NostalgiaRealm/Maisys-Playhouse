
/* ==== FUN_004226d0 @ 004226d0 ==== 
 * signature: undefined __thiscall FUN_004226d0(void * this, int param_1)
 * body: 004226d0-0042270f
 */

void __thiscall FUN_004226d0(void *this,int param_1)

{
  FUN_00469760(this,param_1,0xffffffff,0);
  (**(code **)(*(int *)this + 0x208))();
  *(undefined2 *)((int)this + 0x22) = 0x3f;
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x40000000;
  DAT_004dc5a0 = DAT_004dc5a0 + 1;
  *(undefined4 *)((int)this + 0x92) = 0xffffffff;
  return;
}


