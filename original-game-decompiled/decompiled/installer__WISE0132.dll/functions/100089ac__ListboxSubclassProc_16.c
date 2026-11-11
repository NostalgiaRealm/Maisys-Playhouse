
/* ==== _ListboxSubclassProc@16 @ 100089ac ==== 
 * signature: undefined __stdcall _ListboxSubclassProc@16(HWND param_1, UINT param_2, WPARAM param_3, uint param_4)
 * body: 100089ac-10008ae0
 */

void _ListboxSubclassProc_16(HWND param_1,UINT param_2,WPARAM param_3,uint param_4)

{
  LRESULT LVar1;
  LRESULT LVar2;
  HWND hWnd;
  uint uVar3;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  tagRECT local_1c;
  int local_c;
  WPARAM local_8;
  
                    /* 0x89ac  9  _ListboxSubclassProc@16 */
  local_c = 0;
  if ((param_2 == 0x201) || (param_2 == 0x102)) {
    LVar1 = SendMessageA(param_1,0x1a1,0,0);
    if (param_2 == 0x201) {
      uVar3 = param_4 >> 0x10;
      if ((int)(param_4 & 0xffff) < LVar1) {
        local_c = 1;
      }
      LVar2 = SendMessageA(param_1,0x18e,0,0);
      local_8 = LVar2 + (int)uVar3 / LVar1;
    }
    else {
      if (param_3 == 0x20) {
        local_c = 1;
      }
      local_8 = SendMessageA(param_1,0x188,0,0);
      LVar2 = SendMessageA(param_1,0x18e,0,0);
      uVar3 = (local_8 - LVar2) * LVar1;
    }
    if (local_c != 0) {
      LVar2 = SendMessageA(param_1,0x199,local_8,0);
      SendMessageA(param_1,0x19a,local_8,1 - LVar2);
      SetRect(&local_1c,0,LVar1 * ((int)uVar3 / LVar1),999,((int)uVar3 / LVar1 + 1) * LVar1);
      InvalidateRect(param_1,&local_1c,1);
      lParam = -1;
      wParam = 0xffff;
      Msg = 0x111;
      hWnd = GetParent(param_1);
      PostMessageA(hWnd,Msg,wParam,lParam);
    }
  }
  CallWindowProcA(DAT_10023eb4,param_1,param_2,param_3,param_4);
  return;
}


