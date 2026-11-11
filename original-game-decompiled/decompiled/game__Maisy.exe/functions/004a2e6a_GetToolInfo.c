
/* ==== CToolTipCtrl::GetToolInfo @ 004a2e6a ==== 
 * signature: int __thiscall GetToolInfo(CToolTipCtrl * this, CToolInfo * param_1, CWnd * param_2, uint param_3)
 * body: 004a2e6a-004a2e9b
 * note: Library Function - Single Match  public: int __thiscall CToolTipCtrl::GetToolInfo(class CToolInfo &,class CWnd *,unsigned int)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CToolTipCtrl::GetToolInfo(class CToolInfo &,class CWnd *,unsigned
   int)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall
CToolTipCtrl::GetToolInfo(CToolTipCtrl *this,CToolInfo *param_1,CWnd *param_2,uint param_3)

{
  LRESULT LVar1;
  
  FillInToolInfo(this,(tagTOOLINFOA *)param_1,param_2,param_3);
  *(CToolInfo **)(param_1 + 0x24) = param_1 + 0x28;
  LVar1 = SendMessageA(*(HWND *)(this + 0x1c),0x408,0,(LPARAM)param_1);
  return LVar1;
}


