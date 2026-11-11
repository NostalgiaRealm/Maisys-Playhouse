
/* ==== FUN_004a7fa3 @ 004a7fa3 ==== 
 * signature: undefined __thiscall FUN_004a7fa3(void * this, int param_1, LPSTR param_2, int param_3)
 * body: 004a7fa3-004a7fcb
 */

void __thiscall FUN_004a7fa3(void *this,int param_1,LPSTR param_2,int param_3)

{
  if (*(int **)((int)this + 0x34) == (int *)0x0) {
    GetDlgItemTextA(*(HWND *)((int)this + 0x1c),param_1,param_2,param_3);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x34) + 0x7c))();
  }
  return;
}


