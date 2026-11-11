
/* ==== CFrameWnd::SetMessageText @ 004b92b5 ==== 
 * signature: void __thiscall SetMessageText(CFrameWnd * this, uint param_1)
 * body: 004b92b5-004b92cb
 * note: Library Function - Single Match  public: void __thiscall CFrameWnd::SetMessageText(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CFrameWnd::SetMessageText(unsigned int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::SetMessageText(CFrameWnd *this,uint param_1)

{
  SendMessageA(*(HWND *)(this + 0x1c),0x362,param_1,0);
  return;
}


