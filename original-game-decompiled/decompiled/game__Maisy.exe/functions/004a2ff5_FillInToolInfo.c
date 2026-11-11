
/* ==== CToolTipCtrl::FillInToolInfo @ 004a2ff5 ==== 
 * signature: void __thiscall FillInToolInfo(CToolTipCtrl * this, tagTOOLINFOA * param_1, CWnd * param_2, uint param_3)
 * body: 004a2ff5-004a304d
 * note: Library Function - Single Match  public: void __thiscall CToolTipCtrl::FillInToolInfo(struct tagTOOLINFOA &,class CWnd *,unsigned int)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CToolTipCtrl::FillInToolInfo(struct tagTOOLINFOA &,class CWnd *,unsigned
   int)const 
   
   Library: Visual Studio 1998 Release */

void __thiscall
CToolTipCtrl::FillInToolInfo(CToolTipCtrl *this,tagTOOLINFOA *param_1,CWnd *param_2,uint param_3)

{
  HWND pHVar1;
  HWND hWnd;
  
  hWnd = (HWND)0x0;
  _memset(param_1,0,0x28);
  *(undefined4 *)param_1 = 0x28;
  if (param_2 != (CWnd *)0x0) {
    hWnd = *(HWND *)(param_2 + 0x1c);
  }
  if (param_3 == 0) {
    pHVar1 = GetParent(hWnd);
    *(HWND *)(param_1 + 8) = pHVar1;
    *(HWND *)(param_1 + 0xc) = hWnd;
    *(undefined4 *)(param_1 + 4) = 1;
  }
  else {
    *(HWND *)(param_1 + 8) = hWnd;
    *(uint *)(param_1 + 0xc) = param_3;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


