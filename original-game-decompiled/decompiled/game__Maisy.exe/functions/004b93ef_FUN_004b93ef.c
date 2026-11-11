
/* ==== FUN_004b93ef @ 004b93ef ==== 
 * signature: bool __thiscall FUN_004b93ef(void * this, uint param_1)
 * body: 004b93ef-004b942e
 */

bool __thiscall FUN_004b93ef(void *this,uint param_1)

{
  CControlBar *this_00;
  ulong uVar1;
  int iVar2;
  
  this_00 = CFrameWnd::GetControlBar(this,param_1);
  if (this_00 != (CControlBar *)0x0) {
    iVar2 = 0;
    uVar1 = CWnd::GetExStyle((CWnd *)this_00);
    CFrameWnd::ShowControlBar(this,this_00,(uint)((uVar1 & 0x10000000) == 0),iVar2);
  }
  return this_00 != (CControlBar *)0x0;
}


