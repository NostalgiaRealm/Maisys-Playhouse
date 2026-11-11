
/* ==== FUN_0045f0b0 @ 0045f0b0 ==== 
 * signature: undefined __thiscall FUN_0045f0b0(void * this, undefined4 param_1)
 * body: 0045f0b0-0045f169
 */

void __thiscall FUN_0045f0b0(void *this,undefined4 param_1)

{
  int iVar1;
  tagRECT local_14;
  
  if (*(int **)((int)this + 0xc4) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)((int)this + 0xc4) + 0x10))();
    if (*(char *)(iVar1 + 0x89) != '\0') {
      GetWindowRect(*(HWND *)((int)this + 0x1c),&local_14);
      local_14.right = (short)param_1 + local_14.left;
      local_14.bottom = param_1._2_2_ + local_14.top;
      CWnd::MoveWindow(this,local_14.left,local_14.top,local_14.right - local_14.left,
                       local_14.bottom - local_14.top,1);
      *(short *)((int)this + 0xdc) = param_1._2_2_;
      return;
    }
  }
  GetWindowRect(*(HWND *)((int)this + 0x1c),&local_14);
  local_14.right = (short)param_1 + local_14.left;
  local_14.bottom = param_1._2_2_ + local_14.top;
  CWnd::MoveWindow(this,local_14.left,local_14.top,local_14.right - local_14.left,
                   local_14.bottom - local_14.top,1);
  return;
}


