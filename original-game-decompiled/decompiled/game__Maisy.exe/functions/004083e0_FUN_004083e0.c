
/* ==== FUN_004083e0 @ 004083e0 ==== 
 * signature: undefined __thiscall FUN_004083e0(void * this, int * param_1, int param_2)
 * body: 004083e0-00408444
 */

void __thiscall FUN_004083e0(void *this,int *param_1,int param_2)

{
  FUN_00408fd0((int)this);
  *(undefined1 *)((int)this + 0xa4) = 1;
  if (*(int **)((int)this + 0x4a) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x4a) + 0xe4))();
  }
  if (*(int **)((int)this + 0x4e) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x4e) + 0xe4))();
  }
  *(undefined1 *)((int)this + 0xa8) = 0;
  FUN_004061e0(this,*(int **)((int)this + 0x38));
  FUN_004054a0(this,*(int **)((int)this + 0x38),param_1,param_2);
  FUN_0046e940();
  return;
}


