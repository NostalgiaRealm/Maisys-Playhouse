
/* ==== FUN_004b4b5a @ 004b4b5a ==== 
 * signature: undefined __stdcall FUN_004b4b5a(CDataExchange * param_1, int param_2, int * param_3)
 * body: 004b4b5a-004b4bf4
 */

void FUN_004b4b5a(CDataExchange *param_1,int param_2,int *param_3)

{
  HWND__ *hWnd;
  uint uVar1;
  LRESULT LVar2;
  int iVar3;
  
  hWnd = CDataExchange::PrepareCtrl(param_1,param_2);
  if (*(int *)param_1 != 0) {
    *param_3 = -1;
  }
  iVar3 = 0;
  while( true ) {
    uVar1 = SendMessageA(hWnd,0x87,0,0);
    if ((uVar1 & 0x40) != 0) {
      if (*(int *)param_1 == 0) {
        SendMessageA(hWnd,0xf1,(uint)(*param_3 == iVar3),0);
      }
      else {
        LVar2 = SendMessageA(hWnd,0xf0,0,0);
        if (LVar2 != 0) {
          *param_3 = iVar3;
        }
      }
      iVar3 = iVar3 + 1;
    }
    hWnd = GetWindow(hWnd,2);
    if (hWnd == (HWND)0x0) break;
    uVar1 = GetWindowLongA(hWnd,-0x10);
    if ((uVar1 & 0x20000) != 0) {
      return;
    }
  }
  return;
}


