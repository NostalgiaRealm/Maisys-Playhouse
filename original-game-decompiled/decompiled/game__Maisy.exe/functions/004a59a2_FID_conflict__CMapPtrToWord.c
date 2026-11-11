
/* ==== FID_conflict:~CMapPtrToWord @ 004a59a2 ==== 
 * signature: undefined __stdcall FID_conflict:~CMapPtrToWord(void)
 * body: 004a59a2-004a59dc
 * note: Library Function - Multiple Matches With Different Base Names  public: virtual __thiscall CMapPtrToPtr::~CMapPtrToPtr(void)  public: virtual __thiscall CMapPtrToWord::~CMapPtrToWord(void)  public: virtual __thiscall CMapWordToOb::~CMapWordToOb(void)  public: virtual __thiscall CMapWordToPtr::~CMapWordToPtr(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall CMapPtrToPtr::~CMapPtrToPtr(void)
    public: virtual __thiscall CMapPtrToWord::~CMapPtrToWord(void)
    public: virtual __thiscall CMapWordToOb::~CMapWordToOb(void)
    public: virtual __thiscall CMapWordToPtr::~CMapWordToPtr(void)
   
   Library: Visual Studio 1998 Release */

void FID_conflict__CMapPtrToWord(void)

{
  CMapPtrToPtr *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined ***)this = &PTR_FUN_004cd2cc;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(CMapPtrToPtr **)(unaff_EBP + -0x10) = this;
  CMapPtrToPtr::RemoveAll(this);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a59e7();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


