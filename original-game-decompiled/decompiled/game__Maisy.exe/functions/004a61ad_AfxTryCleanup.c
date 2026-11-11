
/* ==== AfxTryCleanup @ 004a61ad ==== 
 * signature: void __stdcall AfxTryCleanup(void)
 * body: 004a61ad-004a61e6
 * note: Library Function - Single Match  void __stdcall AfxTryCleanup(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall AfxTryCleanup(void)
   
   Library: Visual Studio 1998 Release */

void AfxTryCleanup(void)

{
  int *piVar1;
  CException *this;
  DWORD dwErrCode;
  int iVar2;
  
  dwErrCode = GetLastError();
  iVar2 = FUN_004bbe8e(&DAT_004e362c,CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  SetLastError(dwErrCode);
  piVar1 = *(int **)(iVar2 + 0x10);
  this = (CException *)piVar1[1];
  if (this != (CException *)0x0) {
    CException::Delete(this);
  }
  *(int *)(iVar2 + 0x10) = *piVar1;
  return;
}


