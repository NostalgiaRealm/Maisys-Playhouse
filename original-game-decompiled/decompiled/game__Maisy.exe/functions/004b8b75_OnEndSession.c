
/* ==== CFrameWnd::OnEndSession @ 004b8b75 ==== 
 * signature: void __thiscall OnEndSession(CFrameWnd * this, int param_1)
 * body: 004b8b75-004b8ba8
 * note: Library Function - Single Match  protected: void __thiscall CFrameWnd::OnEndSession(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnEndSession(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::OnEndSession(CFrameWnd *this,int param_1)

{
  int *this_00;
  int iVar1;
  
  iVar1 = FUN_004bafca();
  this_00 = *(int **)(iVar1 + 4);
  if ((param_1 != 0) && ((CFrameWnd *)this_00[7] == this)) {
    AfxOleSetUserCtrl(1);
    FUN_004b468f(this_00,1);
    (**(code **)(*this_00 + 0x6c))();
  }
  return;
}


