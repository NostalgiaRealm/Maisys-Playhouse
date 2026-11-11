
/* ==== CWnd::Detach @ 004a89df ==== 
 * signature: HWND__ * __thiscall Detach(CWnd * this)
 * body: 004a89df-004a8a16
 * note: Library Function - Single Match  public: struct HWND__ * __thiscall CWnd::Detach(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: struct HWND__ * __thiscall CWnd::Detach(void)
   
   Library: Visual Studio 1998 Release */

HWND__ * __thiscall CWnd::Detach(CWnd *this)

{
  CWnd *pCVar1;
  HWND__ *pHVar2;
  CMapPtrToPtr *this_00;
  
  pCVar1 = this + 0x1c;
  pHVar2 = *(HWND__ **)pCVar1;
  if (pHVar2 != (HWND__ *)0x0) {
    this_00 = (CMapPtrToPtr *)FID_conflict_afxMapHGDIOBJ();
    if (this_00 != (CMapPtrToPtr *)0x0) {
      CMapPtrToPtr::RemoveKey(this_00,*(void **)pCVar1);
    }
    *(int *)pCVar1 = 0;
  }
  *(undefined4 *)(this + 0x38) = 0;
  return pHVar2;
}


