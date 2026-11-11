
/* ==== CToolTipCtrl::UpdateTipText @ 004a2f8d ==== 
 * signature: void __thiscall UpdateTipText(CToolTipCtrl * this, uint param_1, CWnd * param_2, uint param_3)
 * body: 004a2f8d-004a2fe2
 * note: Library Function - Single Match  public: void __thiscall CToolTipCtrl::UpdateTipText(unsigned int,class CWnd *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CToolTipCtrl::UpdateTipText(unsigned int,class CWnd *,unsigned int)
   
   Library: Visual Studio 1998 Release */

void __thiscall
CToolTipCtrl::UpdateTipText(CToolTipCtrl *this,uint param_1,CWnd *param_2,uint param_3)

{
  CToolTipCtrl *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CString::LoadStringA((CString *)(unaff_EBP + -0x10),*(uint *)(unaff_EBP + 8));
  UpdateTipText(this_00,*(char **)(unaff_EBP + -0x10),*(CWnd **)(unaff_EBP + 0xc),
                *(uint *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a2fed();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


