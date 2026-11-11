
/* ==== CMDIChildWnd::OnUpdateFrameMenu @ 004b779d ==== 
 * signature: void __thiscall OnUpdateFrameMenu(CMDIChildWnd * this, int param_1, CWnd * param_2, HMENU__ * param_3)
 * body: 004b779d-004b7831
 * note: Library Function - Single Match  public: virtual void __thiscall CMDIChildWnd::OnUpdateFrameMenu(int,class CWnd *,struct HMENU__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CMDIChildWnd::OnUpdateFrameMenu(int,class CWnd *,struct HMENU__
   *)
   
   Library: Visual Studio 1998 Release */

void __thiscall
CMDIChildWnd::OnUpdateFrameMenu(CMDIChildWnd *this,int param_1,CWnd *param_2,HMENU__ *param_3)

{
  CMDIFrameWnd *pCVar1;
  int *piVar2;
  LPARAM lParam;
  UINT Msg;
  
  pCVar1 = GetMDIFrame(this);
  if (param_3 == (HMENU__ *)0x0) {
    if (param_1 != 0) {
      piVar2 = (int *)(**(code **)(*(int *)this + 0xc0))();
      if (piVar2 != (int *)0x0) {
        param_3 = (HMENU__ *)(**(code **)(*piVar2 + 0xa8))();
      }
    }
    if (param_3 == (HMENU__ *)0x0) {
      param_3 = *(HMENU__ **)(this + 0xbc);
      goto LAB_004b77dd;
    }
LAB_004b77e1:
    if (param_1 != 0) {
      lParam = (**(code **)(*(int *)pCVar1 + 0xfc))(param_3);
      Msg = 0x230;
      goto LAB_004b781f;
    }
  }
  else {
LAB_004b77dd:
    if (param_3 != (HMENU__ *)0x0) goto LAB_004b77e1;
  }
  if (((param_3 == (HMENU__ *)0x0) || (param_1 != 0)) || (param_2 != (CWnd *)0x0)) {
    lParam = 0;
    param_3 = (HMENU__ *)0x0;
    Msg = 0x234;
  }
  else {
    lParam = 0;
    param_3 = *(HMENU__ **)(pCVar1 + 0x44);
    Msg = 0x230;
  }
LAB_004b781f:
  SendMessageA(*(HWND *)(pCVar1 + 0xbc),Msg,(WPARAM)param_3,lParam);
  return;
}


