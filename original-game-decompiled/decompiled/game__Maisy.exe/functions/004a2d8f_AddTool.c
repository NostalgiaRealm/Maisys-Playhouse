
/* ==== CToolTipCtrl::AddTool @ 004a2d8f ==== 
 * signature: int __thiscall AddTool(CToolTipCtrl * this, CWnd * param_1, uint param_2, tagRECT * param_3, uint param_4)
 * body: 004a2d8f-004a2de9
 * note: Library Function - Single Match  public: int __thiscall CToolTipCtrl::AddTool(class CWnd *,unsigned int,struct tagRECT const *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CToolTipCtrl::AddTool(class CWnd *,unsigned int,struct tagRECT const
   *,unsigned int)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CToolTipCtrl::AddTool(CToolTipCtrl *this,CWnd *param_1,uint param_2,tagRECT *param_3,uint param_4)

{
  int iVar1;
  LRESULT LVar2;
  tagTOOLINFOA local_2c [16];
  undefined1 local_1c [16];
  undefined4 local_c;
  uint local_8;
  
  FillInToolInfo(this,local_2c,param_1,param_4);
  if (param_3 != (tagRECT *)0x0) {
    FID_conflict__memcpy(local_1c,param_3,0x10);
  }
  iVar1 = FUN_004bafca();
  local_c = *(undefined4 *)(iVar1 + 0xc);
  local_8 = param_2 & 0xffff;
  LVar2 = SendMessageA(*(HWND *)(this + 0x1c),0x404,0,(LPARAM)local_2c);
  return LVar2;
}


