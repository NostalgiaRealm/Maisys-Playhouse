
/* ==== CToolTipCtrl::AddTool @ 004a2d40 ==== 
 * signature: int __thiscall AddTool(CToolTipCtrl * this, CWnd * param_1, char * param_2, tagRECT * param_3, uint param_4)
 * body: 004a2d40-004a2d8e
 * note: Library Function - Single Match  public: int __thiscall CToolTipCtrl::AddTool(class CWnd *,char const *,struct tagRECT const *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CToolTipCtrl::AddTool(class CWnd *,char const *,struct tagRECT const
   *,unsigned int)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CToolTipCtrl::AddTool(CToolTipCtrl *this,CWnd *param_1,char *param_2,tagRECT *param_3,uint param_4)

{
  LRESULT LVar1;
  tagTOOLINFOA local_2c [16];
  undefined1 local_1c [20];
  char *local_8;
  
  FillInToolInfo(this,local_2c,param_1,param_4);
  if (param_3 != (tagRECT *)0x0) {
    FID_conflict__memcpy(local_1c,param_3,0x10);
  }
  local_8 = param_2;
  LVar1 = SendMessageA(*(HWND *)(this + 0x1c),0x404,0,(LPARAM)local_2c);
  return LVar1;
}


