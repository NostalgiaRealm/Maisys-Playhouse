
/* ==== CControlBar::IsFloating @ 004b9c00 ==== 
 * signature: int __thiscall IsFloating(CControlBar * this)
 * body: 004b9c00-004b9c29
 * note: Library Function - Single Match  public: int __thiscall CControlBar::IsFloating(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CControlBar::IsFloating(void)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CControlBar::IsFloating(CControlBar *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0xd4))();
  if (iVar1 == 0) {
    if ((*(int *)(this + 0x70) == 0) || (iVar1 = 1, *(int *)(*(int *)(this + 0x70) + 0x78) == 0)) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = *(int *)(this + 0x78);
  }
  return iVar1;
}


