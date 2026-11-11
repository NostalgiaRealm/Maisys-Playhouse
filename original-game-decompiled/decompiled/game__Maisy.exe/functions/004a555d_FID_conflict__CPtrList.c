
/* ==== FID_conflict:~CPtrList @ 004a555d ==== 
 * signature: undefined __stdcall FID_conflict:~CPtrList(void)
 * body: 004a555d-004a5597
 * note: Library Function - Multiple Matches With Different Base Names  public: virtual __thiscall CObList::~CObList(void)  public: virtual __thiscall CPtrList::~CPtrList(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall CObList::~CObList(void)
    public: virtual __thiscall CPtrList::~CPtrList(void)
   
   Library: Visual Studio 1998 Release */

void FID_conflict__CPtrList(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cd2f4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  RemoveAll((int)extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a55a2();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


