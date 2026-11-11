
/* ==== CWnd::OnDrawItem @ 004a9551 ==== 
 * signature: void __thiscall OnDrawItem(CWnd * this, int param_1, tagDRAWITEMSTRUCT * param_2)
 * body: 004a9551-004a958d
 * note: Library Function - Single Match  protected: void __thiscall CWnd::OnDrawItem(int,struct tagDRAWITEMSTRUCT *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CWnd::OnDrawItem(int,struct tagDRAWITEMSTRUCT *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::OnDrawItem(CWnd *this,int param_1,tagDRAWITEMSTRUCT *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)param_2 == 1) {
    piVar1 = FUN_004ac6c8(*(void **)(param_2 + 0x14));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(param_2);
      return;
    }
  }
  else {
    iVar2 = FUN_004aac76();
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_004a8882((int *)this);
  return;
}


