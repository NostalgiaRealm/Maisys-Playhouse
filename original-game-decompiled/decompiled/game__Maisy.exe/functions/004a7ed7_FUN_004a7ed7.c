
/* ==== FUN_004a7ed7 @ 004a7ed7 ==== 
 * signature: undefined __thiscall FUN_004a7ed7(void * this, int param_1, UINT param_2)
 * body: 004a7ed7-004a7efc
 */

void __thiscall FUN_004a7ed7(void *this,int param_1,UINT param_2)

{
  if (*(int **)((int)this + 0x34) == (int *)0x0) {
    CheckDlgButton(*(HWND *)((int)this + 0x1c),param_1,param_2);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x34) + 0x68))();
  }
  return;
}


