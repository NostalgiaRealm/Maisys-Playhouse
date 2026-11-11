
/* ==== CWnd::SetFocus @ 004a8315 ==== 
 * signature: CWnd * __thiscall SetFocus(CWnd * this)
 * body: 004a8315-004a8337
 * note: Library Function - Single Match  public: class CWnd * __thiscall CWnd::SetFocus(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CWnd * __thiscall CWnd::SetFocus(void)
   
   Library: Visual Studio 1998 Release */

CWnd * __thiscall CWnd::SetFocus(CWnd *this)

{
  HWND pHVar1;
  CWnd *pCVar2;
  
  if (*(int **)(this + 0x38) == (int *)0x0) {
    pHVar1 = ::SetFocus(*(HWND *)(this + 0x1c));
    pCVar2 = FromHandle(pHVar1);
    return pCVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x004a8331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar2 = (CWnd *)(**(code **)(**(int **)(this + 0x38) + 0xb0))();
  return pCVar2;
}


