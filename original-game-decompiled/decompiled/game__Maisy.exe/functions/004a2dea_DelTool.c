
/* ==== CToolTipCtrl::DelTool @ 004a2dea ==== 
 * signature: void __thiscall DelTool(CToolTipCtrl * this, CWnd * param_1, uint param_2)
 * body: 004a2dea-004a2e1c
 * note: Library Function - Single Match  public: void __thiscall CToolTipCtrl::DelTool(class CWnd *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CToolTipCtrl::DelTool(class CWnd *,unsigned int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CToolTipCtrl::DelTool(CToolTipCtrl *this,CWnd *param_1,uint param_2)

{
  tagTOOLINFOA local_2c [40];
  
  FillInToolInfo(this,local_2c,param_1,param_2);
  SendMessageA(*(HWND *)(this + 0x1c),0x405,0,(LPARAM)local_2c);
  return;
}


