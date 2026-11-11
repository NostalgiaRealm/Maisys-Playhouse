
/* ==== CWnd::GetWindowTextA @ 004a946b ==== 
 * signature: void __thiscall GetWindowTextA(CWnd * this, CString * param_1)
 * body: 004a946b-004a94b2
 * note: Library Function - Single Match  public: void __thiscall CWnd::GetWindowTextA(class CString &)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWnd::GetWindowTextA(class CString &)const 
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::GetWindowTextA(CWnd *this,CString *param_1)

{
  int iVar1;
  char *lpString;
  int nMaxCount;
  
  if (*(int **)(this + 0x38) == (int *)0x0) {
    iVar1 = GetWindowTextLengthA(*(HWND *)(this + 0x1c));
    nMaxCount = iVar1 + 1;
    lpString = CString::GetBufferSetLength(param_1,iVar1);
    ::GetWindowTextA(*(HWND *)(this + 0x1c),lpString,nMaxCount);
    CString::ReleaseBuffer(param_1,-1);
  }
  else {
    (**(code **)(**(int **)(this + 0x38) + 0x8c))(param_1);
  }
  return;
}


