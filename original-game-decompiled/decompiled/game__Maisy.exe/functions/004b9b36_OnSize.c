
/* ==== CFrameWnd::OnSize @ 004b9b36 ==== 
 * signature: void __thiscall OnSize(CFrameWnd * this, uint param_1, int param_2, int param_3)
 * body: 004b9b36-004b9b54
 * note: Library Function - Single Match  protected: void __thiscall CFrameWnd::OnSize(unsigned int,int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::OnSize(CFrameWnd *this,uint param_1,int param_2,int param_3)

{
  FUN_004a8882((int *)this);
  if (param_1 != 1) {
    (**(code **)(*(int *)this + 0xcc))(1);
  }
  return;
}


