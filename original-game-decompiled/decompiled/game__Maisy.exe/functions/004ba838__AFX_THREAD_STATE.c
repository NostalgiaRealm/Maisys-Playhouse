
/* ==== _AFX_THREAD_STATE::_AFX_THREAD_STATE @ 004ba838 ==== 
 * signature: undefined __thiscall _AFX_THREAD_STATE(_AFX_THREAD_STATE * this)
 * body: 004ba838-004ba882
 * note: Library Function - Single Match  public: __thiscall _AFX_THREAD_STATE::_AFX_THREAD_STATE(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall _AFX_THREAD_STATE::_AFX_THREAD_STATE(void)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall _AFX_THREAD_STATE::_AFX_THREAD_STATE(_AFX_THREAD_STATE *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004caff4;
  extraout_ECX[0x36] = 0xffffffff;
  *extraout_ECX = &PTR__scalar_deleting_destructor__004cb2d4;
  extraout_ECX[0x41] = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


