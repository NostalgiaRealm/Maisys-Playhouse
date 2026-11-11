
/* ==== CDocTemplate::~CDocTemplate @ 004b33e5 ==== 
 * signature: void __thiscall ~CDocTemplate(CDocTemplate * this)
 * body: 004b33e5-004b3453
 * note: Library Function - Single Match  public: virtual __thiscall CDocTemplate::~CDocTemplate(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall CDocTemplate::~CDocTemplate(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocTemplate::~CDocTemplate(CDocTemplate *this)

{
  HMENU pHVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cd5b4;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  pHVar1 = (HMENU)extraout_ECX[9];
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  if (pHVar1 != (HMENU)0x0) {
    DestroyMenu(pHVar1);
  }
  pHVar1 = *(HMENU *)(*(int *)(unaff_EBP + -0x10) + 0x2c);
  if (pHVar1 != (HMENU)0x0) {
    DestroyMenu(pHVar1);
  }
  pHVar1 = *(HMENU *)(*(int *)(unaff_EBP + -0x10) + 0x34);
  if (pHVar1 != (HMENU)0x0) {
    DestroyMenu(pHVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004b3454();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b3469();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


