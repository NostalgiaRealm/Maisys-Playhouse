
/* ==== CMultiDocTemplate::~CMultiDocTemplate @ 004af683 ==== 
 * signature: void __thiscall ~CMultiDocTemplate(CMultiDocTemplate * this)
 * body: 004af683-004af6cf
 * note: Library Function - Single Match  public: virtual __thiscall CMultiDocTemplate::~CMultiDocTemplate(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall CMultiDocTemplate::~CMultiDocTemplate(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CMultiDocTemplate::~CMultiDocTemplate(CMultiDocTemplate *this)

{
  HMENU hMenu;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cb31c;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  hMenu = (HMENU)extraout_ECX[0x19];
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  if (hMenu != (HMENU)0x0) {
    DestroyMenu(hMenu);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004af6d0();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004af6e5();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


