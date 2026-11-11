
/* ==== CDC::~CDC @ 004b0d27 ==== 
 * signature: void __thiscall ~CDC(CDC * this)
 * body: 004b0d27-004b0d70
 * note: Library Function - Single Match  public: virtual __thiscall CDC::~CDC(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall CDC::~CDC(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDC::~CDC(CDC *this)

{
  HDC hdc;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cc124;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(int **)(unaff_EBP + -0x10))[1] != 0) {
    hdc = (HDC)FUN_004b0cd7(*(int **)(unaff_EBP + -0x10));
    DeleteDC(hdc);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b0d7b();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


