
/* ==== FUN_004a78b0 @ 004a78b0 ==== 
 * signature: undefined4 __fastcall FUN_004a78b0(int * param_1)
 * body: 004a78b0-004a78f5
 */

undefined4 __fastcall FUN_004a78b0(int *param_1)

{
  LPMSG lpMsg;
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  
  lpMsg = (LPMSG)(param_1 + 0xc);
  BVar1 = GetMessageA(lpMsg,(HWND)0x0,0,0);
  if (BVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_1[0xd] != 0x36a) {
      iVar3 = (**(code **)(*param_1 + 0x5c))(lpMsg);
      if (iVar3 == 0) {
        TranslateMessage(lpMsg);
        DispatchMessageA(lpMsg);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


