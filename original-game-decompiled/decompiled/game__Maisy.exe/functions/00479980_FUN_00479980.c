
/* ==== FUN_00479980 @ 00479980 ==== 
 * signature: undefined __thiscall FUN_00479980(void * this, int param_1)
 * body: 00479980-004799d7
 */

void __thiscall FUN_00479980(void *this,int param_1)

{
  if (*(int *)(param_1 + 4) == 1) {
    (**(code **)(**(int **)((int)this + 0x2e) + 0x118))(1,2,param_1);
  }
  if (*(int *)(param_1 + 0x18) == 1) {
    (**(code **)(**(int **)((int)this + 0x2e) + 0x118))(1,0xd,param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x2c) == 1) {
    (**(code **)(**(int **)((int)this + 0x2e) + 0x118))(1,0xe,param_1 + 0x28);
  }
  return;
}


