
/* ==== AFX_MODULE_THREAD_STATE::AFX_MODULE_THREAD_STATE @ 004bac09 ==== 
 * signature: undefined __thiscall AFX_MODULE_THREAD_STATE(AFX_MODULE_THREAD_STATE * this)
 * body: 004bac09-004bac82
 * note: Library Function - Single Match  public: __thiscall AFX_MODULE_THREAD_STATE::AFX_MODULE_THREAD_STATE(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall AFX_MODULE_THREAD_STATE::AFX_MODULE_THREAD_STATE(void)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall
AFX_MODULE_THREAD_STATE::AFX_MODULE_THREAD_STATE(AFX_MODULE_THREAD_STATE *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004caff4;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  CMapPtrToPtr::CMapPtrToPtr((CMapPtrToPtr *)(extraout_ECX + 0xc),10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  CMapPtrToPtr::CMapPtrToPtr((CMapPtrToPtr *)(extraout_ECX + 0x13),10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  CPtrList::CPtrList((CPtrList *)(extraout_ECX + 0x1a),10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *extraout_ECX = &PTR_FUN_004cb2ec;
  extraout_ECX[3] = 0x54;
  extraout_ECX[10] = FUN_004a5fc8;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


