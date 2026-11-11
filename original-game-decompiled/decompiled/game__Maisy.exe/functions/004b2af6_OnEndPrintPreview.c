
/* ==== CView::OnEndPrintPreview @ 004b2af6 ==== 
 * signature: void __thiscall OnEndPrintPreview(CView * this, CDC * param_1, CPrintInfo * param_2, tagPOINT param_3, CPreviewView * param_4)
 * body: 004b2af6-004b2b93
 * note: Library Function - Single Match  protected: virtual void __thiscall CView::OnEndPrintPreview(class CDC *,struct CPrintInfo *,struct tagPOINT,class CPreviewView *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: virtual void __thiscall CView::OnEndPrintPreview(class CDC *,struct CPrintInfo
   *,struct tagPOINT,class CPreviewView *)
   
   Library: Visual Studio 1998 Release */

void __thiscall
CView::OnEndPrintPreview
          (CView *this,CDC *param_1,CPrintInfo *param_2,tagPOINT param_3,CPreviewView *param_4)

{
  CFrameWnd *this_00;
  int iVar1;
  CFrameWnd *pCVar2;
  
  if (*(int **)(param_4 + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(param_4 + 0x70) + 0x104))(param_1,param_2);
  }
  iVar1 = FUN_004a7052();
  this_00 = *(CFrameWnd **)(iVar1 + 0x1c);
  (**(code **)(*(int *)this_00 + 0xd4))(0,*(int *)(param_4 + 0x88));
  FUN_004b8d1f(this_00,*(int **)(*(int *)(param_4 + 0x88) + 0xc),1);
  pCVar2 = CWnd::GetParentFrame((CWnd *)this);
  if (pCVar2 != this_00) {
    (**(code **)(*(int *)this + 0xe8))(1,this,this);
  }
  (**(code **)(*(int *)param_4 + 0x5c))();
  (**(code **)(*(int *)this_00 + 0xcc))(1);
  SendMessageA(*(HWND *)(this_00 + 0x1c),0x362,0xe001,0);
  UpdateWindow(*(HWND *)(this_00 + 0x1c));
  return;
}


