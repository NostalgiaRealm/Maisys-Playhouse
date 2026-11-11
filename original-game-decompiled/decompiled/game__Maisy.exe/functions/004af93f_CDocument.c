
/* ==== CDocument::CDocument @ 004af93f ==== 
 * signature: undefined __thiscall CDocument(CDocument * this)
 * body: 004af93f-004af9b1
 * note: Library Function - Single Match  public: __thiscall CDocument::CDocument(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CDocument::CDocument(void)
   
   Library: Visual Studio 1998 Release */

CCmdTarget * __thiscall CDocument::CDocument(CDocument *this)

{
  undefined4 uVar1;
  CCmdTarget *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CCmdTarget **)(unaff_EBP + -0x10) = this_00;
  CCmdTarget::CCmdTarget(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44((undefined4 *)(this_00 + 0x1c));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004abb44((undefined4 *)(this_00 + 0x20));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  CPtrList::CPtrList((CPtrList *)(this_00 + 0x28),10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined ***)this_00 = &PTR_FUN_004cbf44;
  *(undefined4 *)(this_00 + 0x24) = 0;
  *(undefined4 *)(this_00 + 0x44) = 0;
  *(undefined4 *)(this_00 + 0x48) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  *(undefined4 *)(this_00 + 0x4c) = 0;
  *unaff_FS_OFFSET = uVar1;
  return this_00;
}


