
/* ==== FUN_004a81a4 @ 004a81a4 ==== 
 * signature: undefined __thiscall FUN_004a81a4(void * this, LPSTR param_1, int param_2)
 * body: 004a81a4-004a81cc
 */

void __thiscall FUN_004a81a4(void *this,LPSTR param_1,int param_2)

{
  if (*(int **)((int)this + 0x38) == (int *)0x0) {
    GetWindowTextA(*(HWND *)((int)this + 0x1c),param_1,param_2);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x38) + 0x88))();
  }
  return;
}


