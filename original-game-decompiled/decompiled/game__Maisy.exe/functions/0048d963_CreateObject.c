
/* ==== CreateObject @ 0048d963 ==== 
 * signature: undefined4 * __stdcall CreateObject(void)
 * body: 0048d963-0048d9a9
 * note: Library Function - Multiple Matches With Same Base Name  public: static class CNoTrackObject * __stdcall CProcessLocal<class _AFX_CHECKLIST_STATE>::CreateObject(void)  public: static class CNoTrackObject * __stdcall CProcessLocal<class _AFX_COLOR_STATE>::CreateObject(void)  public: static class CNoTrackObject * __stdcall CProcessLocal<class _AFX_EDIT_STATE>::CreateObject(void)  public: static class CNoTrackObject * __stdcall CProcessLocal<class _AFX_OLE_STATE>::CreateObject(void)   5 names - too many to list  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_CHECKLIST_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_COLOR_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_EDIT_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __stdcall CProcessLocal<class
   _AFX_OLE_STATE>::CreateObject(void)
     5 names - too many to list
   
   Library: Visual Studio 1998 Release */

undefined4 * CreateObject(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  pvVar1 = CNoTrackObject::operator_new(0x18);
  *(void **)(unaff_EBP + -0x10) = pvVar1;
  puVar2 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pvVar1 != (void *)0x0) {
    puVar2 = FUN_004bab3e();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return puVar2;
}


