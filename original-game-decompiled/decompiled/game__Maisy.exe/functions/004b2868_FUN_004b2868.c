
/* ==== FUN_004b2868 @ 004b2868 ==== 
 * signature: undefined __thiscall FUN_004b2868(void * this, int param_1)
 * body: 004b2868-004b2885
 */

void __thiscall FUN_004b2868(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = CWnd::IsTopParentActive(this);
    if (iVar1 != 0) {
      CWnd::SetFocus(this);
    }
  }
  return;
}


