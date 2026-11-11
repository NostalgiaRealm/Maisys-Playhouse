
/* ==== AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK @ 004a6172 ==== 
 * signature: undefined __thiscall AFX_EXCEPTION_LINK(AFX_EXCEPTION_LINK * this)
 * body: 004a6172-004a61ac
 * note: Library Function - Single Match  public: __thiscall AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(void)
   
   Library: Visual Studio 1998 Release */

AFX_EXCEPTION_LINK * __thiscall AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(AFX_EXCEPTION_LINK *this)

{
  DWORD dwErrCode;
  int iVar1;
  
  *(undefined4 *)(this + 4) = 0;
  dwErrCode = GetLastError();
  iVar1 = FUN_004bbe8e(&DAT_004e362c,CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  SetLastError(dwErrCode);
  *(undefined4 *)this = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0x10) = this;
  return this;
}


