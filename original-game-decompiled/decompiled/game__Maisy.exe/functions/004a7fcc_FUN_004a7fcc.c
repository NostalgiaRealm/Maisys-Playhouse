
/* ==== FUN_004a7fcc @ 004a7fcc ==== 
 * signature: undefined __thiscall FUN_004a7fcc(void * this, int param_1, UINT param_2, WPARAM param_3, LPARAM param_4)
 * body: 004a7fcc-004a7ffa
 */

void __thiscall FUN_004a7fcc(void *this,int param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  if (*(int **)((int)this + 0x34) == (int *)0x0) {
    SendDlgItemMessageA(*(HWND *)((int)this + 0x1c),param_1,param_2,param_3,param_4);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x34) + 0x80))();
  }
  return;
}


