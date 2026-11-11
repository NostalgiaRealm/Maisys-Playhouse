
/* ==== CToolTipCtrl::Create @ 004a2b60 ==== 
 * signature: int __thiscall Create(CToolTipCtrl * this, CWnd * param_1, ulong param_2)
 * body: 004a2b60-004a2bb4
 * note: Library Function - Single Match  public: int __thiscall CToolTipCtrl::Create(class CWnd *,unsigned long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CToolTipCtrl::Create(class CWnd *,unsigned long)
   
   Library: Visual Studio 1998 Release */

int __thiscall CToolTipCtrl::Create(CToolTipCtrl *this,CWnd *param_1,ulong param_2)

{
  HWND__ *pHVar1;
  int iVar2;
  
  pHVar1 = (HWND__ *)0x0;
  if (param_1 != (CWnd *)0x0) {
    pHVar1 = *(HWND__ **)(param_1 + 0x1c);
  }
  iVar2 = CWnd::CreateEx((CWnd *)this,0,"tooltips_class32",(char *)0x0,param_2 | 0x80000000,
                         -0x80000000,-0x80000000,-0x80000000,-0x80000000,pHVar1,(HMENU__ *)0x0,
                         (void *)0x0);
  if (iVar2 != 0) {
    if (param_1 == (CWnd *)0x0) {
      *(undefined4 *)(this + 0x20) = 0;
    }
    else {
      *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    }
  }
  return iVar2;
}


