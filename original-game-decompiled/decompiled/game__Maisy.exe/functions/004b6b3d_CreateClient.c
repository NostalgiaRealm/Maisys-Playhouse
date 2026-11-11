
/* ==== CMDIFrameWnd::CreateClient @ 004b6b3d ==== 
 * signature: int __thiscall CreateClient(CMDIFrameWnd * this, tagCREATESTRUCTA * param_1, CMenu * param_2)
 * body: 004b6b3d-004b6be6
 * note: Library Function - Single Match  public: virtual int __thiscall CMDIFrameWnd::CreateClient(struct tagCREATESTRUCTA *,class CMenu *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CMDIFrameWnd::CreateClient(struct tagCREATESTRUCTA *,class CMenu
   *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CMDIFrameWnd::CreateClient(CMDIFrameWnd *this,tagCREATESTRUCTA *param_1,CMenu *param_2)

{
  int iVar1;
  HWND hWnd;
  DWORD dwExStyle;
  DWORD dwStyle;
  undefined4 *lpParam;
  undefined4 local_c;
  undefined4 local_8;
  
  dwStyle = 0x56800001;
  dwExStyle = 0;
  if (DAT_004e51f8 != 0) {
    dwStyle = 0x56000001;
    dwExStyle = 0x200;
  }
  if (param_2 == (CMenu *)0x0) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(param_2 + 4);
  }
  local_8 = 0xff00;
  if ((*(uint *)(param_1 + 0x20) & 0x300000) != 0) {
    dwStyle = dwStyle | *(uint *)(param_1 + 0x20) & 0x300000;
    FUN_004a812e(this,0x300000,0,0x28);
  }
  lpParam = &local_c;
  iVar1 = FUN_004bafca();
  hWnd = CreateWindowExA(dwExStyle,s_mdiclient_004dc9f8,(LPCSTR)0x0,dwStyle,0,0,0,0,
                         *(HWND *)(this + 0x1c),(HMENU)0xe900,*(HINSTANCE *)(iVar1 + 8),lpParam);
  *(HWND *)(this + 0xbc) = hWnd;
  if (hWnd != (HWND)0x0) {
    BringWindowToTop(hWnd);
  }
  return (uint)(hWnd != (HWND)0x0);
}


