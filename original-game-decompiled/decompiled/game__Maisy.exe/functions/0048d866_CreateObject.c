
/* ==== CreateObject @ 0048d866 ==== 
 * signature: undefined4 * __stdcall CreateObject(void)
 * body: 0048d866-0048d89f;0048d8a8-0048d8bf
 * note: Library Function - Multiple Matches With Same Base Name  public: static class CNoTrackObject * __stdcall CProcessLocal<class COccManager>::CreateObject(void)  public: static class CNoTrackObject * __stdcall CProcessLocal<class _AFX_CTL3D_STATE>::CreateObject(void)  public: static class CNoTrackObject * __stdcall CProcessLocal<class _AFX_DB_STATE>::CreateObject(void)  public: static class CNoTrackObject * __stdcall CProcessLocal<class _AFX_MAIL_STATE>::CreateObject(void)   6 names - too many to list  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   COccManager>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_CTL3D_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_DB_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_MAIL_STATE>::CreateObject(void)
     6 names - too many to list
   
   Library: Visual Studio 1998 Release */

undefined4 * CreateObject(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  puVar1 = CNoTrackObject::operator_new(4);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *puVar1 = &PTR_FUN_004caff4;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *puVar1 = &PTR_FUN_004cb184;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return puVar1;
}


