
/* ==== FUN_004b270a @ 004b270a ==== 
 * signature: undefined __thiscall FUN_004b270a(void * this, LPRECT param_1, int param_2)
 * body: 004b270a-004b2774
 */

void __thiscall FUN_004b270a(void *this,LPRECT param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    CWnd::CalcWindowRect(this,param_1,0);
  }
  else {
    uVar1 = CWnd::GetExStyle(this);
    AdjustWindowRectEx(param_1,0,0,uVar1);
    uVar1 = CWnd::GetExStyle(this);
    if ((uVar1 & 0x200000) != 0) {
      iVar2 = DAT_004e5180;
      if ((uVar1 & 0x800000) != 0) {
        iVar2 = DAT_004e5180 + -1;
      }
      param_1->right = param_1->right + iVar2;
    }
    if ((uVar1 & 0x100000) != 0) {
      iVar2 = DAT_004e5184;
      if ((uVar1 & 0x800000) != 0) {
        iVar2 = DAT_004e5184 + -1;
      }
      param_1->bottom = param_1->bottom + iVar2;
    }
  }
  return;
}


