
/* ==== CreateObject @ 0048d7de ==== 
 * signature: undefined4 * __stdcall CreateObject(void)
 * body: 0048d7de-0048d817;0048d820-0048d837
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
  puVar1 = CNoTrackObject::operator_new(0x30);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *puVar1 = &PTR_FUN_004caff4;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__004cb17c;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return puVar1;
}


