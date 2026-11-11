
/* ==== CWnd::OnEnterIdle @ 004ab1a1 ==== 
 * signature: void __thiscall OnEnterIdle(CWnd * this, uint param_1, CWnd * param_2)
 * body: 004ab1a1-004ab1f0
 * note: Library Function - Single Match  protected: void __thiscall CWnd::OnEnterIdle(unsigned int,class CWnd *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CWnd::OnEnterIdle(unsigned int,class CWnd *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::OnEnterIdle(CWnd *this,uint param_1,CWnd *param_2)

{
  int iVar1;
  tagMSG local_1c;
  
  iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0x121,0x121,1);
  while (iVar1 != 0) {
    DispatchMessageA(&local_1c);
    iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0x121,0x121,1);
  }
  FUN_004a8882((int *)this);
  return;
}


