
/* ==== CToolTipCtrl::GetText @ 004a2e1d ==== 
 * signature: void __thiscall GetText(CToolTipCtrl * this, CString * param_1, CWnd * param_2, uint param_3)
 * body: 004a2e1d-004a2e69
 * note: Library Function - Single Match  public: void __thiscall CToolTipCtrl::GetText(class CString &,class CWnd *,unsigned int)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CToolTipCtrl::GetText(class CString &,class CWnd *,unsigned int)const 
   
   Library: Visual Studio 1998 Release */

void __thiscall
CToolTipCtrl::GetText(CToolTipCtrl *this,CString *param_1,CWnd *param_2,uint param_3)

{
  tagTOOLINFOA local_2c [36];
  undefined4 local_8;
  
  FillInToolInfo(this,local_2c,param_2,param_3);
  local_8 = FUN_004ac16a(param_1,0x100);
  SendMessageA(*(HWND *)(this + 0x1c),0x40b,0,(LPARAM)local_2c);
  CString::ReleaseBuffer(param_1,-1);
  return;
}


