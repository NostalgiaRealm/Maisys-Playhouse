
/* ==== CView::GetScrollBarCtrl @ 004b297f ==== 
 * signature: CScrollBar * __thiscall GetScrollBarCtrl(CView * this, int param_1)
 * body: 004b297f-004b29f6
 * note: Library Function - Single Match  public: virtual class CScrollBar * __thiscall CView::GetScrollBarCtrl(int)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual class CScrollBar * __thiscall CView::GetScrollBarCtrl(int)const 
   
   Library: Visual Studio 1998 Release */

CScrollBar * __thiscall CView::GetScrollBarCtrl(CView *this,int param_1)

{
  ulong uVar1;
  CWnd *pCVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  if ((((-(uint)(param_1 == 0) & 0xfff00000) + 0x200000 & uVar1) == 0) &&
     (pCVar2 = FUN_004b2920((CWnd *)this,1), pCVar2 != (CWnd *)0x0)) {
    uVar3 = GetDlgCtrlID(*(HWND *)(this + 0x1c));
    uVar4 = uVar3 & 0xffff;
    if ((0xe8ff < uVar4) && (uVar4 < 0xea00)) {
      if (param_1 == 0) {
        iVar5 = (uVar3 & 0xf) + 0xea00;
      }
      else {
        iVar5 = (uVar4 - 0xe900 >> 4) + 0xea10;
      }
      pCVar2 = CWnd::GetDlgItem(pCVar2,iVar5);
      return (CScrollBar *)pCVar2;
    }
  }
  return (CScrollBar *)0x0;
}


