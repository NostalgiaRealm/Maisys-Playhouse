
/* ==== FUN_004b9951 @ 004b9951 ==== 
 * signature: undefined __fastcall FUN_004b9951(CFrameWnd * param_1)
 * body: 004b9951-004b99b9
 */

void __fastcall FUN_004b9951(CFrameWnd *param_1)

{
  CFrameWnd *pCVar1;
  
  pCVar1 = param_1 + 0xb8;
  if (((byte)*pCVar1 & 1) != 0) {
    (**(code **)(*(int *)param_1 + 0xe8))(*(undefined4 *)(param_1 + 0xa8));
  }
  if (((byte)*pCVar1 & 2) != 0) {
    (**(code **)(*(int *)param_1 + 0xe4))(1);
  }
  if ((*(uint *)pCVar1 & 8) != 0) {
    (**(code **)(*(int *)param_1 + 0xcc))(*(uint *)pCVar1 & 4);
    UpdateWindow(*(HWND *)(param_1 + 0x1c));
  }
  if (*(uint *)(param_1 + 0x94) != *(uint *)(param_1 + 0x90)) {
    CFrameWnd::SetMessageText(param_1,*(uint *)(param_1 + 0x90));
  }
  *(uint *)pCVar1 = 0;
  return;
}


