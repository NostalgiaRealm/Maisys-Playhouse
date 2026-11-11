
/* ==== CWnd::GetDlgItem @ 004a7f26 ==== 
 * signature: CWnd * __thiscall GetDlgItem(CWnd * this, int param_1)
 * body: 004a7f26-004a7f4b
 * note: Library Function - Single Match  public: class CWnd * __thiscall CWnd::GetDlgItem(int)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CWnd * __thiscall CWnd::GetDlgItem(int)const 
   
   Library: Visual Studio 1998 Release */

CWnd * __thiscall CWnd::GetDlgItem(CWnd *this,int param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  
  if (*(int **)(this + 0x34) == (int *)0x0) {
    pHVar1 = ::GetDlgItem(*(HWND *)(this + 0x1c),param_1);
    pCVar2 = FromHandle(pHVar1);
  }
  else {
    pCVar2 = (CWnd *)(**(code **)(**(int **)(this + 0x34) + 0x74))();
  }
  return pCVar2;
}


