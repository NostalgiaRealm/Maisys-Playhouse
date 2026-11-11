
/* ==== RelayToolTipMessage @ 004a3432 ==== 
 * signature: void __stdcall RelayToolTipMessage(CToolTipCtrl * param_1, tagMSG * param_2)
 * body: 004a3432-004a34bd
 * note: Library Function - Single Match  void __stdcall RelayToolTipMessage(class CToolTipCtrl *,struct tagMSG *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall RelayToolTipMessage(class CToolTipCtrl *,struct tagMSG *)
   
   Library: Visual Studio 1998 Release */

void RelayToolTipMessage(CToolTipCtrl *param_1,tagMSG *param_2)

{
  int iVar1;
  tagMSG *ptVar2;
  HWND *ppHVar3;
  HWND local_28;
  uint local_24;
  undefined4 local_1c;
  undefined1 local_14 [8];
  tagPOINT local_c;
  
  ptVar2 = param_2;
  ppHVar3 = &local_28;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppHVar3 = ptVar2->hwnd;
    ptVar2 = (tagMSG *)&ptVar2->message;
    ppHVar3 = ppHVar3 + 1;
  }
  local_28 = (HWND)SendMessageA(*(HWND *)(param_1 + 0x1c),0x410,0,(LPARAM)local_14);
  local_c.x = (param_2->pt).x;
  local_c.y = (param_2->pt).y;
  if ((0x1ff < local_24) && (local_24 < 0x20a)) {
    ScreenToClient(local_28,&local_c);
  }
  local_1c = CONCAT22((undefined2)local_c.y,(undefined2)local_c.x);
  SendMessageA(*(HWND *)(param_1 + 0x1c),0x407,0,(LPARAM)&local_28);
  return;
}


