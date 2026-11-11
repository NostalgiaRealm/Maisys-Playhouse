
/* ==== FUN_0045f050 @ 0045f050 ==== 
 * signature: undefined __thiscall FUN_0045f050(void * this, undefined4 param_1)
 * body: 0045f050-0045f0a6
 */

void __thiscall FUN_0045f050(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  tagRECT local_14;
  
  GetWindowRect(*(HWND *)((int)this + 0x1c),&local_14);
  iVar1 = (short)param_1 - local_14.left;
  iVar2 = param_1._2_2_ - local_14.top;
  local_14.left = local_14.left + iVar1;
  local_14.right = local_14.right + iVar1;
  local_14.top = local_14.top + iVar2;
  local_14.bottom = local_14.bottom + iVar2;
  CWnd::MoveWindow(this,local_14.left,local_14.top,local_14.right - local_14.left,
                   local_14.bottom - local_14.top,1);
  return;
}


