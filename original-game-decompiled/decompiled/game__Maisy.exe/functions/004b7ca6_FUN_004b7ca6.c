
/* ==== FUN_004b7ca6 @ 004b7ca6 ==== 
 * signature: undefined __fastcall FUN_004b7ca6(CWnd * param_1)
 * body: 004b7ca6-004b7d12
 */

void __fastcall FUN_004b7ca6(CWnd *param_1)

{
  CWnd *pCVar1;
  BOOL BVar2;
  HWND pHVar3;
  CFrameWnd *pCVar4;
  tagMSG local_1c;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    pCVar1 = param_1 + 0x1c;
    BVar2 = PeekMessageA(&local_1c,*(HWND *)pCVar1,0x367,0x367,3);
    if (BVar2 == 0) {
      PostMessageA(*(HWND *)pCVar1,0x367,0,0);
    }
    pHVar3 = GetCapture();
    if (pHVar3 == *(HWND *)pCVar1) {
      ReleaseCapture();
    }
    pCVar4 = CWnd::GetTopLevelFrame(param_1);
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(pCVar4 + 0x50) = 0;
    PostMessageA(*(HWND *)pCVar1,0x36a,0,0);
  }
  return;
}


