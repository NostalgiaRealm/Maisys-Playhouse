
/* ==== CView::OnDestroy @ 004b26cf ==== 
 * signature: void __thiscall OnDestroy(CView * this)
 * body: 004b26cf-004b26fd
 * note: Library Function - Single Match  protected: void __thiscall CView::OnDestroy(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CView::OnDestroy(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CView::OnDestroy(CView *this)

{
  CFrameWnd *this_00;
  CView *pCVar1;
  
  this_00 = CWnd::GetParentFrame((CWnd *)this);
  if (this_00 != (CFrameWnd *)0x0) {
    pCVar1 = (CView *)FUN_004b8d18((int)this_00);
    if (pCVar1 == this) {
      FUN_004b8d1f(this_00,(int *)0x0,1);
    }
  }
  FUN_004a8882((int *)this);
  return;
}


