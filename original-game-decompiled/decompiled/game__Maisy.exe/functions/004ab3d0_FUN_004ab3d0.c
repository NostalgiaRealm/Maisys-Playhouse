
/* ==== FUN_004ab3d0 @ 004ab3d0 ==== 
 * signature: undefined __thiscall FUN_004ab3d0(void * this, int param_1)
 * body: 004ab3d0-004ab54a
 */

void __thiscall FUN_004ab3d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  HWND hWnd;
  HWND pHVar4;
  uint uVar5;
  tagRECT local_34;
  tagRECT local_24;
  tagRECT local_14;
  
  uVar3 = CWnd::GetExStyle(this);
  if (param_1 == 0) {
    if ((uVar3 & 0x40000000) == 0) {
      hWnd = GetWindow(*(HWND *)((int)this + 0x1c),4);
    }
    else {
      hWnd = GetParent(*(HWND *)((int)this + 0x1c));
    }
    if ((hWnd != (HWND)0x0) && (pHVar4 = (HWND)SendMessageA(hWnd,0x36b,0,0), pHVar4 != (HWND)0x0)) {
      hWnd = pHVar4;
    }
  }
  else {
    hWnd = *(HWND *)(param_1 + 0x1c);
  }
  GetWindowRect(*(HWND *)((int)this + 0x1c),&local_24);
  if ((uVar3 & 0x40000000) == 0) {
    if ((hWnd != (HWND)0x0) &&
       ((uVar5 = GetWindowLongA(hWnd,-0x10), (uVar5 & 0x10000000) == 0 ||
        ((uVar5 & 0x20000000) != 0)))) {
      hWnd = (HWND)0x0;
    }
    SystemParametersInfoA(0x30,0,&local_14,0);
    if (hWnd == (HWND)0x0) {
      local_34.left = local_14.left;
      local_34.top = local_14.top;
      local_34.right = local_14.right;
      local_34.bottom = local_14.bottom;
    }
    else {
      GetWindowRect(hWnd,&local_34);
    }
  }
  else {
    pHVar4 = GetParent(*(HWND *)((int)this + 0x1c));
    GetClientRect(pHVar4,&local_14);
    GetClientRect(hWnd,&local_34);
    MapWindowPoints(hWnd,pHVar4,(LPPOINT)&local_34,2);
  }
  iVar1 = (local_24.left - local_24.right) / 2 + (local_34.right + local_34.left) / 2;
  iVar2 = (local_34.top + local_34.bottom) / 2 + (local_24.top - local_24.bottom) / 2;
  if ((local_14.left <= iVar1) &&
     (local_14.left = iVar1, local_14.right < (local_24.right - local_24.left) + iVar1)) {
    local_14.left = (local_14.right - local_24.right) + local_24.left;
  }
  if ((local_14.top <= iVar2) &&
     (local_14.top = iVar2, local_14.bottom < (local_24.bottom - local_24.top) + iVar2)) {
    local_14.top = local_14.bottom + (local_24.top - local_24.bottom);
  }
  CWnd::SetWindowPos(this,(CWnd *)0x0,local_14.left,local_14.top,-1,-1,0x15);
  return;
}


