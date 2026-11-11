
/* ==== CDocManager::OnFileOpen @ 004b62a2 ==== 
 * signature: void __thiscall OnFileOpen(CDocManager * this)
 * body: 004b62a2-004b6309
 * note: Library Function - Single Match  public: virtual void __thiscall CDocManager::OnFileOpen(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CDocManager::OnFileOpen(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocManager::OnFileOpen(CDocManager *this)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = (**(code **)(*extraout_ECX + 0x34))(unaff_EBP + -0x10,0xf000,0x1004,1,0);
  if (iVar1 != 0) {
    iVar1 = FUN_004bafca();
    (**(code **)(**(int **)(iVar1 + 4) + 0x80))(*(undefined4 *)(unaff_EBP + -0x10));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b6314();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


