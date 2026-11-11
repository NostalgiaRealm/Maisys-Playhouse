
/* ==== _AfxHandleSetCursor @ 004a8c26 ==== 
 * signature: int __stdcall _AfxHandleSetCursor(CWnd * param_1, uint param_2, uint param_3)
 * body: 004a8c26-004a8c9b
 * note: Library Function - Single Match  int __stdcall _AfxHandleSetCursor(class CWnd *,unsigned int,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall _AfxHandleSetCursor(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 1998 Release */

int _AfxHandleSetCursor(CWnd *param_1,uint param_2,uint param_3)

{
  CWnd *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int iVar4;
  
  if (((param_2 == 0xfffffffe) && (((param_3 == 0x201 || (param_3 == 0x207)) || (param_3 == 0x204)))
      ) && (pCVar1 = CWnd::GetTopLevelParent(param_1), pCVar1 != (CWnd *)0x0)) {
    pHVar2 = GetLastActivePopup(*(HWND *)(pCVar1 + 0x1c));
    pCVar1 = CWnd::FromHandle(pHVar2);
    if (pCVar1 != (CWnd *)0x0) {
      pHVar2 = GetForegroundWindow();
      pCVar3 = CWnd::FromHandle(pHVar2);
      if ((pCVar3 != pCVar1) && (iVar4 = CWnd::IsWindowEnabled(pCVar1), iVar4 != 0)) {
        SetForegroundWindow(*(HWND *)(pCVar1 + 0x1c));
        return 1;
      }
    }
  }
  return 0;
}


