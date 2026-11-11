
/* ==== CFrameWnd::NotifyFloatingWindows @ 004b812f ==== 
 * signature: void __thiscall NotifyFloatingWindows(CFrameWnd * this, ulong param_1)
 * body: 004b812f-004b81e1
 * note: Library Function - Single Match  public: void __thiscall CFrameWnd::NotifyFloatingWindows(unsigned long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CFrameWnd::NotifyFloatingWindows(unsigned long)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::NotifyFloatingWindows(CFrameWnd *this,ulong param_1)

{
  ulong uVar1;
  CFrameWnd *this_00;
  int iVar2;
  HWND hWnd;
  HWND__ *hWnd_00;
  UINT uCmd;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  this_00 = this;
  if ((uVar1 & 0x40000000) == 0) {
    this_00 = CWnd::GetTopLevelFrame((CWnd *)this);
  }
  if ((param_1 & 0xc) != 0) {
    iVar2 = CWnd::IsWindowEnabled((CWnd *)this_00);
    if ((((param_1 & 8) == 0) && (iVar2 != 0)) && (this_00 != this)) {
      this[0x25] = (CFrameWnd)((byte)this[0x25] | 2);
      SendMessageA(*(HWND *)(this_00 + 0x1c),0x86,1,0);
      this[0x25] = (CFrameWnd)((byte)this[0x25] & 0xfd);
    }
    else {
      SendMessageA(*(HWND *)(this_00 + 0x1c),0x86,0,0);
    }
  }
  uCmd = 5;
  hWnd = GetDesktopWindow();
  for (hWnd_00 = GetWindow(hWnd,uCmd); hWnd_00 != (HWND__ *)0x0; hWnd_00 = GetWindow(hWnd_00,2)) {
    iVar2 = AfxIsDescendant(*(HWND__ **)(this_00 + 0x1c),hWnd_00);
    if (iVar2 != 0) {
      SendMessageA(hWnd_00,0x36d,param_1,0);
    }
  }
  return;
}


