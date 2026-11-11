
/* ==== CToolTipCtrl::UpdateTipText @ 004a2f54 ==== 
 * signature: void __thiscall UpdateTipText(CToolTipCtrl * this, char * param_1, CWnd * param_2, uint param_3)
 * body: 004a2f54-004a2f8c
 * note: Library Function - Single Match  public: void __thiscall CToolTipCtrl::UpdateTipText(char const *,class CWnd *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CToolTipCtrl::UpdateTipText(char const *,class CWnd *,unsigned int)
   
   Library: Visual Studio 1998 Release */

void __thiscall
CToolTipCtrl::UpdateTipText(CToolTipCtrl *this,char *param_1,CWnd *param_2,uint param_3)

{
  tagTOOLINFOA local_2c [36];
  char *local_8;
  
  FillInToolInfo(this,local_2c,param_2,param_3);
  local_8 = param_1;
  SendMessageA(*(HWND *)(this + 0x1c),0x40c,0,(LPARAM)local_2c);
  return;
}


