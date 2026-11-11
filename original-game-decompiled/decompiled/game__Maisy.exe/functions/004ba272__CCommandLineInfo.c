
/* ==== CCommandLineInfo::~CCommandLineInfo @ 004ba272 ==== 
 * signature: void __thiscall ~CCommandLineInfo(CCommandLineInfo * this)
 * body: 004ba272-004ba2c7
 * note: Library Function - Single Match  public: virtual __thiscall CCommandLineInfo::~CCommandLineInfo(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall CCommandLineInfo::~CCommandLineInfo(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CCommandLineInfo::~CCommandLineInfo(CCommandLineInfo *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cb0a4;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004ba2c8();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004ba2d3();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004ba2de();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004ba2e9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004ba2fe();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


