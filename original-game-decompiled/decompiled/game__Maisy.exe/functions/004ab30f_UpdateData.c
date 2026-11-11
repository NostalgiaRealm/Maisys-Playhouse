
/* ==== CWnd::UpdateData @ 004ab30f ==== 
 * signature: int __thiscall UpdateData(CWnd * this, int param_1)
 * body: 004ab30f-004ab388
 * note: Library Function - Single Match  public: int __thiscall CWnd::UpdateData(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::UpdateData(int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::UpdateData(CWnd *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  _AFX_THREAD_STATE *p_Var3;
  CWnd *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffcc;
  CDataExchange::CDataExchange
            ((CDataExchange *)(unaff_EBP + -0x34),extraout_ECX,*(int *)(unaff_EBP + 8));
  p_Var3 = AfxGetThreadState();
  p_Var3 = p_Var3 + 0xbc;
  uVar1 = *(undefined4 *)(extraout_ECX + 0x1c);
  *(_AFX_THREAD_STATE **)(unaff_EBP + -0x14) = p_Var3;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)p_Var3;
  *(undefined4 *)p_Var3 = uVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  (**(code **)(*(int *)extraout_ECX + 0x88))(unaff_EBP + -0x34);
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  **(undefined4 **)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
  iVar2 = *(int *)(unaff_EBP + -0x18);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar2;
}


