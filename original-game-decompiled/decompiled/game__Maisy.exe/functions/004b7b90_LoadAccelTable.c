
/* ==== CFrameWnd::LoadAccelTable @ 004b7b90 ==== 
 * signature: int __thiscall LoadAccelTable(CFrameWnd * this, char * param_1)
 * body: 004b7b90-004b7bb1
 * note: Library Function - Single Match  public: int __thiscall CFrameWnd::LoadAccelTable(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CFrameWnd::LoadAccelTable(char const *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CFrameWnd::LoadAccelTable(CFrameWnd *this,char *param_1)

{
  int iVar1;
  HACCEL pHVar2;
  
  iVar1 = FUN_004bafca();
  pHVar2 = LoadAcceleratorsA(*(HINSTANCE *)(iVar1 + 0xc),param_1);
  *(HACCEL *)(this + 0x48) = pHVar2;
  return (uint)(pHVar2 != (HACCEL)0x0);
}


