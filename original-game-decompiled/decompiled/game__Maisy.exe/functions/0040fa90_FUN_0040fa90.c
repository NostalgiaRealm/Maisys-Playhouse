
/* ==== FUN_0040fa90 @ 0040fa90 ==== 
 * signature: undefined4 __fastcall FUN_0040fa90(int * param_1)
 * body: 0040fa90-0040fae3
 */

undefined4 __fastcall FUN_0040fa90(int *param_1)

{
  LPMSG lpMsg;
  BOOL BVar1;
  int iVar2;
  
  lpMsg = (LPMSG)(param_1 + 0xc);
  BVar1 = GetMessageA(lpMsg,(HWND)0x0,0,0);
  if (BVar1 == 0) {
    return 0;
  }
  FUN_004710f0(DAT_004dc564,lpMsg);
  if (param_1[0xd] != 0x36a) {
    iVar2 = (**(code **)(*param_1 + 0x5c))(lpMsg);
    if (iVar2 == 0) {
      TranslateMessage(lpMsg);
      DispatchMessageA(lpMsg);
    }
  }
  return 1;
}


