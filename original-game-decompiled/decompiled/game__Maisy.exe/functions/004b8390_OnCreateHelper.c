
/* ==== CFrameWnd::OnCreateHelper @ 004b8390 ==== 
 * signature: int __thiscall OnCreateHelper(CFrameWnd * this, tagCREATESTRUCTA * param_1, CCreateContext * param_2)
 * body: 004b8390-004b83e5
 * note: Library Function - Single Match  protected: int __thiscall CFrameWnd::OnCreateHelper(struct tagCREATESTRUCTA *,struct CCreateContext *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: int __thiscall CFrameWnd::OnCreateHelper(struct tagCREATESTRUCTA *,struct
   CCreateContext *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CFrameWnd::OnCreateHelper(CFrameWnd *this,tagCREATESTRUCTA *param_1,CCreateContext *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_004a8882((int *)this);
  if (iVar1 == -1) {
    iVar2 = -1;
  }
  else {
    iVar1 = *(int *)this;
    iVar3 = (**(code **)(iVar1 + 0xe0))(param_1,param_2);
    iVar2 = -1;
    if (iVar3 != 0) {
      PostMessageA(*(HWND *)(this + 0x1c),0x362,0xe001,0);
      (**(code **)(iVar1 + 0xcc))(1);
      iVar2 = 0;
    }
  }
  return iVar2;
}


