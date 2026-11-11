
/* ==== CWnd::OnCompareItem @ 004a958e ==== 
 * signature: int __thiscall OnCompareItem(CWnd * this, int param_1, tagCOMPAREITEMSTRUCT * param_2)
 * body: 004a958e-004a95bc
 * note: Library Function - Single Match  protected: int __thiscall CWnd::OnCompareItem(int,struct tagCOMPAREITEMSTRUCT *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: int __thiscall CWnd::OnCompareItem(int,struct tagCOMPAREITEMSTRUCT *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::OnCompareItem(CWnd *this,int param_1,tagCOMPAREITEMSTRUCT *param_2)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = FUN_004aac76();
  if (iVar1 == 0) {
    local_4 = FUN_004a8882((int *)this);
  }
  return local_4;
}


