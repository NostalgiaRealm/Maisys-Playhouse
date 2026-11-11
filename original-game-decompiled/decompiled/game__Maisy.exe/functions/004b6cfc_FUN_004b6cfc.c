
/* ==== FUN_004b6cfc @ 004b6cfc ==== 
 * signature: undefined __fastcall FUN_004b6cfc(CFrameWnd * param_1)
 * body: 004b6cfc-004b6d20
 */

void __fastcall FUN_004b6cfc(CFrameWnd *param_1)

{
  CFrameWnd *pCVar1;
  
  pCVar1 = param_1 + 0xb8;
  if (((byte)*pCVar1 & 1) != 0) {
    DrawMenuBar(*(HWND *)(param_1 + 0x1c));
    *pCVar1 = (CFrameWnd)((byte)*pCVar1 & 0xfe);
  }
  FUN_004b9950(param_1);
  return;
}


