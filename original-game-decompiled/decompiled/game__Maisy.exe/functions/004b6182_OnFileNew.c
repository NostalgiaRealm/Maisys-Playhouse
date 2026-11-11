
/* ==== CDocManager::OnFileNew @ 004b6182 ==== 
 * signature: void __thiscall OnFileNew(CDocManager * this)
 * body: 004b6182-004b622f
 * note: Library Function - Single Match  public: virtual void __thiscall CDocManager::OnFileNew(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CDocManager::OnFileNew(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocManager::OnFileNew(CDocManager *this)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  iVar1 = *(int *)(extraout_ECX + 0x10);
  if (iVar1 == 0) {
    AfxMessageBox(0xf104,0,0xffffffff);
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(extraout_ECX + 8) + 8);
    if (1 < iVar1) {
      CDialog::CDialog((CDialog *)(unaff_EBP + -0x74),0x7801,(CWnd *)0x0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(int *)(unaff_EBP + -0x18) = extraout_ECX + 4;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined ***)(unaff_EBP + -0x74) = &PTR_FUN_004cd4cc;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      iVar1 = FUN_004a6901((CDialog *)(unaff_EBP + -0x74));
      if (iVar1 != 1) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004b6242();
        goto LAB_004b6213;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x14);
      FUN_004b6242();
    }
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x84))(0,1);
  }
LAB_004b6213:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


