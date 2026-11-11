
/* ==== CWnd::GetDlgItem @ 004a7f4c ==== 
 * signature: void __thiscall GetDlgItem(CWnd * this, int param_1, HWND__ * * param_2)
 * body: 004a7f4c-004a7f79
 * note: Library Function - Single Match  public: void __thiscall CWnd::GetDlgItem(int,struct HWND__ * *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWnd::GetDlgItem(int,struct HWND__ * *)const 
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::GetDlgItem(CWnd *this,int param_1,HWND__ **param_2)

{
  HWND pHVar1;
  
  if (*(int **)(this + 0x34) == (int *)0x0) {
    pHVar1 = ::GetDlgItem(*(HWND *)(this + 0x1c),param_1);
    *param_2 = pHVar1;
  }
  else {
    (**(code **)(**(int **)(this + 0x34) + 0x70))(param_1,param_2);
  }
  return;
}


