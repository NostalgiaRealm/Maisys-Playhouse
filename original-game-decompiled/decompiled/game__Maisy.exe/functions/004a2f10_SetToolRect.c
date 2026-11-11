
/* ==== CToolTipCtrl::SetToolRect @ 004a2f10 ==== 
 * signature: void __thiscall SetToolRect(CToolTipCtrl * this, CWnd * param_1, uint param_2, tagRECT * param_3)
 * body: 004a2f10-004a2f53
 * note: Library Function - Single Match  public: void __thiscall CToolTipCtrl::SetToolRect(class CWnd *,unsigned int,struct tagRECT const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CToolTipCtrl::SetToolRect(class CWnd *,unsigned int,struct tagRECT const
   *)
   
   Library: Visual Studio 1998 Release */

void __thiscall
CToolTipCtrl::SetToolRect(CToolTipCtrl *this,CWnd *param_1,uint param_2,tagRECT *param_3)

{
  tagTOOLINFOA local_2c [16];
  undefined1 local_1c [24];
  
  FillInToolInfo(this,local_2c,param_1,param_2);
  FID_conflict__memcpy(local_1c,param_3,0x10);
  SendMessageA(*(HWND *)(this + 0x1c),0x406,0,(LPARAM)local_2c);
  return;
}


