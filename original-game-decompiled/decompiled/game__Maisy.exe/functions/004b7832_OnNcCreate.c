
/* ==== CMDIChildWnd::OnNcCreate @ 004b7832 ==== 
 * signature: int __thiscall OnNcCreate(CMDIChildWnd * this, tagCREATESTRUCTA * param_1)
 * body: 004b7832-004b7867
 * note: Library Function - Single Match  protected: int __thiscall CMDIChildWnd::OnNcCreate(struct tagCREATESTRUCTA *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: int __thiscall CMDIChildWnd::OnNcCreate(struct tagCREATESTRUCTA *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CMDIChildWnd::OnNcCreate(CMDIChildWnd *this,tagCREATESTRUCTA *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a8882((int *)this);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x60))(param_1);
    SetWindowLongA(*(HWND *)(this + 0x1c),-0x14,*(LONG *)(param_1 + 0x2c));
  }
  return (uint)(iVar1 != 0);
}


