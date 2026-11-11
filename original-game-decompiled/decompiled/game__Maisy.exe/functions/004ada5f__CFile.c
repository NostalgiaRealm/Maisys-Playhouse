
/* ==== CFile::~CFile @ 004ada5f ==== 
 * signature: void __thiscall ~CFile(CFile * this)
 * body: 004ada5f-004adab4
 * note: Library Function - Single Match  public: virtual __thiscall CFile::~CFile(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall CFile::~CFile(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFile::~CFile(CFile *this)

{
  CFile *this_00;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cd1ec;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  this_00 = *(CFile **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((*(int *)(this_00 + 4) != -1) && (*(int *)(this_00 + 8) != 0)) {
    Close(this_00);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004adab5();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004adaca();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


