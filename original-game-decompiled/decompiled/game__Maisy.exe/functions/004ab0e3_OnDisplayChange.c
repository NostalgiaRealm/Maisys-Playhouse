
/* ==== CWnd::OnDisplayChange @ 004ab0e3 ==== 
 * signature: long __thiscall OnDisplayChange(CWnd * this, uint param_1, long param_2)
 * body: 004ab0e3-004ab12f
 * note: Library Function - Single Match  protected: long __thiscall CWnd::OnDisplayChange(unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: long __thiscall CWnd::OnDisplayChange(unsigned int,long)
   
   Library: Visual Studio 1998 Release */

long __thiscall CWnd::OnDisplayChange(CWnd *this,uint param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  _AFX_THREAD_STATE *p_Var3;
  long lVar4;
  
  iVar1 = FUN_004bafca();
  if (*(CWnd **)(*(int *)(iVar1 + 4) + 0x1c) == this) {
    FUN_004ad7fc(0x4e5180);
  }
  uVar2 = GetExStyle(this);
  if ((uVar2 & 0x40000000) == 0) {
    p_Var3 = FUN_004a8846();
    SendMessageToDescendants
              (*(HWND__ **)(this + 0x1c),*(uint *)(p_Var3 + 4),*(uint *)(p_Var3 + 8),
               *(long *)(p_Var3 + 0xc),1,1);
  }
  lVar4 = FUN_004a8882((int *)this);
  return lVar4;
}


