
/* ==== CWnd::OnCtlColor @ 004ab1f1 ==== 
 * signature: HBRUSH__ * __thiscall OnCtlColor(CWnd * this, CDC * param_1, CWnd * param_2, uint param_3)
 * body: 004ab1f1-004ab21c
 * note: Library Function - Single Match  protected: struct HBRUSH__ * __thiscall CWnd::OnCtlColor(class CDC *,class CWnd *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: struct HBRUSH__ * __thiscall CWnd::OnCtlColor(class CDC *,class CWnd *,unsigned int)
   
   Library: Visual Studio 1998 Release */

HBRUSH__ * __thiscall CWnd::OnCtlColor(CWnd *this,CDC *param_1,CWnd *param_2,uint param_3)

{
  int iVar1;
  HBRUSH__ *local_4;
  
  iVar1 = FUN_004aac53(param_2,&local_4);
  if (iVar1 == 0) {
    local_4 = (HBRUSH__ *)FUN_004a8882((int *)this);
  }
  return local_4;
}


