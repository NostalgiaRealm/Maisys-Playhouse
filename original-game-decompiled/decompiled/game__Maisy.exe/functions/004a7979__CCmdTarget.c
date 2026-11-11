
/* ==== CCmdTarget::~CCmdTarget @ 004a7979 ==== 
 * signature: void __thiscall ~CCmdTarget(CCmdTarget * this)
 * body: 004a7979-004a79b8
 * note: Library Function - Single Match  public: virtual __thiscall CCmdTarget::~CCmdTarget(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall CCmdTarget::~CCmdTarget(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CCmdTarget::~CCmdTarget(CCmdTarget *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004cb264;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (extraout_ECX[4] != 0) {
    (**(code **)(extraout_ECX[4] + 0x1c))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a79c3();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


