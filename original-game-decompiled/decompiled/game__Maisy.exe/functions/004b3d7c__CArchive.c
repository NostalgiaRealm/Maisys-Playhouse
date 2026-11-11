
/* ==== CArchive::~CArchive @ 004b3d7c ==== 
 * signature: void __thiscall ~CArchive(CArchive * this)
 * body: 004b3d7c-004b3dc6
 * note: Library Function - Single Match  public: __thiscall CArchive::~CArchive(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CArchive::~CArchive(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CArchive::~CArchive(CArchive *this)

{
  CArchive *this_00;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  this_00 = *(CArchive **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(int *)(this_00 + 0x20) != 0) && (((byte)this_00[0x14] & 2) == 0)) {
    Close(this_00);
  }
  FUN_004b3ddc(*(int *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b3dd1();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


