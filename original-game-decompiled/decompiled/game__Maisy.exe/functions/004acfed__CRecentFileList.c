
/* ==== CRecentFileList::~CRecentFileList @ 004acfed ==== 
 * signature: void __thiscall ~CRecentFileList(CRecentFileList * this)
 * body: 004acfed-004ad058
 * note: Library Function - Single Match  public: virtual __thiscall CRecentFileList::~CRecentFileList(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall CRecentFileList::~CRecentFileList(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CRecentFileList::~CRecentFileList(CRecentFileList *this)

{
  void *pvVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cd174;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  pvVar1 = (void *)extraout_ECX[2];
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),CString::~CString);
    FUN_004a602d((int *)((int)pvVar1 + -4));
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004ad059();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004ad064();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004ad079();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


