
/* ==== CWnd::OnDevModeChange @ 004ab015 ==== 
 * signature: void __thiscall OnDevModeChange(CWnd * this, char * param_1)
 * body: 004ab015-004ab067
 * note: Library Function - Single Match  protected: void __thiscall CWnd::OnDevModeChange(char *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CWnd::OnDevModeChange(char *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::OnDevModeChange(CWnd *this,char *param_1)

{
  int iVar1;
  ulong uVar2;
  _AFX_THREAD_STATE *p_Var3;
  
  iVar1 = FUN_004a7052();
  if (iVar1 != 0) {
    iVar1 = FUN_004a7052();
    if (*(CWnd **)(iVar1 + 0x1c) == this) {
      iVar1 = FUN_004bafca();
      CWinApp::DevModeChange(*(CWinApp **)(iVar1 + 4),param_1);
    }
  }
  uVar2 = GetExStyle(this);
  if ((uVar2 & 0x40000000) == 0) {
    p_Var3 = FUN_004a8846();
    SendMessageToDescendants
              (*(HWND__ **)(this + 0x1c),*(uint *)(p_Var3 + 4),*(uint *)(p_Var3 + 8),
               *(long *)(p_Var3 + 0xc),1,1);
  }
  return;
}


