
/* ==== CDocManager::CDocManager @ 004bcb21 ==== 
 * signature: undefined __thiscall CDocManager(CDocManager * this)
 * body: 004bcb21-004bcb6c
 * note: Library Function - Single Match  public: __thiscall CDocManager::CDocManager(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CDocManager::CDocManager(void)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall CDocManager::CDocManager(CDocManager *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004cacec;
  CPtrList::CPtrList((CPtrList *)(extraout_ECX + 1),10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_004cd45c;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


