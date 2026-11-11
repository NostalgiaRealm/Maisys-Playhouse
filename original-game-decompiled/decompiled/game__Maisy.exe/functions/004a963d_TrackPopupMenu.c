
/* ==== CMenu::TrackPopupMenu @ 004a963d ==== 
 * signature: int __thiscall TrackPopupMenu(CMenu * this, uint param_1, int param_2, int param_3, CWnd * param_4, tagRECT * param_5)
 * body: 004a963d-004a9695
 * note: Library Function - Single Match  public: int __thiscall CMenu::TrackPopupMenu(unsigned int,int,int,class CWnd *,struct tagRECT const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CMenu::TrackPopupMenu(unsigned int,int,int,class CWnd *,struct tagRECT
   const *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CMenu::TrackPopupMenu
          (CMenu *this,uint param_1,int param_2,int param_3,CWnd *param_4,tagRECT *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  _AFX_THREAD_STATE *p_Var3;
  BOOL BVar4;
  
  p_Var3 = AfxGetThreadState();
  uVar1 = *(undefined4 *)(p_Var3 + 0x54);
  uVar2 = *(undefined4 *)(p_Var3 + 0x58);
  if (param_4 == (CWnd *)0x0) {
    *(undefined4 *)(p_Var3 + 0x54) = 0;
  }
  else {
    *(undefined4 *)(p_Var3 + 0x54) = *(undefined4 *)(param_4 + 0x1c);
  }
  *(undefined4 *)(p_Var3 + 0x58) = *(undefined4 *)(this + 4);
  BVar4 = ::TrackPopupMenu(*(HMENU *)(this + 4),param_1,param_2,param_3,0,*(HWND *)(p_Var3 + 0x54),
                           param_5);
  *(undefined4 *)(p_Var3 + 0x54) = uVar1;
  *(undefined4 *)(p_Var3 + 0x58) = uVar2;
  return BVar4;
}


