
/* ==== CDocument::~CDocument @ 004afa03 ==== 
 * signature: void __thiscall ~CDocument(CDocument * this)
 * body: 004afa03-004afa6a
 * note: Library Function - Single Match  public: virtual __thiscall CDocument::~CDocument(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall CDocument::~CDocument(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocument::~CDocument(CDocument *this)

{
  int *piVar1;
  CDocument *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined ***)this_00 = &PTR_FUN_004cbf44;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(CDocument **)(unaff_EBP + -0x10) = this_00;
  DisconnectViews(this_00);
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 100))(*(int *)(unaff_EBP + -0x10));
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004afa6b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004afa76();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004afa81();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004afa96();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


