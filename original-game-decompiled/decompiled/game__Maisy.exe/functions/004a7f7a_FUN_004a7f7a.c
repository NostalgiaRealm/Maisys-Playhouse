
/* ==== FUN_004a7f7a @ 004a7f7a ==== 
 * signature: undefined __thiscall FUN_004a7f7a(void * this, int param_1, BOOL * param_2, BOOL param_3)
 * body: 004a7f7a-004a7fa2
 */

void __thiscall FUN_004a7f7a(void *this,int param_1,BOOL *param_2,BOOL param_3)

{
  if (*(int **)((int)this + 0x34) == (int *)0x0) {
    GetDlgItemInt(*(HWND *)((int)this + 0x1c),param_1,param_2,param_3);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x34) + 0x78))();
  }
  return;
}


