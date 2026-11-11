
/* ==== CFrameWnd::DestroyDockBars @ 004b92cc ==== 
 * signature: void __thiscall DestroyDockBars(CFrameWnd * this)
 * body: 004b92cc-004b9363
 * note: Library Function - Single Match  public: void __thiscall CFrameWnd::DestroyDockBars(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CFrameWnd::DestroyDockBars(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::DestroyDockBars(CFrameWnd *this)

{
  int *piVar1;
  int iVar2;
  CWnd *this_00;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  CPtrList::CPtrList((CPtrList *)(unaff_EBP + -0x2c),10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x70);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  while (iVar2 != 0) {
    piVar1 = (int *)(*(undefined4 **)(unaff_EBP + -0x10))[2];
    *(undefined4 *)(unaff_EBP + -0x10) = **(undefined4 **)(unaff_EBP + -0x10);
    iVar2 = (**(code **)(*piVar1 + 0xd4))();
    if (iVar2 != 0) {
      FUN_004a564c((void *)(unaff_EBP + -0x2c),piVar1);
    }
    iVar2 = *(int *)(unaff_EBP + -0x10);
  }
  iVar2 = *(int *)(unaff_EBP + -0x28);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  while (iVar2 != 0) {
    this_00 = (CWnd *)(*(undefined4 **)(unaff_EBP + -0x10))[2];
    *(undefined4 *)(unaff_EBP + -0x10) = **(undefined4 **)(unaff_EBP + -0x10);
    if (*(int *)(this_00 + 0x78) != 0) {
      this_00 = (CWnd *)CWnd::GetParentFrame(this_00);
    }
    (**(code **)(*(int *)this_00 + 0x5c))();
    iVar2 = *(int *)(unaff_EBP + -0x10);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b936e();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


