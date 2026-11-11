
/* ==== CThreadLocal<AFX_MODULE_THREAD_STATE>::CreateObject @ 0048d9bd ==== 
 * signature: CNoTrackObject * __stdcall CreateObject(void)
 * body: 0048d9bd-0048da06
 * note: Library Function - Single Match  public: static class CNoTrackObject * __stdcall CThreadLocal<class AFX_MODULE_THREAD_STATE>::CreateObject(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static class CNoTrackObject * __stdcall CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::CreateObject(void)
   
   Library: Visual Studio 1998 Release */

CNoTrackObject * CThreadLocal<AFX_MODULE_THREAD_STATE>::CreateObject(void)

{
  AFX_MODULE_THREAD_STATE *this;
  CNoTrackObject *pCVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = CNoTrackObject::operator_new(0x84);
  *(AFX_MODULE_THREAD_STATE **)(unaff_EBP + -0x10) = this;
  pCVar1 = (CNoTrackObject *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this != (AFX_MODULE_THREAD_STATE *)0x0) {
    pCVar1 = (CNoTrackObject *)AFX_MODULE_THREAD_STATE::AFX_MODULE_THREAD_STATE(this);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return pCVar1;
}


