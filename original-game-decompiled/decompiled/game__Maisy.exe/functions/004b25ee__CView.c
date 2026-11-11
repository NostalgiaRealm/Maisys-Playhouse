
/* ==== CView::~CView @ 004b25ee ==== 
 * signature: void __thiscall ~CView(CView * this)
 * body: 004b25ee-004b2632
 * note: Library Function - Single Match  public: virtual __thiscall CView::~CView(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall CView::~CView(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CView::~CView(CView *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cceec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  if ((CDocument *)extraout_ECX[0xf] != (CDocument *)0x0) {
    CDocument::RemoveView((CDocument *)extraout_ECX[0xf],*(CView **)(unaff_EBP + -0x10));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b263d();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


