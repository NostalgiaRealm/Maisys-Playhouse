
/* ==== _AFX_WIN_STATE::~_AFX_WIN_STATE @ 004bd43f ==== 
 * signature: void __thiscall ~_AFX_WIN_STATE(_AFX_WIN_STATE * this)
 * body: 004bd43f-004bd47d
 * note: Library Function - Single Match  public: virtual __thiscall _AFX_WIN_STATE::~_AFX_WIN_STATE(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall _AFX_WIN_STATE::~_AFX_WIN_STATE(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall _AFX_WIN_STATE::~_AFX_WIN_STATE(_AFX_WIN_STATE *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR__scalar_deleting_destructor__004cafec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  AfxDeleteObject((void **)(extraout_ECX + 1));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bd488();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


