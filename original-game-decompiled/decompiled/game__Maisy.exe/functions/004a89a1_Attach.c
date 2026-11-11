
/* ==== CWnd::Attach @ 004a89a1 ==== 
 * signature: int __thiscall Attach(CWnd * this, HWND__ * param_1)
 * body: 004a89a1-004a89de
 * note: Library Function - Single Match  public: int __thiscall CWnd::Attach(struct HWND__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::Attach(struct HWND__ *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::Attach(CWnd *this,HWND__ *param_1)

{
  CMapPtrToPtr *this_00;
  CAssoc *pCVar1;
  
  if (param_1 != (HWND__ *)0x0) {
    this_00 = (CMapPtrToPtr *)FID_conflict_afxMapHGDIOBJ();
    *(HWND__ **)(this + 0x1c) = param_1;
    pCVar1 = FUN_004a5ab8(this_00,param_1);
    *(CWnd **)pCVar1 = this;
    FUN_004a83a1(this,this_00);
  }
  return (uint)(param_1 != (HWND__ *)0x0);
}


