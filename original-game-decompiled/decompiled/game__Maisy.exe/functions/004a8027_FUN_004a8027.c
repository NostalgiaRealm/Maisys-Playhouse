
/* ==== FUN_004a8027 @ 004a8027 ==== 
 * signature: undefined __thiscall FUN_004a8027(void * this, int param_1, LPCSTR param_2)
 * body: 004a8027-004a804f
 */

void __thiscall FUN_004a8027(void *this,int param_1,LPCSTR param_2)

{
  if (*(int **)((int)this + 0x34) == (int *)0x0) {
    SetDlgItemTextA(*(HWND *)((int)this + 0x1c),param_1,param_2);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x34) + 0x88))();
  }
  return;
}


