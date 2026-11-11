
/* ==== CPaintDC::~CPaintDC @ 004b20d7 ==== 
 * signature: void __thiscall ~CPaintDC(CPaintDC * this)
 * body: 004b20d7-004b2121
 * note: Library Function - Single Match  public: virtual __thiscall CPaintDC::~CPaintDC(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall CPaintDC::~CPaintDC(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CPaintDC::~CPaintDC(CPaintDC *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004cc2a4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  EndPaint((HWND)extraout_ECX[4],(PAINTSTRUCT *)(extraout_ECX + 5));
  FUN_004b0cd7(*(int **)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b212c();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


