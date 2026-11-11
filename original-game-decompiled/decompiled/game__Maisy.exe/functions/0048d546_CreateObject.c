
/* ==== CThreadLocal<_AFX_THREAD_STATE>::CreateObject @ 0048d546 ==== 
 * signature: CNoTrackObject * __stdcall CreateObject(void)
 * body: 0048d546-0048d58f
 * note: Library Function - Single Match  public: static class CNoTrackObject * __stdcall CThreadLocal<class _AFX_THREAD_STATE>::CreateObject(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static class CNoTrackObject * __stdcall CThreadLocal<class
   _AFX_THREAD_STATE>::CreateObject(void)
   
   Library: Visual Studio 1998 Release */

CNoTrackObject * CThreadLocal<_AFX_THREAD_STATE>::CreateObject(void)

{
  _AFX_THREAD_STATE *this;
  CNoTrackObject *pCVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = CNoTrackObject::operator_new(0x114);
  *(_AFX_THREAD_STATE **)(unaff_EBP + -0x10) = this;
  pCVar1 = (CNoTrackObject *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this != (_AFX_THREAD_STATE *)0x0) {
    pCVar1 = (CNoTrackObject *)_AFX_THREAD_STATE::_AFX_THREAD_STATE(this);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return pCVar1;
}


