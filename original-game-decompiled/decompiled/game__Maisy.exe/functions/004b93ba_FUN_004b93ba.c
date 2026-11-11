
/* ==== FUN_004b93ba @ 004b93ba ==== 
 * signature: undefined __thiscall FUN_004b93ba(void * this, int * param_1)
 * body: 004b93ba-004b93ee
 */

void __thiscall FUN_004b93ba(void *this,int *param_1)

{
  CControlBar *this_00;
  ulong uVar1;
  
  this_00 = CFrameWnd::GetControlBar(this,param_1[1]);
  if (this_00 == (CControlBar *)0x0) {
    param_1[7] = 1;
  }
  else {
    uVar1 = CWnd::GetExStyle((CWnd *)this_00);
    (**(code **)(*param_1 + 4))((uVar1 & 0x10000000) >> 0x1c);
  }
  return;
}


