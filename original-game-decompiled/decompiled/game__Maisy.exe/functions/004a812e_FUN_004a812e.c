
/* ==== FUN_004a812e @ 004a812e ==== 
 * signature: undefined __thiscall FUN_004a812e(void * this, ulong param_1, ulong param_2, uint param_3)
 * body: 004a812e-004a8155
 */

void __thiscall FUN_004a812e(void *this,ulong param_1,ulong param_2,uint param_3)

{
  if (*(int **)((int)this + 0x38) == (int *)0x0) {
    CWnd::ModifyStyle(*(HWND__ **)((int)this + 0x1c),param_1,param_2,param_3);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x38) + 0x7c))();
  }
  return;
}


