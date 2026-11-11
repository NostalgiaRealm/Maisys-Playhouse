
/* ==== CFrameWnd::OnDDEExecute @ 004b8c5d ==== 
 * signature: long __thiscall OnDDEExecute(CFrameWnd * this, uint param_1, long param_2)
 * body: 004b8c5d-004b8cfc
 * note: Library Function - Single Match  protected: long __thiscall CFrameWnd::OnDDEExecute(unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: long __thiscall CFrameWnd::OnDDEExecute(unsigned int,long)
   
   Library: Visual Studio 1998 Release */

long __thiscall CFrameWnd::OnDDEExecute(CFrameWnd *this,uint param_1,long param_2)

{
  LPCSTR lpString2;
  LPARAM lParam;
  int iVar1;
  CHAR local_214 [520];
  uint local_c;
  HGLOBAL local_8;
  
  UnpackDDElParam(1000,param_2,&local_c,(PUINT_PTR)&local_8);
  lpString2 = GlobalLock(local_8);
  lstrcpynA(local_214,lpString2,0x208);
  GlobalUnlock(local_8);
  lParam = ReuseDDElParam(param_2,1000,0x3e4,0x8000,(UINT_PTR)local_8);
  PostMessageA((HWND)param_1,0x3e4,*(WPARAM *)(this + 0x1c),lParam);
  iVar1 = CWnd::IsWindowEnabled((CWnd *)this);
  if (iVar1 != 0) {
    iVar1 = FUN_004bafca();
    (**(code **)(**(int **)(iVar1 + 4) + 0x98))(local_214);
  }
  return 0;
}


