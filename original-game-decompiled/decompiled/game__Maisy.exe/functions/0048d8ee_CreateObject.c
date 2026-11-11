
/* ==== CProcessLocal<_AFX_BASE_MODULE_STATE>::CreateObject @ 0048d8ee ==== 
 * signature: CNoTrackObject * __stdcall CreateObject(void)
 * body: 0048d8ee-0048d92e;0048d937-0048d94f
 * note: Library Function - Single Match  public: static class CNoTrackObject * __stdcall CProcessLocal<class _AFX_BASE_MODULE_STATE>::CreateObject(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_BASE_MODULE_STATE>::CreateObject(void)
   
   Library: Visual Studio 1998 Release */

CNoTrackObject * CProcessLocal<_AFX_BASE_MODULE_STATE>::CreateObject(void)

{
  CNoTrackObject *pCVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  pCVar1 = CNoTrackObject::operator_new(0x103c);
  *(CNoTrackObject **)(unaff_EBP + -0x10) = pCVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pCVar1 == (CNoTrackObject *)0x0) {
    pCVar1 = (CNoTrackObject *)0x0;
  }
  else {
    FUN_004ba9ad();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(undefined ***)pCVar1 = &PTR_FUN_004cb2f4;
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return pCVar1;
}


