
/* ==== FUN_004b99bd @ 004b99bd ==== 
 * signature: undefined __thiscall FUN_004b99bd(void * this, int param_1)
 * body: 004b99bd-004b9aad
 */

void __thiscall FUN_004b99bd(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  tagRECT local_14;
  
  piVar1 = (int *)((int)this + 0xb0);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    uVar2 = *(uint *)((int)this + 0xb8);
    iVar3 = 1;
    if ((uVar2 & 4) == 0) {
      iVar3 = param_1;
    }
    *(uint *)((int)this + 0xb8) = uVar2 & 0xfffffff3;
    if ((iVar3 != 0) && (*(int **)((int)this + 0x68) != (int *)0x0)) {
      (**(code **)(**(int **)((int)this + 0x68) + 0x54))();
    }
    uVar4 = CWnd::GetExStyle(this);
    if ((uVar4 & 0x2000) == 0) {
      CWnd::RepositionBars(this,0,0xffff,0xe900,2,(tagRECT *)((int)this + 0x58),(tagRECT *)0x0,1);
    }
    else {
      local_14.left = 0;
      local_14.top = 0;
      local_14.right = 0x7fff;
      local_14.bottom = 0x7fff;
      CWnd::RepositionBars(this,0,0xffff,0xe900,1,&local_14,&local_14,0);
      CWnd::RepositionBars(this,0,0xffff,0xe900,2,(tagRECT *)((int)this + 0x58),&local_14,1);
      (**(code **)(*(int *)this + 100))(&local_14,0);
      CWnd::SetWindowPos(this,(CWnd *)0x0,0,0,local_14.right - local_14.left,
                         local_14.bottom - local_14.top,0x16);
    }
    *piVar1 = 0;
  }
  return;
}


