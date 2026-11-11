
/* ==== FID_conflict:_AFX_WIN_STATE @ 004b9ede ==== 
 * signature: undefined4 * __stdcall FID_conflict:_AFX_WIN_STATE(void)
 * body: 004b9ede-004b9f1b
 * note: Library Function - Multiple Matches With Different Base Names  public: __thiscall _AFX_OLE_STATE::_AFX_OLE_STATE(void)  public: __thiscall _AFX_WIN_STATE::_AFX_WIN_STATE(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall _AFX_OLE_STATE::_AFX_OLE_STATE(void)
    public: __thiscall _AFX_WIN_STATE::_AFX_WIN_STATE(void)
   
   Library: Visual Studio 1998 Release */

undefined4 * FID_conflict__AFX_WIN_STATE(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004caff4;
  *extraout_ECX = &PTR__scalar_deleting_destructor__004cafec;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


