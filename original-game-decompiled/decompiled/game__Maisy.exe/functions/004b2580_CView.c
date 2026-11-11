
/* ==== CView::CView @ 004b2580 ==== 
 * signature: undefined __thiscall CView(CView * this)
 * body: 004b2580-004b25bd
 * note: Library Function - Single Match  protected: __thiscall CView::CView(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: __thiscall CView::CView(void)
   
   Library: Visual Studio 1998 Release */

CWnd * __thiscall CView::CView(CView *this)

{
  CWnd *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CWnd **)(unaff_EBP + -0x10) = this_00;
  CWnd::CWnd(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this_00 = &PTR_FUN_004cceec;
  *(undefined4 *)(this_00 + 0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


