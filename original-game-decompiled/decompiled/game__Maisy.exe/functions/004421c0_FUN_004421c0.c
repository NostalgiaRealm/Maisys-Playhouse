
/* ==== FUN_004421c0 @ 004421c0 ==== 
 * signature: undefined __thiscall FUN_004421c0(void * this, UINT param_1, WPARAM param_2, short param_3, short param_4)
 * body: 004421c0-0044223f
 */

void __thiscall FUN_004421c0(void *this,UINT param_1,WPARAM param_2,short param_3,short param_4)

{
  HWND pHVar1;
  CWnd *pCVar2;
  tagRECT local_24;
  tagRECT local_14;
  
  GetWindowRect(*(HWND *)((int)this + 0x1c),&local_24);
  pHVar1 = GetParent(*(HWND *)((int)this + 0x1c));
  pCVar2 = CWnd::FromHandle(pHVar1);
  GetWindowRect(*(HWND *)(pCVar2 + 0x1c),&local_14);
  pHVar1 = GetParent(*(HWND *)((int)this + 0x1c));
  pCVar2 = CWnd::FromHandle(pHVar1);
  SendMessageA(*(HWND *)(pCVar2 + 0x1c),param_1,param_2,
               CONCAT22(((short)local_24.top - (short)local_14.top) + param_4,
                        ((short)local_24.left - (short)local_14.left) + param_3));
  return;
}


