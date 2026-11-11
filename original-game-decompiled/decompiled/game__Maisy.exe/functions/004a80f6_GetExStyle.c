
/* ==== CWnd::GetExStyle @ 004a80f6 ==== 
 * signature: ulong __thiscall GetExStyle(CWnd * this)
 * body: 004a80f6-004a8111
 * note: Library Function - Single Match  public: unsigned long __thiscall CWnd::GetExStyle(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: unsigned long __thiscall CWnd::GetExStyle(void)const 
   
   Library: Visual Studio 1998 Release */

ulong __thiscall CWnd::GetExStyle(CWnd *this)

{
  ulong uVar1;
  
  if (*(int **)(this + 0x38) == (int *)0x0) {
    uVar1 = GetWindowLongA(*(HWND *)(this + 0x1c),-0x10);
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x004a810e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(this + 0x38) + 0x74))();
  return uVar1;
}


