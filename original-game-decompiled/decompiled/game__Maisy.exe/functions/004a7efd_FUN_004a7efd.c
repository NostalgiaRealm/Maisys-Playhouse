
/* ==== FUN_004a7efd @ 004a7efd ==== 
 * signature: undefined __thiscall FUN_004a7efd(void * this, int param_1, int param_2, int param_3)
 * body: 004a7efd-004a7f25
 */

void __thiscall FUN_004a7efd(void *this,int param_1,int param_2,int param_3)

{
  if (*(int **)((int)this + 0x34) == (int *)0x0) {
    CheckRadioButton(*(HWND *)((int)this + 0x1c),param_1,param_2,param_3);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x34) + 0x6c))();
  }
  return;
}


