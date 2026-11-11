
/* ==== CFrameWnd::OnDDEInitiate @ 004b8ba9 ==== 
 * signature: long __thiscall OnDDEInitiate(CFrameWnd * this, uint param_1, long param_2)
 * body: 004b8ba9-004b8c5c
 * note: Library Function - Single Match  protected: long __thiscall CFrameWnd::OnDDEInitiate(unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: long __thiscall CFrameWnd::OnDDEInitiate(unsigned int,long)
   
   Library: Visual Studio 1998 Release */

long __thiscall CFrameWnd::OnDDEInitiate(CFrameWnd *this,uint param_1,long param_2)

{
  int iVar1;
  ATOM AVar2;
  CHAR local_108 [260];
  
  iVar1 = FUN_004bafca();
  iVar1 = *(int *)(iVar1 + 4);
  if (((((ATOM)param_2 != 0) && (AVar2 = (ATOM)((uint)param_2 >> 0x10), AVar2 != 0)) &&
      (*(ATOM *)(iVar1 + 0xa8) == (ATOM)param_2)) && (*(ATOM *)(iVar1 + 0xaa) == AVar2)) {
    GlobalGetAtomNameA(*(ATOM *)(iVar1 + 0xa8),local_108,0x103);
    GlobalAddAtomA(local_108);
    GlobalGetAtomNameA(*(ATOM *)(iVar1 + 0xaa),local_108,0x103);
    GlobalAddAtomA(local_108);
    SendMessageA((HWND)param_1,0x3e4,*(WPARAM *)(this + 0x1c),*(LPARAM *)(iVar1 + 0xa8));
  }
  return 0;
}


