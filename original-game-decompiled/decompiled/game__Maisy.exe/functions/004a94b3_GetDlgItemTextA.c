
/* ==== CWnd::GetDlgItemTextA @ 004a94b3 ==== 
 * signature: int __thiscall GetDlgItemTextA(CWnd * this, int param_1, CString * param_2)
 * body: 004a94b3-004a9522
 * note: Library Function - Single Match  public: int __thiscall CWnd::GetDlgItemTextA(int,class CString &)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::GetDlgItemTextA(int,class CString &)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::GetDlgItemTextA(CWnd *this,int param_1,CString *param_2)

{
  HWND hWnd;
  int iVar1;
  char *lpString;
  CWnd *this_00;
  int nMaxCount;
  
  CString::operator=(param_2,&DAT_004dd6e8);
  if (*(int *)(this + 0x34) == 0) {
    hWnd = ::GetDlgItem(*(HWND *)(this + 0x1c),param_1);
    if (hWnd != (HWND)0x0) {
      iVar1 = GetWindowTextLengthA(hWnd);
      nMaxCount = iVar1 + 1;
      lpString = CString::GetBufferSetLength(param_2,iVar1);
      ::GetWindowTextA(hWnd,lpString,nMaxCount);
      CString::ReleaseBuffer(param_2,-1);
    }
  }
  else {
    this_00 = GetDlgItem(this,param_1);
    if (this_00 != (CWnd *)0x0) {
      GetWindowTextA(this_00,param_2);
    }
  }
  return *(int *)(*(int *)param_2 + -8);
}


