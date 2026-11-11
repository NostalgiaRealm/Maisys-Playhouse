
/* ==== FUN_004a7ffb @ 004a7ffb ==== 
 * signature: undefined __thiscall FUN_004a7ffb(void * this, int param_1, UINT param_2, BOOL param_3)
 * body: 004a7ffb-004a8026
 */

void __thiscall FUN_004a7ffb(void *this,int param_1,UINT param_2,BOOL param_3)

{
  if (*(int **)((int)this + 0x34) == (int *)0x0) {
    SetDlgItemInt(*(HWND *)((int)this + 0x1c),param_1,param_2,param_3);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x34) + 0x84))();
  }
  return;
}


