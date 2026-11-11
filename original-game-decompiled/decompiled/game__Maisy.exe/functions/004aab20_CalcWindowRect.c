
/* ==== CWnd::CalcWindowRect @ 004aab20 ==== 
 * signature: void __thiscall CalcWindowRect(CWnd * this, tagRECT * param_1, uint param_2)
 * body: 004aab20-004aab4a
 * note: Library Function - Single Match  public: virtual void __thiscall CWnd::CalcWindowRect(struct tagRECT *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CWnd::CalcWindowRect(struct tagRECT *,unsigned int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::CalcWindowRect(CWnd *this,tagRECT *param_1,uint param_2)

{
  ulong dwExStyle;
  ulong dwStyle;
  BOOL bMenu;
  
  dwExStyle = GetExStyle(this);
  if (param_2 == 0) {
    dwExStyle = dwExStyle & 0xfffffdff;
  }
  bMenu = 0;
  dwStyle = GetExStyle(this);
  AdjustWindowRectEx(param_1,dwStyle,bMenu,dwExStyle);
  return;
}


