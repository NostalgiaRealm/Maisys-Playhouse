
/* ==== _AfxHandleActivate @ 004a8bc5 ==== 
 * signature: void __stdcall _AfxHandleActivate(CWnd * param_1, uint param_2, CWnd * param_3)
 * body: 004a8bc5-004a8c25
 * note: Library Function - Single Match  void __stdcall _AfxHandleActivate(class CWnd *,unsigned int,class CWnd *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall _AfxHandleActivate(class CWnd *,unsigned int,class CWnd *)
   
   Library: Visual Studio 1998 Release */

void _AfxHandleActivate(CWnd *param_1,uint param_2,CWnd *param_3)

{
  ulong uVar1;
  CWnd *pCVar2;
  CWnd *pCVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = CWnd::GetExStyle(param_1);
  if ((uVar1 & 0x40000000) == 0) {
    pCVar2 = CWnd::GetTopLevelParent(param_1);
    pCVar3 = CWnd::GetTopLevelParent(param_3);
    if (pCVar3 != pCVar2) {
      local_c = *(undefined4 *)(param_1 + 0x1c);
      local_8 = 0;
      if (param_3 != (CWnd *)0x0) {
        local_8 = *(undefined4 *)(param_3 + 0x1c);
      }
      SendMessageA(*(HWND *)(pCVar2 + 0x1c),0x36e,param_2,(LPARAM)&local_c);
    }
  }
  return;
}


