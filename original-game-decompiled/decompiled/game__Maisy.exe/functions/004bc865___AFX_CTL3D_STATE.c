
/* ==== _AFX_CTL3D_STATE::~_AFX_CTL3D_STATE @ 004bc865 ==== 
 * signature: void __thiscall ~_AFX_CTL3D_STATE(_AFX_CTL3D_STATE * this)
 * body: 004bc865-004bc8b6
 * note: Library Function - Single Match  public: virtual __thiscall _AFX_CTL3D_STATE::~_AFX_CTL3D_STATE(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall _AFX_CTL3D_STATE::~_AFX_CTL3D_STATE(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall _AFX_CTL3D_STATE::~_AFX_CTL3D_STATE(_AFX_CTL3D_STATE *this)

{
  code *pcVar1;
  HMODULE hLibModule;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR__scalar_deleting_destructor__004cb17c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pcVar1 = *(code **)(*(int *)(unaff_EBP + -0x10) + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0);
  }
  hLibModule = *(HMODULE *)(*(int *)(unaff_EBP + -0x10) + 8);
  if (hLibModule != (HMODULE)0x0) {
    FreeLibrary(hLibModule);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc8c1();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


