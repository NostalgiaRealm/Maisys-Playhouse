
/* ==== CFrameWnd::UpdateFrameTitleForDocument @ 004b961a ==== 
 * signature: void __thiscall UpdateFrameTitleForDocument(CFrameWnd * this, char * param_1)
 * body: 004b961a-004b971a
 * note: Library Function - Single Match  protected: void __thiscall CFrameWnd::UpdateFrameTitleForDocument(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::UpdateFrameTitleForDocument(char const *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::UpdateFrameTitleForDocument(CFrameWnd *this,char *param_1)

{
  ulong uVar1;
  int iVar2;
  LPCSTR pCVar3;
  int iVar4;
  CHAR local_208 [516];
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar1 & 0x4000) == 0) {
    lstrcpyA(local_208,*(LPCSTR *)(this + 0xac));
    if (param_1 != (char *)0x0) {
      lstrcatA(local_208," - ");
      lstrcatA(local_208,param_1);
      iVar4 = *(int *)(this + 0x40);
      if (0 < iVar4) {
        pCVar3 = ":%d";
        iVar2 = lstrlenA(local_208);
        wsprintfA(local_208 + iVar2,pCVar3,iVar4);
      }
    }
  }
  else {
    local_208[0] = '\0';
    if (param_1 != (char *)0x0) {
      lstrcpyA(local_208,param_1);
      iVar4 = *(int *)(this + 0x40);
      if (0 < iVar4) {
        pCVar3 = ":%d";
        iVar2 = lstrlenA(local_208);
        wsprintfA(local_208 + iVar2,pCVar3,iVar4);
      }
      lstrcatA(local_208," - ");
    }
    lstrcatA(local_208,*(LPCSTR *)(this + 0xac));
  }
  AfxSetWindowText(*(HWND__ **)(this + 0x1c),local_208);
  return;
}


