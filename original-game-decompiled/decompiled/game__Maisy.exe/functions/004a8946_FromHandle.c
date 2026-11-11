
/* ==== CWnd::FromHandle @ 004a8946 ==== 
 * signature: CWnd * __stdcall FromHandle(HWND__ * param_1)
 * body: 004a8946-004a896f
 * note: Library Function - Single Match  public: static class CWnd * __stdcall CWnd::FromHandle(struct HWND__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static class CWnd * __stdcall CWnd::FromHandle(struct HWND__ *)
   
   Library: Visual Studio 1998 Release */

CWnd * CWnd::FromHandle(HWND__ *param_1)

{
  CMapPtrToPtr *this;
  CObject *this_00;
  
  this = (CMapPtrToPtr *)FID_conflict_afxMapHGDIOBJ();
  this_00 = FUN_004ae7e2(this,param_1);
  FUN_004a83a1(this_00,this);
  return (CWnd *)this_00;
}


