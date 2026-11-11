
/* ==== CWnd::IsWindowEnabled @ 004a82d5 ==== 
 * signature: int __thiscall IsWindowEnabled(CWnd * this)
 * body: 004a82d5-004a82f1
 * note: Library Function - Single Match  public: int __thiscall CWnd::IsWindowEnabled(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::IsWindowEnabled(void)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::IsWindowEnabled(CWnd *this)

{
  BOOL BVar1;
  int iVar2;
  
  if (*(int **)(this + 0x38) == (int *)0x0) {
    BVar1 = ::IsWindowEnabled(*(HWND *)(this + 0x1c));
    return BVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x004a82eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(**(int **)(this + 0x38) + 0xa8))();
  return iVar2;
}


