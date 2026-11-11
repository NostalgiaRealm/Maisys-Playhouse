
/* ==== CFrameWnd::IsTracking @ 004aba8a ==== 
 * signature: int __thiscall IsTracking(CFrameWnd * this)
 * body: 004aba8a-004abaa9
 * note: Library Function - Single Match  public: int __thiscall CFrameWnd::IsTracking(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CFrameWnd::IsTracking(void)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CFrameWnd::IsTracking(CFrameWnd *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x90);
  if (((iVar1 == 0) || (iVar1 == 0xe002)) || (iVar2 = 1, iVar1 == 0xe001)) {
    iVar2 = 0;
  }
  return iVar2;
}


