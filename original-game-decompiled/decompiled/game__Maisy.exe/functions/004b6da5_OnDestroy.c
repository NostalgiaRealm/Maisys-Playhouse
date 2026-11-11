
/* ==== CMDIFrameWnd::OnDestroy @ 004b6da5 ==== 
 * signature: void __thiscall OnDestroy(CMDIFrameWnd * this)
 * body: 004b6da5-004b6dda
 * note: Library Function - Single Match  protected: void __thiscall CMDIFrameWnd::OnDestroy(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CMDIFrameWnd::OnDestroy(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CMDIFrameWnd::OnDestroy(CMDIFrameWnd *this)

{
  HMENU pHVar1;
  HMENU pHVar2;
  
  CFrameWnd::OnDestroy((CFrameWnd *)this);
  pHVar1 = *(HMENU *)(this + 0x44);
  if (pHVar1 != (HMENU)0x0) {
    pHVar2 = GetMenu(*(HWND *)(this + 0x1c));
    if (pHVar2 != pHVar1) {
      SendMessageA(*(HWND *)(this + 0xbc),0x230,*(WPARAM *)(this + 0x44),0);
    }
  }
  return;
}


